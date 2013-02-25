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
  MaxInitiators:  7;  -- maximum number of initiators per responder
  NumResponders:  1;  -- number of responders
  NumIntruders:   1;  -- number of intruders
  NetworkSize:   10;  -- max. number of outstanding messages in network
  MaxKnowledge:  10;  -- max. number of messages intruder can remember

-- -----------------------------------------------------------------------------
type
  InitiatorId:  scalarset (NumInitiators);  -- identifiers
  ResponderId:  scalarset (NumResponders);
  IntruderId:   scalarset (NumIntruders);

  AgentId:      union {InitiatorId, ResponderId, IntruderId};
  
  -- CValue
  CValue : record
    pka:  AgentId;
    pkb:  AgentId;
    nb:   AgentId;
  end;

  -- EValue
  EValue : record
    pka:    AgentId;  -- pka and pkb in conjunction should be checked as DHKey
    pkb:    AgentId;
    na:     AgentId;  -- nonce value exchanged in phase 2
    nb:     AgentId;  -- nonce value exchanged in phase 2
    r:      AgentId;  -- random ra/rb value in phase 2
    source: AgentId;  -- address of who is sending
    dest:   AgentId;  -- address of who is receiving
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
    publickey:  AgentId;      -- public key
    cValue:     CValue;       -- commit value (Phase 2)
    eValue:     EValue;       -- exchange verification value (Phase 3)
    addrMaster: AgentId;      -- The address of the initiator of the pairing
    addrSlave:  AgentId;      -- The address of the non-initiator
  end;

  InitiatorStates: enum {
    -- Phase 1
    I_SLEEP,          -- state after initialization
    I_SENT_KEY,       -- just sent public key
    I_PHASEONE_DONE,  -- received public key from b

    -- Phase 2
    I_WAIT_NONCE,     -- waiting on phase 2 nonce value from non-initiator
    I_PHASETWO_DONE,  -- complete phase 2 exchange and verified
    
    -- Phase 3
    I_WAIT_EVALUE,
    I_PHASETHREE_DONE,

    -- Phase 4/5
    I_COMMITTED
  };
  
  Initiator: record
    state: InitiatorStates;
    responder: AgentId;
    responder_pkb: AgentId;   -- recieved public key in phase 1
    responder_rb: AgentId;    -- recieved rb value if any
    responder_nb: AgentId;    -- recieved nonce in phase 2
    responder_cb: CValue;     -- received commitment value
  end;
  
  ResponderStates: enum {
    -- Phase 1
    R_SLEEP,              -- state after initialization
    R_PHASEONE_DONE,      -- just sent public key and finished with phase 1

    -- Phase 2
    R_WAIT_NONCE,     -- waiting on phase 2 nonce value from non-initiator
    R_PHASETWO_DONE,  -- complete phase 2 exchange and verified
    
    -- Phase 3
    R_PHASETHREE_DONE,

    -- Phase 4/5
    R_COMMITTED
  };
  
  Pairing: record
    state:          ResponderStates;
    initiator:      AgentId;
    initiator_pka:  AgentId;    -- recieved public key in phase 1
    initiator_ra:   AgentId;    -- received random value
    initiator_na:   AgentId;    -- recieved nonce in phase 2
    initiator_ca:   CValue;     -- received commitment value
  end;
  
  Responder: record
    pairings: multiset[MaxInitiators] of Pairing;
  end;
  
  Intruder: record 
    messages: multiset[MaxKnowledge] of Message;
  end;
  
-- -----------------------------------------------------------------------------
var
  net: multiset[NetworkSize] of Message;  -- network
  ini: array[InitiatorId] of Initiator;   -- initiators
  res: array[ResponderId] of Responder;   -- responders
  int: array[IntruderId] of Intruder;     -- intruders

--------------------------------------------------------------------------------
-- rules
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
-- behavior of initiator

-- Phase 1 =====================================================================
-- initiator i starts protocol with responder or intruder j (step 1a)
ruleset i: InitiatorId do
  ruleset j: AgentId do
    rule 10 "initiator starts protocol (step 1a)"
      
      ini[i].state = I_SLEEP &
      !ismember(j, InitiatorId) &
      multisetcount(l: net, true) < NetworkSize
      
    ==>
      
    var
      outM: Message;
    
    begin
      undefine outM;
      outM.mType        := M_PublicKey;
      outM.source       := i;
      outM.dest         := j;   -- send to responder or intruder
      outM.publickey    := i;   -- attach public key of initiator
      outM.hashed       := false;
      
      multisetadd (outM, net);
      
      ini[i].state      := I_SENT_KEY;
      ini[i].responder  := j;
    end;
  end;
end;

-- initiator i reacts to public key from responder or intruder (step 1b done)
ruleset i: InitiatorId do
  choose k: net do
    rule 12 "initiator reacts to public key response (step 1b done)"
      
      ini[i].state = I_SENT_KEY &
      net[k].dest = i
  
    ==>
    
    var
      inM: Message;
    
    begin
      inM := net[k];
      multisetremove (k, net);

      if inM.mType = M_PublicKey then
        if inM.source = ini[i].responder then
          ini[i].responder_pkb  := inM.publickey;
          ini[i].state          := I_PHASEONE_DONE;
        end;
      end;
    end;
  end;
