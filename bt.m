--------------------------------------------------------------------------------
--
--  Murphi Model of the Bluetooth 4.0 SSP Protocols
--
--------------------------------------------------------------------------------
--
--  version:      1.0
--
--  written by:   David (Wei) Jia and Richard Hsu
--  date:         Feb/Mar 2013
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
--  + Passkey Entry - Not modeled as actually just NC done multiple times
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
--  + Out of Band - Not modeled as OOB assumed secure
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
--  Not modeled to reduce space exploration and by this time no messages passed.
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
--  Not modeled to reduce space exploration and by this time no messages passed.
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
  PHASETWO:       2;  -- SSP Phase 2 Protocol (1: JW | 2: NC)
  ASSUMEVALIDRESPONDER:   true;  -- Could be impersonating device

  NumInitiators:  3;  -- number of initiators
  MaxInitiators:  1;  -- maximum number of initiators per responder
  NumResponders:  1;  -- number of responders
  NumIntruders:   1;  -- number of intruders
  NetworkSize:   10;  -- max number of outstanding messages in network
  MaxKnowledge:  10;  -- max number of messages intruder can remember
  MaxPairings:   10;  -- max number of global pairs

-- -----------------------------------------------------------------------------
type
  InitiatorId:  scalarset (NumInitiators);  -- identifiers
  ResponderId:  scalarset (NumResponders);
  IntruderId:   scalarset (NumIntruders);

  AgentId:      union {InitiatorId, ResponderId, IntruderId};
  
  -- CValue
  CValue : record
    pk_send:  AgentId;    -- when created - pk of sender
    pk_recv:  AgentId;    -- when created - pk of receiver
    n_send:   AgentId;    -- when created - nonce of sender
  end;

  -- EValue
  EValue : record
    pk_send:    AgentId;  -- when created - pk of sender
    pk_recv:    AgentId;  -- when created - pk of receiver
    n_send:     AgentId;  -- when created - nonce of sender
    n_recv:     AgentId;  -- when created - nonce of receiver
    r_recv:     AgentId;  -- when created - random value generated by receiver
  end;

  -- Verification
  VValue : record
    pk_initiator:   AgentId;  -- public key of initiator
    pk_responder:   AgentId;  -- public key of responder
    n_initiator:    AgentId;  -- nonce sent by initiator
    n_responder:    AgentId;  -- nonce sent by responder
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

    nonce:      AgentId;      -- nonce from source to dest
    publickey:  AgentId;      -- public key
    cValue:     CValue;       -- commit value (Phase 2)
    eValue:     EValue;       -- exchange verification value (Phase 3)
  end;

  InitiatorStates: enum {
    -- Phase 1
    I_SLEEP,          -- state after initialization
    I_SENT_KEY,       -- just sent public key
    I_PHASEONE_DONE,  -- received public key from b

    -- Phase 2
    I_WAIT_NONCE,     -- waiting on phase 2 nonce value from non-initiator
    I_NC_VERIF_SET,   -- Numeric Comparison Phase 2
    I_PHASETWO_DONE,  -- complete phase 2 exchange and verified
    
    -- Phase 3
    I_WAIT_EVALUE,
    I_PAIRED
  };
  
  Initiator: record
    state: InitiatorStates;
    responder:    AgentId;
    responder_pk: AgentId;    -- recieved public key in phase 1
    responder_r:  AgentId;    -- recieved r value if any
    responder_n:  AgentId;    -- recieved nonce in phase 2
    responder_c:  CValue;     -- received commitment value
    linkKey:      boolean;    -- link key of the pairing
    vValue:       VValue;     -- verification token generated NC Phase 3
  end;
  
  ResponderStates: enum {
    -- Phase 1
    R_SLEEP,              -- state after initialization
    R_PHASEONE_DONE,      -- just sent public key and finished with phase 1

    -- Phase 2
    R_WAIT_NONCE,     -- waiting on phase 2 nonce value from non-initiator
    R_NC_VERIF_SET,   -- Numeric Comparison Phase 2
    R_PHASETWO_DONE,  -- complete phase 2 exchange and verified
    
    -- Phase 3
    R_PAIRED
  };
  
  Pairing: record
    state:          ResponderStates;
    initiator:      AgentId;
    initiator_pk:   AgentId;    -- recieved public key in phase 1
    initiator_r:    AgentId;    -- received random value
    initiator_n:    AgentId;    -- recieved nonce in phase 2
    initiator_c:    CValue;     -- received commitment value
    linkKey:        boolean;    -- link key of the pairing
    vValue:         VValue;     -- vvalue of the pairing
  end;
  
  -- Keep track of pairings for verification
  GlobalPairing: record
    initiator:  AgentId;
    responder:  AgentId;
  end;
  
  Responder: record
    pairings: multiset[MaxInitiators] of Pairing;
  end;
  
  Intruder: record 
    messages: multiset[MaxKnowledge] of Message;
    linkKeys: array[AgentId] of boolean;
    pk:       array[AgentId] of boolean;  -- Do we know their PK
    sent_pk:  array[AgentId] of boolean;  -- Did we send our PK to them
    nonce:    array[AgentId] of boolean;  -- Do we know their nonce
    sent_n:   array[AgentId] of boolean;  -- Did we send our nonce
  end;
  
