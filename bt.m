--------------------------------------------------------------------------------
--
--  Murphi Model of the Bluetooth 4.0 SSP Protocols
--
--------------------------------------------------------------------------------
--
--  version:      1.0
--
--  written by:   David (Wei) Jia and Richard Hsu
--  date:         Feb 2013
--  affiliation:  Stanford University
--
--------------------------------------------------------------------------------
--  Steps of the SSP Protocol
--------------------------------------------------------------------------------
--
--  Phase 1: Public Key Exchange
--
--    A: Initiating Device
--    B: Non-Initiating Device
--
--    A -> B: PKa
--    B -> A: PKb
--    
--    Both now compute DHKey = P192(SKa, PKb)
--
--  P192 - DH based off Elliptic Curve - Assumed Secure
--
--------------------------------------------------------------------------------
--
--  Phase 2: Authentication Stage 1 - Note This Varies for Each Model
--  
--    A: Initiating Device
--    B: Non-Initiating Device
--
--  + Numeric Comparison
--    ==================
--    B -> A: Cb = f1(PKb, PKa, Nb, 0)  (Nb is nonce randomly selected by B)
--    A -> B: Na  (Nonce randomly selected by A)
--    B -> A: Nb
--    A: If f1(Pkb, PKa, Nb, 0) != Cb then ABORT
--    A: Va = g(PKa, PKb, Na, Nb)
--    B: Vb = g(PKa, PKb, Na, Nb)
--    User Enters "Okay" if both are equal.
--
--    g is SHA-256 hash function on the concatenation of the inputs.
--
--  + Just Works
--    ==========
--    B -> A: Cb = f1(PKb, PKa, Nb, 0)  (Nb is nonce randomly selected by B)
--    A -> B: Na  (Nonce randomly selected by A)
--    B -> A: Nb
--    A: If f1(Pkb, PKa, Nb, 0) != Cb then ABORT
--
--  + Passkey Entry
--    =============
--    A: Inject random passkey rai (set rbi = rai)
--    B: Inject same passkey rbi (set rai = rbi)
--    A -> B: Nai
--    B -> A: Nbi
--    A -> B: Cai = f1(PKa, PKb, Nai, rai)
--    B -> A: Cbi = f1(PKa, PKb, Nbi, rbi)
--    A: If f1(PKa, PKb, Nbi, rbi) != Cbi then ABORT
--    B: If f1(PKa, PKb, Nai, rai) != Cai then ABORT
--
--  + Out of Band
--    ===========
--    A: ra = rand, rb = 0
--    B: rb = rand, ra = 0
--    \\ This is in different communication channel which we'll assume secure
--    \\ A -> B: AddrA, ra, Ca = f1(PKa, PKa, ra, 0)
--    \\ B -> A: AddrB, rb, Cb = f1(PKb, PKb, rb, 0)
--    A: If f1(PKb, PKb, rb, 0) != Cb then ABORT
--    B: If f1(PKa, PKa, ra, 0) != Ca then ABORT
--    A -> B: Na
--    B -> A: Nb
--
--
--  f1 - 128-bit Commitment Value based off HMAC-SHA-256 with 128-bit key X
--  (First public key input).
--
--------------------------------------------------------------------------------
--
--  Phase 3: Authentication Stage 2
--
--    A: Initiating Device
--    B: Non-Initiating Device
--
--    A -> B: Ea = f3(DHKey, Na, Nb, rb, IOcapA, AddrA, AddrB)
--    B -> A: Eb = f3(DHKey, Nb, Na, ra, IOcapB, AddrB, AddrA)
--    A: If f3(DHKey, Nb, Na, ra, IOcapB, AddrB, AddrA) != Eb then ABORT
--    B: If f3(DHKey, Na, Nb, rb, IOcapA, AddrA, AddrB) != Ea then ABORT
--
--  f3 - Authentication Stage Check Value based off HMAC-SHA-256 with a
--  192-bit key W (Input DHKey)
--
--------------------------------------------------------------------------------
--
--  Phase 4: Link Key Calculations
--
--    A: Initiating Device
--    B: Non-Initiating Device
--
--    A/B: Both compute LK = f2(DHKey, Na, Nb, "btlk", AddrA, AddrB)
--
--  f2 is HMAC-SHA-256 with 192-bit key W (Input DHKey) bt outputs the
--  128-bit most significant bits of output.
--
--------------------------------------------------------------------------------
--
--  Phase 5: LMP Authentication and Encryption
--
--  At this point regular cryptographic protocols are used now that the link
--  key has been established and we assume these protocols are secure.
--
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
-- constants, types, and variables
--------------------------------------------------------------------------------

-- -----------------------------------------------------------------------------
const
  PHASETWO:       1;  -- SSP Phase 2 Protocol (1: JW | 2: NC | 3: PE | 4: OOB)

  NumInitiators:  1;  -- number of initiators
  NumResponders:  1;  -- number of responders
  NumIntruders:   1;  -- number of intruders
  NetworkSize:    1;  -- max. number of outstanding messages in network
  MaxKnowledge:  10;  -- max. number of messages intruder can remember

-- -----------------------------------------------------------------------------
type
  InitiatorId:  scalarset (NumInitiators);  -- identifiers
  ResponderId:  scalarset (NumResponders);
  IntuderId:    scalarset (NumIntruders);

  AgentId:      union {InitiatorId, ResponderId, IntruderId};

  MessageType : enum {    -- different types of messages
    M_PublicKey,          -- phase 1: Public Key Exchange - PKa/PKb
    M_CommitValue,        -- phase 2: Authentication Stage 1 - Ca/Cb
    M_Nonce,              -- phase 2: Authentication Stage 1 - Na/Nb
    M_ExchangeVerif       -- phase 3: Authentication Stage 2 - Ea/Eb
  };

  Message : record
    mType:      MessageType;  -- message type
    source:     AgentId;      -- source of message
    dest:       AgentId;      -- intended destination of message
    hashed:     boolean;      -- whether message is hashed value

    nonce:      AgentId;      -- nonce from source to dest
    addrMaster: AgentId;      -- The address of the initiator of the pairing
    addrSlave:  AgentId;      -- The address of the non-initiator
  end;

  InitiatorStates: enum {
    I_SLEEP,          -- state after initialization
    I_SENT_KEY,       -- just sent public key
    I_WAIT_CVALUE,    -- waiting on phase 2 commit value from non-initiator
    I_WAIT_NONCE,     -- waiting on phase 2 nonce value from non-initiator

  };