end;

-- Phase 2 =====================================================================
-- initiator i reacts to commit value from responder and sends nonce (step 5)
ruleset i: InitiatorId do
  choose j: net do
    rule 50 "initiator reacts to commit value received and sends nonce (step 5)"

      ini[i].state = I_PHASEONE_DONE &
      net[j].dest = i

    ==>

    var
      inM:  Message;  -- incoming message
      outM: Message;  -- outgoing message

    begin
      inM := net[j];
      multisetremove (j, net);

      if inM.mType = M_CommitValue & inM.hashed then -- correct message type
        if inM.source = ini[i].responder then
          ini[i].responder_cb := inM.cValue;  -- store cb information

          -- send nonce to responder
          undefine outM;
          outM.mType        := M_Nonce;
          outM.source       := i;
          outM.dest         := ini[i].responder;
          outM.nonce        := i;
          outM.hashed       := false;

          multisetadd (outM, net);

          ini[i].state := I_WAIT_NONCE;
          -- ra = rb = 0 in protocol we'll use their IDs to model who sent it
          ini[i].responder_rb := ini[i].responder;
        end;
      end;
    end;
  end;
end;

-- initiator i reacts to nonce received and checks CValue (step 6a)
ruleset i: InitiatorId do
  choose j: net do
    rule 61 "initiator reacts to nonce recieved and checks CValue (step 6a)"

      ini[i].state = I_WAIT_NONCE &
      net[j].dest = i &
      !ismember(net[j].source, InitiatorId)

    ==>

    var
      inM:  Message;  -- incoming message
      outM: Message;  -- outgoing message

    begin
      inM := net[j];
      multisetremove (j, net);

      if inM.mType = M_Nonce & inM.source = ini[i].responder then -- get nb
        ini[i].responder_nb := inM.nonce;

        -- verification
        if ini[i].responder_cb.pka = i &
           ini[i].responder_cb.pkb = ini[i].responder_pkb &
           ini[i].responder_cb.nb = ini[i].responder_nb then
          ini[i].state := I_PHASETWO_DONE;
        else
          --error "commitment value does not match -- aborted pairing"
        end;
      end;

    end;
  end;
end;

-- Phase 3 =====================================================================
-- initiator i initiates the exchange verification stage (step 10)
ruleset i: InitiatorId do
  rule 100 "initiator initiates the exchange verification (step 10)"
    
    ini[i].state = I_PHASETWO_DONE &
    multisetcount(l: net, true) < NetworkSize
    
  ==>
    
  var
    outM: Message;
    outEValue: EValue;

  begin
    undefine outEValue;
    outEValue.pka     := i;
    outEValue.pkb     := ini[i].responder_pkb;
    outEValue.na      := i;
    outEValue.nb      := ini[i].responder_nb;
    outEValue.r       := ini[i].responder_rb;
    outEValue.source  := i;
    outEValue.dest    := ini[i].responder;

    undefine outM;
    outM.mType        := M_ExchangeVerif;
    outM.source       := i;
    outM.dest         := ini[i].responder;  -- send to responder or intruder
    outM.eValue       := outEValue;
    outM.hashed       := true;
    
    multisetadd (outM, net);
    
    ini[i].state      := I_WAIT_EVALUE;
  end;
end;

--------------------------------------------------------------------------------
-- behavior of responder

-- Phase 1 =====================================================================
-- responder j reacts to public key from initiator or intruder i (step 1b)
ruleset j: ResponderId do
  choose k: net do
    rule 11 "responder reacts to public key and sends back pkb (step 1b)"
      
      !ismember(net[k].source, ResponderId) &
      net[k].dest = j &
      multisetcount (l:res[j].pairings, 
                     res[j].pairings[l].initiator = net[k].source) = 0 &
      multisetcount (l:res[j].pairings, true) < MaxInitiators &
      multisetcount (l:net, true) <= NetworkSize
  
    ==>
    
    var
      pairing: Pairing;
      outM: Message;
      inM: Message;
    
    begin
      inM := net[k];
      multisetremove (k, net);

      if inM.mType = M_PublicKey then
        undefine pairing;                         -- set up the pairing info
        pairing.initiator     := inM.source;
        pairing.state         := R_SLEEP;
        pairing.initiator_pka := inM.publickey;
        
        undefine outM;
        outM.mType        := M_PublicKey;
        outM.source       := j;
        outM.dest         := pairing.initiator;
        outM.hashed       := false;
        outM.publickey    := j;                   -- responder public key
        
        multisetadd (outM, net);
        
        -- change the pairings to done with phase 1 after we sent the key
        pairing.state      := R_PHASEONE_DONE;
        
        multisetadd (pairing, res[j].pairings);
      end;
    end;
  end;