-- -----------------------------------------------------------------------------
var
  net: multiset[NetworkSize] of Message;         -- network
  ini: array[InitiatorId] of Initiator;          -- initiators
  res: array[ResponderId] of Responder;          -- responders
  int: array[IntruderId] of Intruder;            -- intruders
  gpr: multiset[MaxPairings] of GlobalPairing;   -- pairings
  
--------------------------------------------------------------------------------
-- rules
--------------------------------------------------------------------------------

--------------------------------------------------------------------------------
-- behavior of initiator

-- Phase 1 =====================================================================
-- initiator i starts protocol with responder or intruder j (step 1a)
ruleset i: InitiatorId do
  ruleset j: AgentId do
    rule 99 "initiator starts protocol (step 1a)"
      
      ini[i].state = I_SLEEP &
      !ismember(j, InitiatorId) &
      multisetcount(l: net, true) < NetworkSize 
      
    ==>
      
    var
      outM: Message;
      gpairing: GlobalPairing;

    begin
      -- ASSUMEVALIDRESPONDER implies only responders can be initiated with
      if ismember(j, ResponderId) then
        undefine outM;
        outM.mType        := M_PublicKey;
        outM.source       := i;
        outM.dest         := j;   -- send to responder or intruder
        outM.publickey    := i;   -- attach public key of initiator
        
        multisetadd (outM, net);
        
        ini[i].state      := I_SENT_KEY;
        ini[i].responder  := j;

        undefine gpairing;
        gpairing.initiator  := i;
        gpairing.responder  := j;
        
        multisetadd (gpairing, gpr);
      else
        if (!ASSUMEVALIDRESPONDER) then
          undefine outM;
          outM.mType        := M_PublicKey;
          outM.source       := i;
          outM.dest         := j;   -- send to responder or intruder
          outM.publickey    := i;   -- attach public key of initiator
          
          multisetadd (outM, net);
          
          ini[i].state      := I_SENT_KEY;
          ini[i].responder  := j;

          undefine gpairing;
          gpairing.initiator  := i;
          gpairing.responder  := j;
          
          multisetadd (gpairing, gpr);
        end;
      end;
    end;
  end;
end;

-- initiator i reacts to public key from responder or intruder (step 1b done)
ruleset i: InitiatorId do
  choose k: net do
    rule 98 "initiator reacts to public key response (step 1b done)"
      
      ini[i].state = I_SENT_KEY &
      net[k].dest = i -- only deal with messages to me
  
    ==>
    
    var
      inM: Message;
    
    begin
      inM := net[k];
      multisetremove (k, net);  -- remove message from network

      if inM.mType = M_PublicKey then
        ini[i].responder_pk  := inM.publickey;
        ini[i].state         := I_PHASEONE_DONE;
      end;
    end;
  end;
end;

