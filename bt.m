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
  
  CValue : record
    pka:        AgentId;
    pkb:        AgentId;
    na:         AgentId;
    nb:         AgentId;
  end;
  
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
    cValue:     CValue;      -- commit value (Phase 2)
    eValue:     AgentId;      -- exchange verification value (Phase 3)
    addrMaster: AgentId;      -- The address of the initiator of the pairing
    addrSlave:  AgentId;      -- The address of the non-initiator
  end;

  InitiatorStates: enum {
    -- Phase 1
    I_SLEEP,          -- state after initialization
    I_SENT_KEY,       -- just sent public key

    -- Phase 2
    -- Just Works and Numeric Comparison [CVALUE -> NONCE -> VERIFIED]
    -- Passkey Entry [NONCE -> CVALUE -> VERIFIED]
    -- Out of Band [NONCE -> VERIFIED]
    I_WAIT_CVALUE,    -- waiting on phase 2 commit value from non-initiator
    I_WAIT_NONCE,     -- waiting on phase 2 nonce value from non-initiator
    I_VERIFIED,       -- complete phase 2 exchange and verified
    
    -- Phase 3
    I_WAIT_EVALUE,
    I_ACCEPTED_EX,

    -- Phase 4/5
    I_COMMITTED
  };
  
  Initiator: record
    state: InitiatorStates;
    responder: AgentId;
  end;
  
  ResponderStates: enum {
    -- Phase 1
    R_SLEEP,              -- state after initialization
    R_SENT_KEY,       -- just sent public key

    -- Phase 2
    -- Just Works and Numeric Comparison [CVALUE -> NONCE -> VERIFIED]
    -- Passkey Entry [NONCE -> CVALUE -> VERIFIED]
    -- Out of Band [NONCE -> VERIFIED]
    -- R_SENT_CVALUE,    -- waiting on phase 2 commit value from non-initiator
    R_WAIT_NONCE,     -- waiting on phase 2 nonce value from non-initiator
    R_VERIFIED,       -- complete phase 2 exchange and verified
    
    -- Phase 3
    R_WAIT_EVALUE,
    R_ACCEPTED_EX,

    -- Phase 4/5
    R_COMMITTED
  };
  
  Responder: record
    state: ResponderStates;
    initiator: AgentId;
  end;
  
  Intruder: record 
    messages: multiset[MaxKnowledge] of Message;
  end;
  
-- -----------------------------------------------------------------------------
var
  net: multiset[NetworkSize] of Message;  -- network
  ini: array[InitiatorId] of Initiator;   -- initiators
  res: array[ResponderId] of Responder;   -- responders
  int:  array[IntruderId] of Intruder;    -- intruders

--------------------------------------------------------------------------------
-- rules
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
-- behavior of initiator

-- Phase 1
-- initiator i starts protocol with responder or intruder j (step 1a)
ruleset i: InitiatorId do
  ruleset j: AgentId do
    rule 10 "Initiator starts protocol (step 1a)"
      
      init[i].state = I_SLEEP &
      !ismember(j, InitiatorId) &
      multisetcount(l: net, true) < NetworkSize
      
    ==>
      
    var
      outM: Message;
    
    begin
      undefine outM;
      outM.mType        := M_PublicKey;
      outM.source       := i;
      outM.dest         := j;
      outM.hashed       := false;
      
      multisetadd (outM, net);
      
      ini[i].state      := I_SENT_KEY;
      init[i].responder := j;
    end;
  end;
end;

-- Phase 2
-- initiator i reacts to  commitment code received (step 6a)
ruleset i: InitiatorId do
  choose j: net do
    rule 20 "initiator reacts to commitment code recieved (step 6a)"



  end;
end;

--------------------------------------------------------------------------------
-- behavior of responder

-- responder i reacts to public key received from initiator or intruder j (step 1b)
ruleset j: ResponderId do
  ruleset i: AgentId do
    choose k: net do
      rule 11 "Responder sends back public key (step 1b)"
    
        res[j].state = I_SLEEP &
        !ismember(i, ResponderId) &
        net[k].dest = j &
        multisetcount (l:net, true) < NetworkSize
    
    ==>
    
    var
      outM: Message;
    
    begin
      undefine outM;
      outM.mType        := M_PublicKey;
      outM.source       := j;
      outM.dest         := i;
      outM.hashed       := false;
      
      multisetadd (outM, net);
      
      res[j].state      := R_SENT_KEY;
      res[j].initiator  := i;
    end;
  end;
end;

-- responder j computes commitment and sends to initiator i (step 3c)
ruleset j: ResponderId do
  ruleset i: AgentId do
    rule 40 "Responder sends commitment to initiator (step 4)"
      
      res[j].state = R_SENT_KEY &
      !ismember(i, ResponderId) &
      ini[i].state = I_SENT_KEY &
      multisetcount (l:net, true) < NetworkSize
    
    ==>
    
    var
      outM: Message;
      outCValue: CValue;
    
    begin
      undefine outCValue;
      outCValue.pka     := i;
      outCValue.pkb     := j;
      outCValue.nb      := j;
      undefine outCValue.na;
      
      undefine outM;
      outM.mType        := M_CommitValue;
      outM.source       := j;
      outM.dest         := i;
      outM.cValue       := outCValue;
      
      multisetadd (outM, net);
      
      res[j].state      := R_WAIT_NONCE;
    end;
  end;
end;
      
      


  
  
  
  
  
  
  
  
  
  
  
  
  