end;

-- Phase 2 =====================================================================
-- responder j computes commitment and sends to initiator i (step 4)
ruleset j: ResponderId do
  choose i: res[j].pairings do
    rule 40 "responder sends commitment value to initiator (step 4)"
      
      res[j].pairings[i].state = R_PHASEONE_DONE &
      multisetcount (l:net, true) < NetworkSize
    
    ==>
    
    var
      outM: Message;
      outCValue: CValue;
    
    begin
      undefine outCValue;
      outCValue.pka     := res[j].pairings[i].initiator_pka;
      outCValue.pkb     := j;
      outCValue.nb      := j;
      
      undefine outM;
      outM.mType        := M_CommitValue;
      outM.source       := j;
      outM.dest         := res[j].pairings[i].initiator;
      outM.cValue       := outCValue;
      outM.hashed       := true;
      
      multisetadd (outM, net);
      
      res[j].pairings[i].state        := R_WAIT_NONCE;
      res[j].pairings[i].initiator_ra := res[j].pairings[i].initiator;
    end;
  end;
end;

-- responder j responds to nonce and sends nonce to initiator (step 6)
ruleset j: ResponderId do
  choose k: net do
    choose i: res[j].pairings do
      rule 60 "responder gets nonce from and sends nonce to initiator (step 6)"
        
        res[j].pairings[i].state = R_WAIT_NONCE &
        net[k].source = res[j].pairings[i].initiator &
        net[k].dest = j &
        multisetcount (l:net, true) <= NetworkSize
      
      ==>
      
      var
        inM: Message;
        outM: Message;
        outCValue: CValue;
      
      begin
        inM               := net[k];
        multisetremove(k, net);

        if inM.mType = M_Nonce then
          res[j].pairings[i].initiator_na := inM.nonce;
          
          undefine outM;
          outM.mType        := M_Nonce;
          outM.source       := j;
          outM.dest         := res[j].pairings[i].initiator;
          outM.nonce        := j;
          outM.hashed       := true;
          
          multisetadd (outM, net);
          
          res[j].pairings[i].state      := R_PHASETWO_DONE;
        end;
      end;
    end;
  end;
end;

-- Phase 3 =====================================================================
-- responder j responds to exchange verification stage (step 10b/11)
ruleset j: ResponderId do
  choose k: net do
    choose i: res[j].pairings do
      rule 102 "responder responds to exchange verification (step 10b/11)"
        
        res[j].pairings[i].state = R_PHASETWO_DONE &
        net[k].source = res[j].pairings[i].initiator &
        net[k].dest = j &
        multisetcount(l: net, true) <= NetworkSize
        
      ==>
        
      var
        inM: Message;
        outM: Message;
        outEValue: EValue;
        pairing: Pairing;

      begin
        -- First verify that the received EValue is correctly formed
        -- We check hashes are equal by making sure all inputs are equal though
        -- in general access to inputs isn't likely but we assume hash collision
        -- resistent functions as we assume cryptographic primitives are secure
        inM   := net[k];
        multisetremove(k, net);
        pairing := res[j].pairings[i];

        if inM.eValue.pka = pairing.initiator_pka &
           inM.eValue.pkb = j &
           inM.eValue.na  = pairing.initiator_na &
           inM.eValue.nb  = j &
           inM.eValue.nb  = pairing.initiator_ra &
           inM.eValue.source = pairing.initiator &
           inM.eValue.dest   = j then
          -- Verified so send our EValue
          undefine outEValue;
          outEValue.pka     := pairing.initiator_pka;
          outEValue.pkb     := j;
          outEValue.na      := pairing.initiator_na;
          outEValue.nb      := j;
          outEValue.r       := pairing.initiator_ra;
          outEValue.source  := j;
          outEValue.dest    := pairing.initiator;

          undefine outM;
          outM.mType        := M_ExchangeVerif;
          outM.source       := j;
          outM.dest         := pairing.initiator;  -- send to responder or intruder
          outM.eValue       := outEValue;
          outM.hashed       := true;
          
          multisetadd (outM, net);
          
          -- Update state to be done with phase 3
          res[j].pairings[i].state := R_PHASETHREE_DONE;
        end;
      end;
    end;
  end;
end;

--------------------------------------------------------------------------------
-- start state
--------------------------------------------------------------------------------

startstate
  -- initialize initiators
  undefine ini;
  for i: InitiatorId do
    ini[i].state      := I_SLEEP;
    ini[i].responder  := i;
  end;

  -- initialize responders
  undefine res;
  for i: ResponderId do
    undefine res[i].pairings;
  end;

  -- initialize intruders
  undefine int;
     
  -- initialize network
  undefine net;
end;

--------------------------------------------------------------------------------
-- invariants
--------------------------------------------------------------------------------

-- TODO: Still need to model intruder
invariant "initiator correctly paired with good responder"
  forall i: InitiatorId do
    ini[i].state = I_PHASETWO_DONE 
    ->
    !ismember(ini[i].responder, IntruderId)
  end;