-- Phase 2 =====================================================================
-- initiator i reacts to commit value from responder and sends nonce (step 5)
ruleset i: InitiatorId do
  choose k: net do
    rule 97 "initiator reacts to commit value received and sends nonce (step 5)"

      (PHASETWO = 1 | PHASETWO = 2) &
      ini[i].state = I_PHASEONE_DONE &
      net[k].dest = i -- only deal with messages to me 

    ==>

    var
      inM:  Message;  -- incoming message
      outM: Message;  -- outgoing message

    begin
      inM := net[k];
      multisetremove (k, net);  -- remove message from network

      if inM.mType = M_CommitValue then -- correct message type
        ini[i].responder_c := inM.cValue;  -- store cb information

        -- send nonce to responder
        undefine outM;
        outM.mType        := M_Nonce;
        outM.source       := i;
        outM.dest         := ini[i].responder;
        outM.nonce        := i;   -- send my nonce over

        multisetadd (outM, net);

        ini[i].state := I_WAIT_NONCE;
        -- ra = rb = 0 in protocol we'll use their IDs to model who sent it
        ini[i].responder_r := ini[i].responder;
      end;
    end;
  end;
end;

-- initiator i reacts to nonce received and checks CValue (step 6a)
ruleset i: InitiatorId do
  choose k: net do
    rule 96 "initiator reacts to nonce recieved and checks CValue (step 6a)"

      (PHASETWO = 1 | PHASETWO = 2) &
      ini[i].state = I_WAIT_NONCE &
      net[k].dest = i    -- only deal with messages to me

    ==>

    var
      inM:        Message;  -- incoming message
      outM:       Message;  -- outgoing message
      newVValue:  VValue;   -- Verification value for Numeric Comparison

    begin
      inM := net[k];
      multisetremove (k, net);  -- remove message from network

      if inM.mType = M_Nonce then -- get nonce from responder
        ini[i].responder_n := inM.nonce;

        -- verification of c value
        -- always construct so that:
        --  send is whoever sent the packet
        --  recv is whoever receives the packet
        if ini[i].responder_c.pk_send = ini[i].responder_pk &
           ini[i].responder_c.pk_recv = i &
           ini[i].responder_c.n_send = ini[i].responder_n then
          
          if PHASETWO = 1 then -- Just Works
            ini[i].state := I_PHASETWO_DONE;
          end;

          if PHASETWO = 2 then -- Numeric Comparison
            -- Set the verification calculation
            undefine newVValue;
            newVValue.pk_initiator := i;
            newVValue.pk_responder := ini[i].responder;
            newVValue.n_initiator  := i;
            newVValue.n_responder  := ini[i].responder_n;

            ini[i].vValue := newVValue;
            ini[i].state := I_NC_VERIF_SET;
          end;
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
  rule 95 "initiator initiates the exchange verification (step 10)"
    
    ini[i].state = I_PHASETWO_DONE &
    multisetcount(l: net, true) < NetworkSize
    
  ==>
    
  var
    outM: Message;
    outEValue: EValue;

  begin
    undefine outEValue;
    outEValue.pk_send     := i;
    outEValue.pk_recv     := ini[i].responder_pk;
    outEValue.n_send      := i;
    outEValue.n_recv      := ini[i].responder_n;
    outEValue.r_recv      := ini[i].responder_r;   -- Ea has r = rb

    undefine outM;
    outM.mType        := M_ExchangeVerif;
    outM.source       := i;
    outM.dest         := ini[i].responder;  -- send to responder or intruder
    outM.eValue       := outEValue;
    
    multisetadd (outM, net);  -- send out
   
    -- transition state
    ini[i].state      := I_WAIT_EVALUE;
  end;
end;

-- initiator i checks the exchange verification value (step 11a)
ruleset i: InitiatorId do
  choose k: net do
    rule 94 "initiator checks the exchange verification value (step 11a)"
      
      ini[i].state = I_WAIT_EVALUE &
      net[k].dest = i 

    ==>
      
    var
      inM: Message;

    begin
      inM := net[k];
      multisetremove (k, net);  -- remove from the network

      if inM.mType = M_ExchangeVerif then
        if inM.eValue.pk_send = ini[i].responder_pk &
           inM.eValue.pk_recv = i &
           inM.eValue.n_send  = ini[i].responder_n &
           inM.eValue.n_recv  = i &
           inM.eValue.r_recv  = i then -- Eb should have r = ra
          -- Verified so can complete phase 3
          ini[i].state      := I_PAIRED;
          ini[i].linkKey    := true;

          -- Update the intruder state as this only is done if we pair
          if ismember(ini[i].responder, IntruderId) then
            alias a: ini[i].responder do
              if (int[a].pk[i] & int[a].sent_pk[i] &
                  int[a].nonce[i] & int[a].sent_n[i]) then
                  int[a].linkKeys[i] := true;
              end;
            end;
          end;
        else
          --error "(step 11a) exchange verification did not match"
        end;
      end;
    end;
  end;
end;

--------------------------------------------------------------------------------
-- behavior of responder

-- Phase 1 =====================================================================
-- responder j reacts to public key from initiator or intruder i (step 1b)
ruleset j: ResponderId do
  choose k: net do
    rule 99 "responder reacts to public key and sends back pkb (step 1b)"
      
      net[k].dest = j & -- make sure to me
      multisetcount (l:res[j].pairings, 
                     res[j].pairings[l].initiator = net[k].source) = 0 &
      multisetcount (l:res[j].pairings, true) < MaxInitiators &
      multisetcount (l:net, true) <= NetworkSize
  
    ==>
    
    var
      pairing: Pairing;
      inM: Message;
      outM: Message;
      gpairing: GlobalPairing;
    
    begin
      inM := net[k];
      multisetremove (k, net);

      if inM.mType = M_PublicKey then
        undefine pairing;                         -- set up the pairing info
        pairing.initiator     := inM.source;
        pairing.state         := R_SLEEP;
        pairing.initiator_pk  := inM.publickey;
        pairing.linkKey       := false;
        
        undefine outM;
        outM.mType        := M_PublicKey;
        outM.source       := j;
        outM.dest         := pairing.initiator;
        outM.publickey    := j;                   -- responder public key
        
        multisetadd (outM, net);

        -- Here we're saying send the public key so pretend to initiate a
        -- a connection
        -- Don't set up if we are actually doing a responding PublicKey
        -- Or if we've already set up the pairing
        if (multisetcount (g:gpr, 
                           (gpr[g].initiator = pairing.initiator & 
                            gpr[g].responder = j)) = 0) then
          undefine gpairing;
          gpairing.initiator  := pairing.initiator;
          gpairing.responder  := j;
          
          multisetadd (gpairing, gpr);
        end;
        
        -- change the pairings to done with phase 1 after we sent the key
        pairing.state       := R_PHASEONE_DONE;
        
        multisetadd (pairing, res[j].pairings);
      end;
    end;
  end;
end;

-- Phase 2 =====================================================================
-- responder j computes commitment and sends to initiator i (step 4)
ruleset j: ResponderId do
  choose i: res[j].pairings do
    rule 98 "responder sends commitment value to initiator (step 4)"
      
      (PHASETWO = 1 | PHASETWO = 2) &
      res[j].pairings[i].state = R_PHASEONE_DONE &
      multisetcount (l:net, true) < NetworkSize
    
    ==>
    
    var
      outM: Message;
      outCValue: CValue;
    
    begin
      undefine outCValue;
      outCValue.pk_send   := j;
      outCValue.pk_recv   := res[j].pairings[i].initiator_pk;
      outCValue.n_send    := j;
      
      undefine outM;
      outM.mType        := M_CommitValue;
      outM.source       := j;
      outM.dest         := res[j].pairings[i].initiator;
      outM.cValue       := outCValue;
      
      multisetadd (outM, net);
      
      res[j].pairings[i].state        := R_WAIT_NONCE;
      res[j].pairings[i].initiator_r  := res[j].pairings[i].initiator;
    end;
  end;
end;

-- responder j responds to nonce and sends nonce to initiator (step 6)
ruleset j: ResponderId do
  choose k: net do
    choose i: res[j].pairings do
      rule 97 "responder gets nonce from and sends nonce to initiator (step 6)"
        
        (PHASETWO = 1 | PHASETWO = 2) &
        res[j].pairings[i].state = R_WAIT_NONCE &
        net[k].dest = j &
        multisetcount (l:net, true) <= NetworkSize
      
      ==>
      
      var
        inM: Message;
        outM: Message;
        outCValue: CValue;
        newVValue: VValue;
      
      begin
        inM := net[k];
        multisetremove(k, net);

        if inM.mType = M_Nonce then
          res[j].pairings[i].initiator_n := inM.nonce;
          
          undefine outM;
          outM.mType        := M_Nonce;
          outM.source       := j;
          outM.dest         := res[j].pairings[i].initiator;
          outM.nonce        := j;
          
          multisetadd (outM, net);
          
          if PHASETWO = 1 then -- Just Works
            res[j].pairings[i].state      := R_PHASETWO_DONE;
          end;

          if PHASETWO = 2 then -- Numeric Comparison
            -- Set the verification calculation
            undefine newVValue;
            newVValue.pk_initiator := res[j].pairings[i].initiator_pk;
            newVValue.pk_responder := j;
            newVValue.n_initiator  := res[j].pairings[i].initiator_pk;
            newVValue.n_responder  := j;

            -- set vvalue in correspondance with initiator
            res[j].pairings[i].vValue := newVValue;
            res[j].pairings[i].state  := R_NC_VERIF_SET;
          end;
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
      rule 96 "responder responds to exchange verification (step 10b/11)"
        
        net[k].dest = j &
        res[j].pairings[i].state = R_PHASETWO_DONE &
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
        inM := net[k];
        multisetremove(k, net);

        alias pairing: res[j].pairings[i] do
          if inM.mType = M_ExchangeVerif then
            if inM.eValue.pk_send = pairing.initiator_pk &
               inM.eValue.pk_recv = j &
               inM.eValue.n_send  = pairing.initiator_n &
               inM.eValue.n_recv  = j &
               inM.eValue.r_recv  = j then -- Ea has r = rb
              -- Verified so send our EValue
              undefine outEValue;
              outEValue.pk_send := j;
              outEValue.pk_recv := pairing.initiator_pk;
              outEValue.n_send  := j;
              outEValue.n_recv  := pairing.initiator_n;
              outEValue.r_recv  := pairing.initiator_r;

              undefine outM;
              outM.mType        := M_ExchangeVerif;
              outM.source       := j;
              outM.dest         := pairing.initiator;  
              outM.eValue       := outEValue;
              
              multisetadd (outM, net);
              
              -- Update state to be done with phase 3
              res[j].pairings[i].state      := R_PAIRED;
              res[j].pairings[i].linkKey    := true;

              -- Update the intruder state as this only is done if we pair
              if ismember(res[j].pairings[i].initiator, IntruderId) then
                alias a: res[j].pairings[i].initiator do
                  if (int[a].pk[j] & int[a].sent_pk[j] &
                      int[a].nonce[j] & int[a].sent_n[j]) then
                      int[a].linkKeys[j] := true;
                  end;
                end;
              end;
            else
              --error "(step 10b) exchange verification did not match"
            end;
          end;
        end;
      end;
    end;
  end;
end;

--------------------------------------------------------------------------------
-- behavior of global pairing

-- responder and initiator have global pairing so verify
ruleset r: ResponderId do
  choose k: res[r].pairings do
    ruleset i: InitiatorId do
      rule 90 "responder and initiator check verification"

        (multisetcount(g:gpr, gpr[g].initiator = i & 
                             gpr[g].responder = r) > 0) &
        ini[i].state = I_NC_VERIF_SET &
        res[r].pairings[k].state = R_NC_VERIF_SET 

      ==>

      begin
        -- verify that the verification codes are same
        alias r_vValue: res[r].pairings[k].vValue do
          alias i_vValue: ini[i].vValue do
            if (r_vValue.pk_initiator = i_vValue.pk_initiator &
                r_vValue.pk_responder = i_vValue.pk_responder &
                r_vValue.n_initiator = i_vValue.n_initiator &
                r_vValue.n_responder = i_vValue.n_responder) then
              -- verified so move forward
              res[r].pairings[k].state := R_PHASETWO_DONE;
              ini[i].state := I_PHASETWO_DONE;
            end;
          end;
        end;
      end;
    end;
  end;
end;

-- intruder and initiator have global pairing so 'verification' occurs
ruleset a: IntruderId do
  ruleset i: InitiatorId do
    rule 90 "initiator and intruder check verification"
      
      multisetcount(g:gpr, gpr[g].initiator = i &
                           gpr[g].responder = a) >= 1 &
      ini[i].state = I_NC_VERIF_SET

    ==>
    begin
      if (int[a].pk[i] & int[a].sent_pk[i] &
          int[a].nonce[i] & int[a].sent_n[i]) then 
        -- If we've initiated with them then we have DH key and verification
        -- passes through
        ini[i].state := I_PHASETWO_DONE;
      end;
    end;
  end;
end;

-- intruder and responder have global pairing so 'verification' occurs
ruleset a: IntruderId do
  ruleset r: ResponderId do
    choose k: res[r].pairings do
      rule 99 "responder and intruder check verification"
        
        multisetcount(g:gpr, gpr[g].initiator = a &
                             gpr[g].responder = r) >= 1 &
        res[r].pairings[k].state = R_NC_VERIF_SET

      ==>
      begin
        if (int[a].pk[r] & int[a].sent_pk[r] &
            int[a].nonce[r] & int[a].sent_n[r]) then 
          -- If we've initiated with them then we have DH key and verification
          -- passes through
          res[r].pairings[k].state := R_PHASETWO_DONE;
        end;
      end;
    end;
  end;
end;

--------------------------------------------------------------------------------
-- behavior of intruder

-- intruder i intercepts messages
ruleset i: IntruderId do
  choose k: net do
    rule 98 "intruder intercepts messages"

      !ismember (net[k].source, IntruderId)

    ==>
  
    var
      temp: Message;

    begin
      alias msg: net[k] do  -- message to intercept
        alias messages: int[i].messages do
          temp := msg;

          if multisetcount (l:messages,
                messages[l].mType  = temp.mType &
                messages[l].source = temp.source &
                messages[l].dest   = temp.dest &
                (messages[l].mType = M_PublicKey ->
                 messages[l].publickey = temp.publickey) & 
                (messages[l].mType = M_Nonce ->
                 messages[l].nonce = temp.nonce) &
                (messages[l].mType = M_CommitValue ->
                 messages[l].cValue.pk_send = temp.cValue.pk_send &
                 messages[l].cValue.pk_send = temp.cValue.pk_recv &
                 messages[l].cValue.n_send  = temp.cValue.n_send) &
                (messages[l].mType = M_ExchangeVerif ->
                 messages[l].eValue.pk_send = temp.eValue.pk_send &
                 messages[l].eValue.pk_recv = temp.eValue.pk_recv &
                 messages[l].eValue.n_send  = temp.eValue.n_send &
                 messages[l].eValue.n_recv  = temp.eValue.n_recv &
                 messages[l].eValue.r_recv   = temp.eValue.r_recv)) = 0 then
            -- If not exist then add to messages
            multisetadd (temp, int[i].messages);
            -- Learn some of the informations
            if (temp.mType = M_PublicKey) then
              int[i].pk[temp.source] := true;
            end;
            
            if (temp.mType = M_Nonce) then
              int[i].nonce[temp.source] := true;
            end;
          end;
        end;
      end;
      multisetremove (k, net);
    end;
  end;
end;

-- intruder i sends recorded message
ruleset i: IntruderId do
  choose j: int[i].messages do
    ruleset k: AgentId do
      rule 98 "intruder sends recorded message"

        !ismember (k, IntruderId) &
        !(int[i].messages[j].source = k) &
        multisetcount (l:net, true) < NetworkSize

      ==>

      var
        outM: Message;

      begin
        undefine outM;
        outM        := int[i].messages[j];
        outM.source := i;
        outM.dest   := k;
        multisetadd (outM, net);
      end;
    end;
  end;
end;

-- intruder i modifies messages
ruleset i: IntruderId do
  choose j: int[i].messages do
    ruleset k: AgentId do
      rule 98 "intruder sends recorded message with its own info"

        !ismember (k, IntruderId) &
        !(int[i].messages[j].source = k) &
        multisetcount (l:net, true) < NetworkSize

      ==>

      var
        outM: Message;

        outCValue: CValue;
        outEValue: EValue;

      begin
        undefine outM;

        -- deal with different types of messages
        switch int[i].messages[j].mType   -- modify depending on message type
        case M_PublicKey:
          outM.mType  := M_PublicKey;
          outM.source := i;
          outM.dest   := k;
          outM.publickey := i;
          -- Set information about what we send
          int[i].sent_pk[k] := true;
        case M_CommitValue:
          undefine outCValue;
          outCValue.pk_send := i;
          outCValue.pk_recv := k;
          outCValue.n_send  := i; 
          
          outM.mType    := M_CommitValue;
          outM.source   := i;
          outM.dest     := k;
          outM.cValue   := outCValue;
        case M_Nonce:
          outM.mType  := M_Nonce;
          outM.source := i;
          outM.dest   := k;
          outM.nonce  := i;
          -- Set information about what we send
          int[i].sent_n[k] := true;
        case M_ExchangeVerif:
          undefine outEValue;
          outEValue.pk_send := i;
          outEValue.pk_recv := k;
          outEValue.n_send  := i;
          outEValue.n_recv  := k;
          outEValue.r_recv  := k;

          outM.mType  := M_ExchangeVerif;
          outM.source := i;
          outM.dest   := k;
          outM.eValue := outEValue;
        end;

        -- send recorded message with modifications
        multisetadd (outM, net);
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
    ini[i].linkKey    := false;
  end;

  -- initialize responders
  undefine res;
  for i: ResponderId do
    undefine res[i].pairings;
  end;

  -- initialize intruders
  undefine int;
  for i: IntruderId do
    for j: AgentId do
      int[i].linkKeys[j]  := false;
      int[i].sent_pk[j]   := false;
      int[i].sent_n[j]    := false;
    end;
    int[i].linkKeys[i] := true;
    int[i].pk[i]       := true;
    int[i].nonce[i]    := true;
  end;
     
  -- initialize network
  undefine net;
end;

--------------------------------------------------------------------------------
-- invariants
--------------------------------------------------------------------------------

-- initiator authenticity
invariant "initiator correctly paired with good responder"
  forall i: InitiatorId do
    ini[i].state = I_PAIRED 
    ->
    !ismember(ini[i].responder, IntruderId)
  end;

-- responder authenticity
invariant "responders correctly paired with good initiator"
  forall i: ResponderId do
    multisetcount(l:res[i].pairings, 
                  (res[i].pairings[l].state = R_PAIRED &
                   ismember(res[i].pairings[l].initiator,
                               IntruderId))) = 0
  end;

-- initiator confidentiality
invariant "initiator link key is secret"
  forall i: InitiatorId do
    ini[i].state = I_PAIRED &
    ini[i].linkKey = true
    ->
    forall j: IntruderId do
      int[j].linkKeys[i] = false
    end
  end;

-- responder confidentiality
invariant "responder link key is secret"
  forall j: IntruderId do
    forall i: ResponderId do
      multisetcount(l:res[i].pairings, 
                    (res[i].pairings[l].initiator = j & 
                     res[i].pairings[l].state = R_PAIRED & 
                     res[i].pairings[l].linkKey = true & 
                     int[j].linkKeys[i] = true)) = 0
    end
  end;


-- initiator intention preservation
-- every initiator device is paired with who the device originally thought it 
-- would be paired with
invariant "initiator intention preservation pairing"
  forall i: InitiatorId do
    ini[i].state = I_PAIRED &
    ini[i].linkKey = true
    ->
    multisetcount(l:gpr,
                  (gpr[l].initiator = i &
                   gpr[l].responder = ini[i].responder)) >= 1
  end;


-- responder intention preservation
-- every responder device is paired with who the device originally thought it 
-- would be paired with
invariant "responder intention preservation pairing"
  forall i: ResponderId do
    multisetcount(j:res[i].pairings,
                  res[i].pairings[j].state = R_PAIRED) >= 1
    ->
    multisetcount(l:gpr,
      (multisetcount(j:res[i].pairings,
       res[i].pairings[j].state = R_PAIRED &
       gpr[l].responder = i &
       res[i].pairings[j].initiator = gpr[l].initiator) >= 1)
    ) >= 1
  end;
