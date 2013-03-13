/******************************
  Program "bt.m" compiled by "Caching Murphi Release 5.4.4"

  Murphi Last Compiled date: "Jan 16 2013"
 ******************************/

/********************
  Parameter
 ********************/
#define MURPHI_VERSION "Caching Murphi Release 5.4.4"
#define MURPHI_DATE "Jan 16 2013"
#define PROTOCOL_NAME "bt"
#define BITS_IN_WORLD 2816
#define ALIGN

/********************
  Include
 ********************/
#include "mu_prolog.hpp"

/********************
  Decl declaration
 ********************/

class mu_1_InitiatorId: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_InitiatorId& val){ return value(val.value());};
  inline operator int() const { return value(); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_InitiatorId& val)
    {
      if (val.defined())
	return ( s << mu_1_InitiatorId::values[ int(val) - 1 ] );
      else
	return ( s << "Undefined" );
    };

  mu_1_InitiatorId (const char *name, int os): mu__byte(1, 1, 1, name, os) {};
  mu_1_InitiatorId (void): mu__byte(1, 1, 1) {};
  mu_1_InitiatorId (int val): mu__byte(1, 1, 1, "Parameter or function result.", 0)
    { operator=(val); };
  const char * Name() { return values[ value() -1]; };
  virtual void print()
    {
      if (defined()) cout << name << ':' << values[ value() - 1] << '\n';
      else cout << name << ":Undefined\n";
    };
  void print_statistic() {};
friend int CompareWeight(mu_1_InitiatorId& a, mu_1_InitiatorId& b)
{
  if (!a.defined() && b.defined())
    return -1;
  else if (a.defined() && !b.defined())
    return 1;
  else
    return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
};
const char *mu_1_InitiatorId::values[] =
  { "InitiatorId_1",NULL };

/*** end scalarset declaration ***/
mu_1_InitiatorId mu_1_InitiatorId_undefined_var;

class mu_1_ResponderId: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_ResponderId& val){ return value(val.value());};
  inline operator int() const { return value(); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_ResponderId& val)
    {
      if (val.defined())
	return ( s << mu_1_ResponderId::values[ int(val) - 2 ] );
      else
	return ( s << "Undefined" );
    };

  mu_1_ResponderId (const char *name, int os): mu__byte(2, 2, 1, name, os) {};
  mu_1_ResponderId (void): mu__byte(2, 2, 1) {};
  mu_1_ResponderId (int val): mu__byte(2, 2, 1, "Parameter or function result.", 0)
    { operator=(val); };
  const char * Name() { return values[ value() -2]; };
  virtual void print()
    {
      if (defined()) cout << name << ':' << values[ value() - 2] << '\n';
      else cout << name << ":Undefined\n";
    };
  void print_statistic() {};
friend int CompareWeight(mu_1_ResponderId& a, mu_1_ResponderId& b)
{
  if (!a.defined() && b.defined())
    return -1;
  else if (a.defined() && !b.defined())
    return 1;
  else
    return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
};
const char *mu_1_ResponderId::values[] =
  { "ResponderId_1",NULL };

/*** end scalarset declaration ***/
mu_1_ResponderId mu_1_ResponderId_undefined_var;

class mu_1_IntruderId: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_IntruderId& val){ return value(val.value());};
  inline operator int() const { return value(); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_IntruderId& val)
    {
      if (val.defined())
	return ( s << mu_1_IntruderId::values[ int(val) - 3 ] );
      else
	return ( s << "Undefined" );
    };

  mu_1_IntruderId (const char *name, int os): mu__byte(3, 3, 1, name, os) {};
  mu_1_IntruderId (void): mu__byte(3, 3, 1) {};
  mu_1_IntruderId (int val): mu__byte(3, 3, 1, "Parameter or function result.", 0)
    { operator=(val); };
  const char * Name() { return values[ value() -3]; };
  virtual void print()
    {
      if (defined()) cout << name << ':' << values[ value() - 3] << '\n';
      else cout << name << ":Undefined\n";
    };
  void print_statistic() {};
friend int CompareWeight(mu_1_IntruderId& a, mu_1_IntruderId& b)
{
  if (!a.defined() && b.defined())
    return -1;
  else if (a.defined() && !b.defined())
    return 1;
  else
    return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
};
const char *mu_1_IntruderId::values[] =
  { "IntruderId_1",NULL };

/*** end scalarset declaration ***/
mu_1_IntruderId mu_1_IntruderId_undefined_var;

class mu_1_AgentId: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_AgentId& val) { return value(val.value()); };
  inline operator int() const { return value(); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_AgentId& val)
    {
      if (val.defined())
	return ( s << mu_1_AgentId::values[ val.indexvalue() ] );
      else
	return ( s << "Undefined" );
    };

  // note thate lb and ub are not used if we have byte compacted state.
  mu_1_AgentId (const char *name, int os): mu__byte(0, 2, 2, name, os) {};
  mu_1_AgentId (void): mu__byte(0, 2, 2) {};
  mu_1_AgentId (int val): mu__byte(0, 2, 2, "Parameter or function result.", 0)
    { operator=(val); };
  int indexvalue()
  {
    if ((value() >= 1) && (value() <= 1)) return (value() - 1);
    if ((value() >= 2) && (value() <= 2)) return (value() - 1);
    if ((value() >= 3) && (value() <= 3)) return (value() - 1);
  return 0;
  };
  inline int unionassign(int val)
  {
    if (val >= 0 && val <= 0) return value(val+1);
    if (val >= 1 && val <= 1) return value(val+1);
    if (val >= 2 && val <= 2) return value(val+1);
  return 0;
  };
  const char * Name() { return values[ indexvalue() ]; };
friend int CompareWeight(mu_1_AgentId& a, mu_1_AgentId& b)
{
  if (!a.defined() && b.defined())
    return -1;
  else if (a.defined() && !b.defined())
    return 1;
  else
    return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void print()
    {
      if (defined()) cout << name << ':' << values[ indexvalue() ] << '\n';
      else cout << name << ":Undefined\n";
    };
  void print_statistic() {};
};
const char *mu_1_AgentId::values[] = {"InitiatorId_1","ResponderId_1","IntruderId_1",NULL };

/*** end union declaration ***/
mu_1_AgentId mu_1_AgentId_undefined_var;

class mu_1_CValue
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_AgentId mu_pk_send;
  mu_1_AgentId mu_pk_recv;
  mu_1_AgentId mu_n_send;
  mu_1_CValue ( const char *n, int os ) { set_self(n,os); };
  mu_1_CValue ( void ) {};

  virtual ~mu_1_CValue(); 
friend int CompareWeight(mu_1_CValue& a, mu_1_CValue& b)
  {
    int w;
    w = CompareWeight(a.mu_pk_send, b.mu_pk_send);
    if (w!=0) return w;
    w = CompareWeight(a.mu_pk_recv, b.mu_pk_recv);
    if (w!=0) return w;
    w = CompareWeight(a.mu_n_send, b.mu_n_send);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_CValue& a, mu_1_CValue& b)
  {
    int w;
    w = Compare(a.mu_pk_send, b.mu_pk_send);
    if (w!=0) return w;
    w = Compare(a.mu_pk_recv, b.mu_pk_recv);
    if (w!=0) return w;
    w = Compare(a.mu_n_send, b.mu_n_send);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_pk_send.MultisetSort();
    mu_pk_recv.MultisetSort();
    mu_n_send.MultisetSort();
  }
  void print_statistic()
  {
    mu_pk_send.print_statistic();
    mu_pk_recv.print_statistic();
    mu_n_send.print_statistic();
  }
  void clear() {
    mu_pk_send.clear();
    mu_pk_recv.clear();
    mu_n_send.clear();
 };
  void undefine() {
    mu_pk_send.undefine();
    mu_pk_recv.undefine();
    mu_n_send.undefine();
 };
  void reset() {
    mu_pk_send.reset();
    mu_pk_recv.reset();
    mu_n_send.reset();
 };
  void print() {
    mu_pk_send.print();
    mu_pk_recv.print();
    mu_n_send.print();
  };
  void print_diff(state *prevstate) {
    mu_pk_send.print_diff(prevstate);
    mu_pk_recv.print_diff(prevstate);
    mu_n_send.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_pk_send.to_state(thestate);
    mu_pk_recv.to_state(thestate);
    mu_n_send.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_CValue& operator= (const mu_1_CValue& from) {
    mu_pk_send.value(from.mu_pk_send.value());
    mu_pk_recv.value(from.mu_pk_recv.value());
    mu_n_send.value(from.mu_n_send.value());
    return *this;
  };
};

  void mu_1_CValue::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_CValue::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_CValue::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_pk_send.set_self_2(name, ".pk_send", os + 0 ); else mu_pk_send.set_self_2(NULL, NULL, 0);
  if (name) mu_pk_recv.set_self_2(name, ".pk_recv", os + 8 ); else mu_pk_recv.set_self_2(NULL, NULL, 0);
  if (name) mu_n_send.set_self_2(name, ".n_send", os + 16 ); else mu_n_send.set_self_2(NULL, NULL, 0);
}

mu_1_CValue::~mu_1_CValue()
{
}

/*** end record declaration ***/
mu_1_CValue mu_1_CValue_undefined_var;

class mu_1_EValue
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_AgentId mu_pk_send;
  mu_1_AgentId mu_pk_recv;
  mu_1_AgentId mu_n_send;
  mu_1_AgentId mu_n_recv;
  mu_1_AgentId mu_r_recv;
  mu_1_EValue ( const char *n, int os ) { set_self(n,os); };
  mu_1_EValue ( void ) {};

  virtual ~mu_1_EValue(); 
friend int CompareWeight(mu_1_EValue& a, mu_1_EValue& b)
  {
    int w;
    w = CompareWeight(a.mu_pk_send, b.mu_pk_send);
    if (w!=0) return w;
    w = CompareWeight(a.mu_pk_recv, b.mu_pk_recv);
    if (w!=0) return w;
    w = CompareWeight(a.mu_n_send, b.mu_n_send);
    if (w!=0) return w;
    w = CompareWeight(a.mu_n_recv, b.mu_n_recv);
    if (w!=0) return w;
    w = CompareWeight(a.mu_r_recv, b.mu_r_recv);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_EValue& a, mu_1_EValue& b)
  {
    int w;
    w = Compare(a.mu_pk_send, b.mu_pk_send);
    if (w!=0) return w;
    w = Compare(a.mu_pk_recv, b.mu_pk_recv);
    if (w!=0) return w;
    w = Compare(a.mu_n_send, b.mu_n_send);
    if (w!=0) return w;
    w = Compare(a.mu_n_recv, b.mu_n_recv);
    if (w!=0) return w;
    w = Compare(a.mu_r_recv, b.mu_r_recv);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_pk_send.MultisetSort();
    mu_pk_recv.MultisetSort();
    mu_n_send.MultisetSort();
    mu_n_recv.MultisetSort();
    mu_r_recv.MultisetSort();
  }
  void print_statistic()
  {
    mu_pk_send.print_statistic();
    mu_pk_recv.print_statistic();
    mu_n_send.print_statistic();
    mu_n_recv.print_statistic();
    mu_r_recv.print_statistic();
  }
  void clear() {
    mu_pk_send.clear();
    mu_pk_recv.clear();
    mu_n_send.clear();
    mu_n_recv.clear();
    mu_r_recv.clear();
 };
  void undefine() {
    mu_pk_send.undefine();
    mu_pk_recv.undefine();
    mu_n_send.undefine();
    mu_n_recv.undefine();
    mu_r_recv.undefine();
 };
  void reset() {
    mu_pk_send.reset();
    mu_pk_recv.reset();
    mu_n_send.reset();
    mu_n_recv.reset();
    mu_r_recv.reset();
 };
  void print() {
    mu_pk_send.print();
    mu_pk_recv.print();
    mu_n_send.print();
    mu_n_recv.print();
    mu_r_recv.print();
  };
  void print_diff(state *prevstate) {
    mu_pk_send.print_diff(prevstate);
    mu_pk_recv.print_diff(prevstate);
    mu_n_send.print_diff(prevstate);
    mu_n_recv.print_diff(prevstate);
    mu_r_recv.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_pk_send.to_state(thestate);
    mu_pk_recv.to_state(thestate);
    mu_n_send.to_state(thestate);
    mu_n_recv.to_state(thestate);
    mu_r_recv.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_EValue& operator= (const mu_1_EValue& from) {
    mu_pk_send.value(from.mu_pk_send.value());
    mu_pk_recv.value(from.mu_pk_recv.value());
    mu_n_send.value(from.mu_n_send.value());
    mu_n_recv.value(from.mu_n_recv.value());
    mu_r_recv.value(from.mu_r_recv.value());
    return *this;
  };
};

  void mu_1_EValue::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_EValue::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_EValue::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_pk_send.set_self_2(name, ".pk_send", os + 0 ); else mu_pk_send.set_self_2(NULL, NULL, 0);
  if (name) mu_pk_recv.set_self_2(name, ".pk_recv", os + 8 ); else mu_pk_recv.set_self_2(NULL, NULL, 0);
  if (name) mu_n_send.set_self_2(name, ".n_send", os + 16 ); else mu_n_send.set_self_2(NULL, NULL, 0);
  if (name) mu_n_recv.set_self_2(name, ".n_recv", os + 24 ); else mu_n_recv.set_self_2(NULL, NULL, 0);
  if (name) mu_r_recv.set_self_2(name, ".r_recv", os + 32 ); else mu_r_recv.set_self_2(NULL, NULL, 0);
}

mu_1_EValue::~mu_1_EValue()
{
}

/*** end record declaration ***/
mu_1_EValue mu_1_EValue_undefined_var;

class mu_1_VValue
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_AgentId mu_pk_initiator;
  mu_1_AgentId mu_pk_responder;
  mu_1_AgentId mu_n_initiator;
  mu_1_AgentId mu_n_responder;
  mu_1_VValue ( const char *n, int os ) { set_self(n,os); };
  mu_1_VValue ( void ) {};

  virtual ~mu_1_VValue(); 
friend int CompareWeight(mu_1_VValue& a, mu_1_VValue& b)
  {
    int w;
    w = CompareWeight(a.mu_pk_initiator, b.mu_pk_initiator);
    if (w!=0) return w;
    w = CompareWeight(a.mu_pk_responder, b.mu_pk_responder);
    if (w!=0) return w;
    w = CompareWeight(a.mu_n_initiator, b.mu_n_initiator);
    if (w!=0) return w;
    w = CompareWeight(a.mu_n_responder, b.mu_n_responder);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_VValue& a, mu_1_VValue& b)
  {
    int w;
    w = Compare(a.mu_pk_initiator, b.mu_pk_initiator);
    if (w!=0) return w;
    w = Compare(a.mu_pk_responder, b.mu_pk_responder);
    if (w!=0) return w;
    w = Compare(a.mu_n_initiator, b.mu_n_initiator);
    if (w!=0) return w;
    w = Compare(a.mu_n_responder, b.mu_n_responder);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_pk_initiator.MultisetSort();
    mu_pk_responder.MultisetSort();
    mu_n_initiator.MultisetSort();
    mu_n_responder.MultisetSort();
  }
  void print_statistic()
  {
    mu_pk_initiator.print_statistic();
    mu_pk_responder.print_statistic();
    mu_n_initiator.print_statistic();
    mu_n_responder.print_statistic();
  }
  void clear() {
    mu_pk_initiator.clear();
    mu_pk_responder.clear();
    mu_n_initiator.clear();
    mu_n_responder.clear();
 };
  void undefine() {
    mu_pk_initiator.undefine();
    mu_pk_responder.undefine();
    mu_n_initiator.undefine();
    mu_n_responder.undefine();
 };
  void reset() {
    mu_pk_initiator.reset();
    mu_pk_responder.reset();
    mu_n_initiator.reset();
    mu_n_responder.reset();
 };
  void print() {
    mu_pk_initiator.print();
    mu_pk_responder.print();
    mu_n_initiator.print();
    mu_n_responder.print();
  };
  void print_diff(state *prevstate) {
    mu_pk_initiator.print_diff(prevstate);
    mu_pk_responder.print_diff(prevstate);
    mu_n_initiator.print_diff(prevstate);
    mu_n_responder.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_pk_initiator.to_state(thestate);
    mu_pk_responder.to_state(thestate);
    mu_n_initiator.to_state(thestate);
    mu_n_responder.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_VValue& operator= (const mu_1_VValue& from) {
    mu_pk_initiator.value(from.mu_pk_initiator.value());
    mu_pk_responder.value(from.mu_pk_responder.value());
    mu_n_initiator.value(from.mu_n_initiator.value());
    mu_n_responder.value(from.mu_n_responder.value());
    return *this;
  };
};

  void mu_1_VValue::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_VValue::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_VValue::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_pk_initiator.set_self_2(name, ".pk_initiator", os + 0 ); else mu_pk_initiator.set_self_2(NULL, NULL, 0);
  if (name) mu_pk_responder.set_self_2(name, ".pk_responder", os + 8 ); else mu_pk_responder.set_self_2(NULL, NULL, 0);
  if (name) mu_n_initiator.set_self_2(name, ".n_initiator", os + 16 ); else mu_n_initiator.set_self_2(NULL, NULL, 0);
  if (name) mu_n_responder.set_self_2(name, ".n_responder", os + 24 ); else mu_n_responder.set_self_2(NULL, NULL, 0);
}

mu_1_VValue::~mu_1_VValue()
{
}

/*** end record declaration ***/
mu_1_VValue mu_1_VValue_undefined_var;

class mu_1_MessageType: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_MessageType& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_MessageType& val)
  {
    if (val.defined())
      return ( s << mu_1_MessageType::values[ int(val) - 4] );
    else return ( s << "Undefined" );
  };

  mu_1_MessageType (const char *name, int os): mu__byte(4, 7, 3, name, os) {};
  mu_1_MessageType (void): mu__byte(4, 7, 3) {};
  mu_1_MessageType (int val): mu__byte(4, 7, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -4]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -4] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_MessageType::values[] = {"M_PublicKey","M_CommitValue","M_Nonce","M_ExchangeVerif",NULL };

/*** end of enum declaration ***/
mu_1_MessageType mu_1_MessageType_undefined_var;

class mu_1_Message
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_MessageType mu_mType;
  mu_1_AgentId mu_source;
  mu_1_AgentId mu_dest;
  mu_1_AgentId mu_nonce;
  mu_1_AgentId mu_publickey;
  mu_1_CValue mu_cValue;
  mu_1_EValue mu_eValue;
  mu_1_Message ( const char *n, int os ) { set_self(n,os); };
  mu_1_Message ( void ) {};

  virtual ~mu_1_Message(); 
friend int CompareWeight(mu_1_Message& a, mu_1_Message& b)
  {
    int w;
    w = CompareWeight(a.mu_mType, b.mu_mType);
    if (w!=0) return w;
    w = CompareWeight(a.mu_source, b.mu_source);
    if (w!=0) return w;
    w = CompareWeight(a.mu_dest, b.mu_dest);
    if (w!=0) return w;
    w = CompareWeight(a.mu_nonce, b.mu_nonce);
    if (w!=0) return w;
    w = CompareWeight(a.mu_publickey, b.mu_publickey);
    if (w!=0) return w;
    w = CompareWeight(a.mu_cValue, b.mu_cValue);
    if (w!=0) return w;
    w = CompareWeight(a.mu_eValue, b.mu_eValue);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_Message& a, mu_1_Message& b)
  {
    int w;
    w = Compare(a.mu_mType, b.mu_mType);
    if (w!=0) return w;
    w = Compare(a.mu_source, b.mu_source);
    if (w!=0) return w;
    w = Compare(a.mu_dest, b.mu_dest);
    if (w!=0) return w;
    w = Compare(a.mu_nonce, b.mu_nonce);
    if (w!=0) return w;
    w = Compare(a.mu_publickey, b.mu_publickey);
    if (w!=0) return w;
    w = Compare(a.mu_cValue, b.mu_cValue);
    if (w!=0) return w;
    w = Compare(a.mu_eValue, b.mu_eValue);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_mType.MultisetSort();
    mu_source.MultisetSort();
    mu_dest.MultisetSort();
    mu_nonce.MultisetSort();
    mu_publickey.MultisetSort();
    mu_cValue.MultisetSort();
    mu_eValue.MultisetSort();
  }
  void print_statistic()
  {
    mu_mType.print_statistic();
    mu_source.print_statistic();
    mu_dest.print_statistic();
    mu_nonce.print_statistic();
    mu_publickey.print_statistic();
    mu_cValue.print_statistic();
    mu_eValue.print_statistic();
  }
  void clear() {
    mu_mType.clear();
    mu_source.clear();
    mu_dest.clear();
    mu_nonce.clear();
    mu_publickey.clear();
    mu_cValue.clear();
    mu_eValue.clear();
 };
  void undefine() {
    mu_mType.undefine();
    mu_source.undefine();
    mu_dest.undefine();
    mu_nonce.undefine();
    mu_publickey.undefine();
    mu_cValue.undefine();
    mu_eValue.undefine();
 };
  void reset() {
    mu_mType.reset();
    mu_source.reset();
    mu_dest.reset();
    mu_nonce.reset();
    mu_publickey.reset();
    mu_cValue.reset();
    mu_eValue.reset();
 };
  void print() {
    mu_mType.print();
    mu_source.print();
    mu_dest.print();
    mu_nonce.print();
    mu_publickey.print();
    mu_cValue.print();
    mu_eValue.print();
  };
  void print_diff(state *prevstate) {
    mu_mType.print_diff(prevstate);
    mu_source.print_diff(prevstate);
    mu_dest.print_diff(prevstate);
    mu_nonce.print_diff(prevstate);
    mu_publickey.print_diff(prevstate);
    mu_cValue.print_diff(prevstate);
    mu_eValue.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_mType.to_state(thestate);
    mu_source.to_state(thestate);
    mu_dest.to_state(thestate);
    mu_nonce.to_state(thestate);
    mu_publickey.to_state(thestate);
    mu_cValue.to_state(thestate);
    mu_eValue.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_Message& operator= (const mu_1_Message& from) {
    mu_mType.value(from.mu_mType.value());
    mu_source.value(from.mu_source.value());
    mu_dest.value(from.mu_dest.value());
    mu_nonce.value(from.mu_nonce.value());
    mu_publickey.value(from.mu_publickey.value());
    mu_cValue = from.mu_cValue;
    mu_eValue = from.mu_eValue;
    return *this;
  };
};

  void mu_1_Message::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_Message::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_Message::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_mType.set_self_2(name, ".mType", os + 0 ); else mu_mType.set_self_2(NULL, NULL, 0);
  if (name) mu_source.set_self_2(name, ".source", os + 8 ); else mu_source.set_self_2(NULL, NULL, 0);
  if (name) mu_dest.set_self_2(name, ".dest", os + 16 ); else mu_dest.set_self_2(NULL, NULL, 0);
  if (name) mu_nonce.set_self_2(name, ".nonce", os + 24 ); else mu_nonce.set_self_2(NULL, NULL, 0);
  if (name) mu_publickey.set_self_2(name, ".publickey", os + 32 ); else mu_publickey.set_self_2(NULL, NULL, 0);
  if (name) mu_cValue.set_self_2(name, ".cValue", os + 40 ); else mu_cValue.set_self_2(NULL, NULL, 0);
  if (name) mu_eValue.set_self_2(name, ".eValue", os + 64 ); else mu_eValue.set_self_2(NULL, NULL, 0);
}

mu_1_Message::~mu_1_Message()
{
}

/*** end record declaration ***/
mu_1_Message mu_1_Message_undefined_var;

class mu_1_InitiatorStates: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_InitiatorStates& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_InitiatorStates& val)
  {
    if (val.defined())
      return ( s << mu_1_InitiatorStates::values[ int(val) - 8] );
    else return ( s << "Undefined" );
  };

  mu_1_InitiatorStates (const char *name, int os): mu__byte(8, 15, 4, name, os) {};
  mu_1_InitiatorStates (void): mu__byte(8, 15, 4) {};
  mu_1_InitiatorStates (int val): mu__byte(8, 15, 4, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -8]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -8] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_InitiatorStates::values[] = {"I_SLEEP","I_SENT_KEY","I_PHASEONE_DONE","I_WAIT_NONCE","I_NC_VERIF_SET","I_PHASETWO_DONE","I_WAIT_EVALUE","I_PAIRED",NULL };

/*** end of enum declaration ***/
mu_1_InitiatorStates mu_1_InitiatorStates_undefined_var;

class mu_1_Initiator
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_InitiatorStates mu_state;
  mu_1_AgentId mu_responder;
  mu_1_AgentId mu_responder_pk;
  mu_1_AgentId mu_responder_r;
  mu_1_AgentId mu_responder_n;
  mu_1_CValue mu_responder_c;
  mu_0_boolean mu_linkKey;
  mu_1_VValue mu_vValue;
  mu_1_Initiator ( const char *n, int os ) { set_self(n,os); };
  mu_1_Initiator ( void ) {};

  virtual ~mu_1_Initiator(); 
friend int CompareWeight(mu_1_Initiator& a, mu_1_Initiator& b)
  {
    int w;
    w = CompareWeight(a.mu_state, b.mu_state);
    if (w!=0) return w;
    w = CompareWeight(a.mu_responder, b.mu_responder);
    if (w!=0) return w;
    w = CompareWeight(a.mu_responder_pk, b.mu_responder_pk);
    if (w!=0) return w;
    w = CompareWeight(a.mu_responder_r, b.mu_responder_r);
    if (w!=0) return w;
    w = CompareWeight(a.mu_responder_n, b.mu_responder_n);
    if (w!=0) return w;
    w = CompareWeight(a.mu_responder_c, b.mu_responder_c);
    if (w!=0) return w;
    w = CompareWeight(a.mu_linkKey, b.mu_linkKey);
    if (w!=0) return w;
    w = CompareWeight(a.mu_vValue, b.mu_vValue);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_Initiator& a, mu_1_Initiator& b)
  {
    int w;
    w = Compare(a.mu_state, b.mu_state);
    if (w!=0) return w;
    w = Compare(a.mu_responder, b.mu_responder);
    if (w!=0) return w;
    w = Compare(a.mu_responder_pk, b.mu_responder_pk);
    if (w!=0) return w;
    w = Compare(a.mu_responder_r, b.mu_responder_r);
    if (w!=0) return w;
    w = Compare(a.mu_responder_n, b.mu_responder_n);
    if (w!=0) return w;
    w = Compare(a.mu_responder_c, b.mu_responder_c);
    if (w!=0) return w;
    w = Compare(a.mu_linkKey, b.mu_linkKey);
    if (w!=0) return w;
    w = Compare(a.mu_vValue, b.mu_vValue);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_state.MultisetSort();
    mu_responder.MultisetSort();
    mu_responder_pk.MultisetSort();
    mu_responder_r.MultisetSort();
    mu_responder_n.MultisetSort();
    mu_responder_c.MultisetSort();
    mu_linkKey.MultisetSort();
    mu_vValue.MultisetSort();
  }
  void print_statistic()
  {
    mu_state.print_statistic();
    mu_responder.print_statistic();
    mu_responder_pk.print_statistic();
    mu_responder_r.print_statistic();
    mu_responder_n.print_statistic();
    mu_responder_c.print_statistic();
    mu_linkKey.print_statistic();
    mu_vValue.print_statistic();
  }
  void clear() {
    mu_state.clear();
    mu_responder.clear();
    mu_responder_pk.clear();
    mu_responder_r.clear();
    mu_responder_n.clear();
    mu_responder_c.clear();
    mu_linkKey.clear();
    mu_vValue.clear();
 };
  void undefine() {
    mu_state.undefine();
    mu_responder.undefine();
    mu_responder_pk.undefine();
    mu_responder_r.undefine();
    mu_responder_n.undefine();
    mu_responder_c.undefine();
    mu_linkKey.undefine();
    mu_vValue.undefine();
 };
  void reset() {
    mu_state.reset();
    mu_responder.reset();
    mu_responder_pk.reset();
    mu_responder_r.reset();
    mu_responder_n.reset();
    mu_responder_c.reset();
    mu_linkKey.reset();
    mu_vValue.reset();
 };
  void print() {
    mu_state.print();
    mu_responder.print();
    mu_responder_pk.print();
    mu_responder_r.print();
    mu_responder_n.print();
    mu_responder_c.print();
    mu_linkKey.print();
    mu_vValue.print();
  };
  void print_diff(state *prevstate) {
    mu_state.print_diff(prevstate);
    mu_responder.print_diff(prevstate);
    mu_responder_pk.print_diff(prevstate);
    mu_responder_r.print_diff(prevstate);
    mu_responder_n.print_diff(prevstate);
    mu_responder_c.print_diff(prevstate);
    mu_linkKey.print_diff(prevstate);
    mu_vValue.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_state.to_state(thestate);
    mu_responder.to_state(thestate);
    mu_responder_pk.to_state(thestate);
    mu_responder_r.to_state(thestate);
    mu_responder_n.to_state(thestate);
    mu_responder_c.to_state(thestate);
    mu_linkKey.to_state(thestate);
    mu_vValue.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_Initiator& operator= (const mu_1_Initiator& from) {
    mu_state.value(from.mu_state.value());
    mu_responder.value(from.mu_responder.value());
    mu_responder_pk.value(from.mu_responder_pk.value());
    mu_responder_r.value(from.mu_responder_r.value());
    mu_responder_n.value(from.mu_responder_n.value());
    mu_responder_c = from.mu_responder_c;
    mu_linkKey.value(from.mu_linkKey.value());
    mu_vValue = from.mu_vValue;
    return *this;
  };
};

  void mu_1_Initiator::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_Initiator::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_Initiator::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_state.set_self_2(name, ".state", os + 0 ); else mu_state.set_self_2(NULL, NULL, 0);
  if (name) mu_responder.set_self_2(name, ".responder", os + 8 ); else mu_responder.set_self_2(NULL, NULL, 0);
  if (name) mu_responder_pk.set_self_2(name, ".responder_pk", os + 16 ); else mu_responder_pk.set_self_2(NULL, NULL, 0);
  if (name) mu_responder_r.set_self_2(name, ".responder_r", os + 24 ); else mu_responder_r.set_self_2(NULL, NULL, 0);
  if (name) mu_responder_n.set_self_2(name, ".responder_n", os + 32 ); else mu_responder_n.set_self_2(NULL, NULL, 0);
  if (name) mu_responder_c.set_self_2(name, ".responder_c", os + 40 ); else mu_responder_c.set_self_2(NULL, NULL, 0);
  if (name) mu_linkKey.set_self_2(name, ".linkKey", os + 64 ); else mu_linkKey.set_self_2(NULL, NULL, 0);
  if (name) mu_vValue.set_self_2(name, ".vValue", os + 72 ); else mu_vValue.set_self_2(NULL, NULL, 0);
}

mu_1_Initiator::~mu_1_Initiator()
{
}

/*** end record declaration ***/
mu_1_Initiator mu_1_Initiator_undefined_var;

class mu_1_ResponderStates: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1_ResponderStates& val) { return value(val.value()); };
  static const char *values[];
  friend ostream& operator<< (ostream& s, mu_1_ResponderStates& val)
  {
    if (val.defined())
      return ( s << mu_1_ResponderStates::values[ int(val) - 16] );
    else return ( s << "Undefined" );
  };

  mu_1_ResponderStates (const char *name, int os): mu__byte(16, 21, 3, name, os) {};
  mu_1_ResponderStates (void): mu__byte(16, 21, 3) {};
  mu_1_ResponderStates (int val): mu__byte(16, 21, 3, "Parameter or function result.", 0)
  {
     operator=(val);
  };
  const char * Name() { return values[ value() -16]; };
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort() {};
  void print_statistic() {};
  virtual void print()
  {
    if (defined())
      cout << name << ":" << values[ value() -16] << '\n';
    else
      cout << name << ":Undefined\n";
  };
};

const char *mu_1_ResponderStates::values[] = {"R_SLEEP","R_PHASEONE_DONE","R_WAIT_NONCE","R_NC_VERIF_SET","R_PHASETWO_DONE","R_PAIRED",NULL };

/*** end of enum declaration ***/
mu_1_ResponderStates mu_1_ResponderStates_undefined_var;

class mu_1_Pairing
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_ResponderStates mu_state;
  mu_1_AgentId mu_initiator;
  mu_1_AgentId mu_initiator_pk;
  mu_1_AgentId mu_initiator_r;
  mu_1_AgentId mu_initiator_n;
  mu_1_CValue mu_initiator_c;
  mu_0_boolean mu_linkKey;
  mu_1_VValue mu_vValue;
  mu_1_Pairing ( const char *n, int os ) { set_self(n,os); };
  mu_1_Pairing ( void ) {};

  virtual ~mu_1_Pairing(); 
friend int CompareWeight(mu_1_Pairing& a, mu_1_Pairing& b)
  {
    int w;
    w = CompareWeight(a.mu_state, b.mu_state);
    if (w!=0) return w;
    w = CompareWeight(a.mu_initiator, b.mu_initiator);
    if (w!=0) return w;
    w = CompareWeight(a.mu_initiator_pk, b.mu_initiator_pk);
    if (w!=0) return w;
    w = CompareWeight(a.mu_initiator_r, b.mu_initiator_r);
    if (w!=0) return w;
    w = CompareWeight(a.mu_initiator_n, b.mu_initiator_n);
    if (w!=0) return w;
    w = CompareWeight(a.mu_initiator_c, b.mu_initiator_c);
    if (w!=0) return w;
    w = CompareWeight(a.mu_linkKey, b.mu_linkKey);
    if (w!=0) return w;
    w = CompareWeight(a.mu_vValue, b.mu_vValue);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_Pairing& a, mu_1_Pairing& b)
  {
    int w;
    w = Compare(a.mu_state, b.mu_state);
    if (w!=0) return w;
    w = Compare(a.mu_initiator, b.mu_initiator);
    if (w!=0) return w;
    w = Compare(a.mu_initiator_pk, b.mu_initiator_pk);
    if (w!=0) return w;
    w = Compare(a.mu_initiator_r, b.mu_initiator_r);
    if (w!=0) return w;
    w = Compare(a.mu_initiator_n, b.mu_initiator_n);
    if (w!=0) return w;
    w = Compare(a.mu_initiator_c, b.mu_initiator_c);
    if (w!=0) return w;
    w = Compare(a.mu_linkKey, b.mu_linkKey);
    if (w!=0) return w;
    w = Compare(a.mu_vValue, b.mu_vValue);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_state.MultisetSort();
    mu_initiator.MultisetSort();
    mu_initiator_pk.MultisetSort();
    mu_initiator_r.MultisetSort();
    mu_initiator_n.MultisetSort();
    mu_initiator_c.MultisetSort();
    mu_linkKey.MultisetSort();
    mu_vValue.MultisetSort();
  }
  void print_statistic()
  {
    mu_state.print_statistic();
    mu_initiator.print_statistic();
    mu_initiator_pk.print_statistic();
    mu_initiator_r.print_statistic();
    mu_initiator_n.print_statistic();
    mu_initiator_c.print_statistic();
    mu_linkKey.print_statistic();
    mu_vValue.print_statistic();
  }
  void clear() {
    mu_state.clear();
    mu_initiator.clear();
    mu_initiator_pk.clear();
    mu_initiator_r.clear();
    mu_initiator_n.clear();
    mu_initiator_c.clear();
    mu_linkKey.clear();
    mu_vValue.clear();
 };
  void undefine() {
    mu_state.undefine();
    mu_initiator.undefine();
    mu_initiator_pk.undefine();
    mu_initiator_r.undefine();
    mu_initiator_n.undefine();
    mu_initiator_c.undefine();
    mu_linkKey.undefine();
    mu_vValue.undefine();
 };
  void reset() {
    mu_state.reset();
    mu_initiator.reset();
    mu_initiator_pk.reset();
    mu_initiator_r.reset();
    mu_initiator_n.reset();
    mu_initiator_c.reset();
    mu_linkKey.reset();
    mu_vValue.reset();
 };
  void print() {
    mu_state.print();
    mu_initiator.print();
    mu_initiator_pk.print();
    mu_initiator_r.print();
    mu_initiator_n.print();
    mu_initiator_c.print();
    mu_linkKey.print();
    mu_vValue.print();
  };
  void print_diff(state *prevstate) {
    mu_state.print_diff(prevstate);
    mu_initiator.print_diff(prevstate);
    mu_initiator_pk.print_diff(prevstate);
    mu_initiator_r.print_diff(prevstate);
    mu_initiator_n.print_diff(prevstate);
    mu_initiator_c.print_diff(prevstate);
    mu_linkKey.print_diff(prevstate);
    mu_vValue.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_state.to_state(thestate);
    mu_initiator.to_state(thestate);
    mu_initiator_pk.to_state(thestate);
    mu_initiator_r.to_state(thestate);
    mu_initiator_n.to_state(thestate);
    mu_initiator_c.to_state(thestate);
    mu_linkKey.to_state(thestate);
    mu_vValue.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_Pairing& operator= (const mu_1_Pairing& from) {
    mu_state.value(from.mu_state.value());
    mu_initiator.value(from.mu_initiator.value());
    mu_initiator_pk.value(from.mu_initiator_pk.value());
    mu_initiator_r.value(from.mu_initiator_r.value());
    mu_initiator_n.value(from.mu_initiator_n.value());
    mu_initiator_c = from.mu_initiator_c;
    mu_linkKey.value(from.mu_linkKey.value());
    mu_vValue = from.mu_vValue;
    return *this;
  };
};

  void mu_1_Pairing::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_Pairing::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_Pairing::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_state.set_self_2(name, ".state", os + 0 ); else mu_state.set_self_2(NULL, NULL, 0);
  if (name) mu_initiator.set_self_2(name, ".initiator", os + 8 ); else mu_initiator.set_self_2(NULL, NULL, 0);
  if (name) mu_initiator_pk.set_self_2(name, ".initiator_pk", os + 16 ); else mu_initiator_pk.set_self_2(NULL, NULL, 0);
  if (name) mu_initiator_r.set_self_2(name, ".initiator_r", os + 24 ); else mu_initiator_r.set_self_2(NULL, NULL, 0);
  if (name) mu_initiator_n.set_self_2(name, ".initiator_n", os + 32 ); else mu_initiator_n.set_self_2(NULL, NULL, 0);
  if (name) mu_initiator_c.set_self_2(name, ".initiator_c", os + 40 ); else mu_initiator_c.set_self_2(NULL, NULL, 0);
  if (name) mu_linkKey.set_self_2(name, ".linkKey", os + 64 ); else mu_linkKey.set_self_2(NULL, NULL, 0);
  if (name) mu_vValue.set_self_2(name, ".vValue", os + 72 ); else mu_vValue.set_self_2(NULL, NULL, 0);
}

mu_1_Pairing::~mu_1_Pairing()
{
}

/*** end record declaration ***/
mu_1_Pairing mu_1_Pairing_undefined_var;

class mu_1_GlobalPairing
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1_AgentId mu_initiator;
  mu_1_AgentId mu_responder;
  mu_1_GlobalPairing ( const char *n, int os ) { set_self(n,os); };
  mu_1_GlobalPairing ( void ) {};

  virtual ~mu_1_GlobalPairing(); 
friend int CompareWeight(mu_1_GlobalPairing& a, mu_1_GlobalPairing& b)
  {
    int w;
    w = CompareWeight(a.mu_initiator, b.mu_initiator);
    if (w!=0) return w;
    w = CompareWeight(a.mu_responder, b.mu_responder);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_GlobalPairing& a, mu_1_GlobalPairing& b)
  {
    int w;
    w = Compare(a.mu_initiator, b.mu_initiator);
    if (w!=0) return w;
    w = Compare(a.mu_responder, b.mu_responder);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_initiator.MultisetSort();
    mu_responder.MultisetSort();
  }
  void print_statistic()
  {
    mu_initiator.print_statistic();
    mu_responder.print_statistic();
  }
  void clear() {
    mu_initiator.clear();
    mu_responder.clear();
 };
  void undefine() {
    mu_initiator.undefine();
    mu_responder.undefine();
 };
  void reset() {
    mu_initiator.reset();
    mu_responder.reset();
 };
  void print() {
    mu_initiator.print();
    mu_responder.print();
  };
  void print_diff(state *prevstate) {
    mu_initiator.print_diff(prevstate);
    mu_responder.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_initiator.to_state(thestate);
    mu_responder.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_GlobalPairing& operator= (const mu_1_GlobalPairing& from) {
    mu_initiator.value(from.mu_initiator.value());
    mu_responder.value(from.mu_responder.value());
    return *this;
  };
};

  void mu_1_GlobalPairing::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_GlobalPairing::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_GlobalPairing::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_initiator.set_self_2(name, ".initiator", os + 0 ); else mu_initiator.set_self_2(NULL, NULL, 0);
  if (name) mu_responder.set_self_2(name, ".responder", os + 8 ); else mu_responder.set_self_2(NULL, NULL, 0);
}

mu_1_GlobalPairing::~mu_1_GlobalPairing()
{
}

/*** end record declaration ***/
mu_1_GlobalPairing mu_1_GlobalPairing_undefined_var;

/*** begin multiset declaration ***/
class mu_1__type_0_id: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1__type_0_id& val) { return value(val.value()); };
  inline operator int() const { return value(); };
  mu_1__type_0_id () : mu__byte(0,0,0) {};
  mu_1__type_0_id (int val) : mu__byte(0,0,0, "Parameter or function result.",0) {operator=(val); };
  char * Name() { return tsprintf("%d", value()); };
};
class mu_1__type_0
{
 public:
  mu_1_Pairing array[ 1 ];
  int max_size;
  int current_size;
 public:
  mu_0_boolean valid[ 1 ];
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_0 (const char *n, int os): current_size(0), max_size(0) { set_self(n, os); };
  mu_1__type_0 ( void ): current_size(0), max_size(0) {};
  virtual ~mu_1__type_0 ();
  mu_1_Pairing& operator[] (int index) /* const */
  {
    if ((index >= 0) && (index <= 0) && valid[index].value())
      return array[ index ];
    else {
      Error.Error("Internal Error::%d not in index range of %s.", index, name);
      return array[0];
    }
  };
  mu_1__type_0& operator= (const mu_1__type_0& from)
  {
    {
       array[0] = from.array[0];
       valid[0].value(from.valid[0].value());
    };
    current_size = from.get_current_size();
    return *this;
  }

friend int CompareWeight(mu_1__type_0& a, mu_1__type_0& b)
  {
    return 0;
  }
friend int Compare(mu_1__type_0& a, mu_1__type_0& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  void clear() { for (int i = 0; i < 1; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void undefine() { for (int i = 0; i < 1; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void reset() { for (int i = 0; i < 1; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
     {
       array[i].to_state(thestate);
       valid[i].to_state(thestate);
     }
  };

  int get_current_size() const  {
    int tmp = 0;
    for (int i = 0; i < 1; i++)
      if (valid[i].value()) tmp++;
    return tmp;
  };

   void update_size()
  {
    current_size = 0;
    for (int i = 0; i < 1; i++)
      if (valid[i].value()) current_size++;
    if (max_size<current_size) max_size = current_size;
  };

   inline bool in(const mu_1__type_0_id& id)
  { return valid[(int)id].value(); }
  void print()
  {
    for (int i = 0; i < 1; i++)
      if (valid[i].value())
	array[i].print();
  };

  void print_statistic()
  {
    cout << "	The maximum size for the multiset \"" 
	 << name << "\" is: " << max_size << ".\n"; 
  };
  void print_diff(state *prevstate)
  {
    bool prevvalid;
    static state temp;
    StateCopy(&temp, workingstate);
    for (int i = 0; i < 1; i++)
      {
	StateCopy(workingstate, prevstate);
	prevvalid = valid[i].value();
	StateCopy(workingstate, &temp);
	if (prevvalid && !valid[i].value())
	  array[i].print();
	if (!prevvalid && valid[i].value())
	  array[i].print();
	if (prevvalid && valid[i].value())
	  array[i].print_diff(prevstate);
      }
  };
  int multisetadd(const mu_1_Pairing &element)
  {
    update_size();
    if (current_size >= 1) Error.Error("Maximum size of MultiSet (%s) exceeded.",name);
    int i;
    for (i = 0; i < 1; i++)
      if (!valid[i].value())
	{
	  array[i] = element;
	  valid[i].value(TRUE);
	  break;
	}
    current_size++;
    return i;
  };
  void multisetremove(const mu_1__type_0_id &id)
  {
    update_size();
    if (!valid[(int)id].value()) Error.Error("Internal Error: Illegal Multiset element selected.");
    valid[(int)id].value(FALSE);
    array[(int)id].undefine();
    current_size--;
  };
  void MultisetSort()
  {
    static mu_1_Pairing temp;

    // compact
    int i,j;
    for (i = 0, j = 0; i < 1; i++)
      if (valid[i].value())
	{
	  if (j!=i)
	    array[j++] = array[i];
	  else
	    j++;
	}
    if (j != current_size) current_size = j;
    for (i = j; i < 1; i++)
      array[i].undefine();
    for (i = 0; i < j; i++)
      valid[i].value(TRUE);
    for (i = j; i < 1; i++)
      valid[i].value(FALSE);

    // bubble sort
    for (i = 0; i < current_size; i++)
      for (j = i+1; j < current_size; j++)
	if (Compare(array[i],array[j])>0)
	  {
	    temp = array[i];
	    array[i] = array[j];
	    array[j] = temp;
	  }
  }
};

  void mu_1__type_0::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_0::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_0::set_self( const char *n, int os)
{
  int i,k;
  name = (char *)n;
  for(i = 0; i < 1; i++)
    if (n) array[i].set_self(tsprintf("%s{%d}", n,i), i * 104 + os); else array[i].set_self(NULL, 0);
  k = os + i * 104;
  for(i = 0; i < 1; i++)
    valid[i].set_self("", i * 8 + k);
};
mu_1__type_0::~mu_1__type_0()
{
}
/*** end multiset declaration ***/
mu_1__type_0 mu_1__type_0_undefined_var;

class mu_1_Responder
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_0 mu_pairings;
  mu_1_Responder ( const char *n, int os ) { set_self(n,os); };
  mu_1_Responder ( void ) {};

  virtual ~mu_1_Responder(); 
friend int CompareWeight(mu_1_Responder& a, mu_1_Responder& b)
  {
    int w;
    w = CompareWeight(a.mu_pairings, b.mu_pairings);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_Responder& a, mu_1_Responder& b)
  {
    int w;
    w = Compare(a.mu_pairings, b.mu_pairings);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_pairings.MultisetSort();
  }
  void print_statistic()
  {
    mu_pairings.print_statistic();
  }
  void clear() {
    mu_pairings.clear();
 };
  void undefine() {
    mu_pairings.undefine();
 };
  void reset() {
    mu_pairings.reset();
 };
  void print() {
    mu_pairings.print();
  };
  void print_diff(state *prevstate) {
    mu_pairings.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_pairings.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_Responder& operator= (const mu_1_Responder& from) {
    mu_pairings = from.mu_pairings;
    return *this;
  };
};

  void mu_1_Responder::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_Responder::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_Responder::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_pairings.set_self_2(name, ".pairings", os + 0 ); else mu_pairings.set_self_2(NULL, NULL, 0);
}

mu_1_Responder::~mu_1_Responder()
{
}

/*** end record declaration ***/
mu_1_Responder mu_1_Responder_undefined_var;

/*** begin multiset declaration ***/
class mu_1__type_1_id: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1__type_1_id& val) { return value(val.value()); };
  inline operator int() const { return value(); };
  mu_1__type_1_id () : mu__byte(0,9,0) {};
  mu_1__type_1_id (int val) : mu__byte(0,9,0, "Parameter or function result.",0) {operator=(val); };
  char * Name() { return tsprintf("%d", value()); };
};
class mu_1__type_1
{
 public:
  mu_1_Message array[ 10 ];
  int max_size;
  int current_size;
 public:
  mu_0_boolean valid[ 10 ];
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_1 (const char *n, int os): current_size(0), max_size(0) { set_self(n, os); };
  mu_1__type_1 ( void ): current_size(0), max_size(0) {};
  virtual ~mu_1__type_1 ();
  mu_1_Message& operator[] (int index) /* const */
  {
    if ((index >= 0) && (index <= 9) && valid[index].value())
      return array[ index ];
    else {
      Error.Error("Internal Error::%d not in index range of %s.", index, name);
      return array[0];
    }
  };
  mu_1__type_1& operator= (const mu_1__type_1& from)
  {
    for (int i = 0; i < 10; i++)
    {
       array[i] = from.array[i];
       valid[i].value(from.valid[i].value());
    };
    current_size = from.get_current_size();
    return *this;
  }

friend int CompareWeight(mu_1__type_1& a, mu_1__type_1& b)
  {
    return 0;
  }
friend int Compare(mu_1__type_1& a, mu_1__type_1& b)
  {
    int w;
    for (int i=0; i<10; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  void clear() { for (int i = 0; i < 10; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void undefine() { for (int i = 0; i < 10; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void reset() { for (int i = 0; i < 10; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 10; i++)
     {
       array[i].to_state(thestate);
       valid[i].to_state(thestate);
     }
  };

  int get_current_size() const  {
    int tmp = 0;
    for (int i = 0; i < 10; i++)
      if (valid[i].value()) tmp++;
    return tmp;
  };

   void update_size()
  {
    current_size = 0;
    for (int i = 0; i < 10; i++)
      if (valid[i].value()) current_size++;
    if (max_size<current_size) max_size = current_size;
  };

   inline bool in(const mu_1__type_1_id& id)
  { return valid[(int)id].value(); }
  void print()
  {
    for (int i = 0; i < 10; i++)
      if (valid[i].value())
	array[i].print();
  };

  void print_statistic()
  {
    cout << "	The maximum size for the multiset \"" 
	 << name << "\" is: " << max_size << ".\n"; 
  };
  void print_diff(state *prevstate)
  {
    bool prevvalid;
    static state temp;
    StateCopy(&temp, workingstate);
    for (int i = 0; i < 10; i++)
      {
	StateCopy(workingstate, prevstate);
	prevvalid = valid[i].value();
	StateCopy(workingstate, &temp);
	if (prevvalid && !valid[i].value())
	  array[i].print();
	if (!prevvalid && valid[i].value())
	  array[i].print();
	if (prevvalid && valid[i].value())
	  array[i].print_diff(prevstate);
      }
  };
  int multisetadd(const mu_1_Message &element)
  {
    update_size();
    if (current_size >= 10) Error.Error("Maximum size of MultiSet (%s) exceeded.",name);
    int i;
    for (i = 0; i < 10; i++)
      if (!valid[i].value())
	{
	  array[i] = element;
	  valid[i].value(TRUE);
	  break;
	}
    current_size++;
    return i;
  };
  void multisetremove(const mu_1__type_1_id &id)
  {
    update_size();
    if (!valid[(int)id].value()) Error.Error("Internal Error: Illegal Multiset element selected.");
    valid[(int)id].value(FALSE);
    array[(int)id].undefine();
    current_size--;
  };
  void MultisetSort()
  {
    static mu_1_Message temp;

    // compact
    int i,j;
    for (i = 0, j = 0; i < 10; i++)
      if (valid[i].value())
	{
	  if (j!=i)
	    array[j++] = array[i];
	  else
	    j++;
	}
    if (j != current_size) current_size = j;
    for (i = j; i < 10; i++)
      array[i].undefine();
    for (i = 0; i < j; i++)
      valid[i].value(TRUE);
    for (i = j; i < 10; i++)
      valid[i].value(FALSE);

    // bubble sort
    for (i = 0; i < current_size; i++)
      for (j = i+1; j < current_size; j++)
	if (Compare(array[i],array[j])>0)
	  {
	    temp = array[i];
	    array[i] = array[j];
	    array[j] = temp;
	  }
  }
};

  void mu_1__type_1::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_1::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_1::set_self( const char *n, int os)
{
  int i,k;
  name = (char *)n;
  for(i = 0; i < 10; i++)
    if (n) array[i].set_self(tsprintf("%s{%d}", n,i), i * 104 + os); else array[i].set_self(NULL, 0);
  k = os + i * 104;
  for(i = 0; i < 10; i++)
    valid[i].set_self("", i * 8 + k);
};
mu_1__type_1::~mu_1__type_1()
{
}
/*** end multiset declaration ***/
mu_1__type_1 mu_1__type_1_undefined_var;

class mu_1__type_2
{
 public:
  mu_0_boolean array[ 3 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_2 (const char *n, int os) { set_self(n, os); };
  mu_1__type_2 ( void ) {};
  virtual ~mu_1__type_2 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - (1) ];
    if ( ( index >= 2 ) && ( index <= 2 ) )
      return array[ index - (1) ];
    if ( ( index >= 3 ) && ( index <= 3 ) )
      return array[ index - (1) ];
    if (index==UNDEFVAL) 
      Error.Error("Indexing to %s using an undefined value.", name);
    else
      Error.Error("Funny index value %d for %s. (Internal Error in Type Checking.",index, name);
    return array[0];
  }
  mu_1__type_2& operator= (const mu_1__type_2& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_2& a, mu_1__type_2& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 3; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_2::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_2::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_2::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"InitiatorId_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"ResponderId_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"IntruderId_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_2::~mu_1__type_2()
{
}
/*** end array declaration ***/
mu_1__type_2 mu_1__type_2_undefined_var;

class mu_1__type_3
{
 public:
  mu_0_boolean array[ 3 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_3 (const char *n, int os) { set_self(n, os); };
  mu_1__type_3 ( void ) {};
  virtual ~mu_1__type_3 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - (1) ];
    if ( ( index >= 2 ) && ( index <= 2 ) )
      return array[ index - (1) ];
    if ( ( index >= 3 ) && ( index <= 3 ) )
      return array[ index - (1) ];
    if (index==UNDEFVAL) 
      Error.Error("Indexing to %s using an undefined value.", name);
    else
      Error.Error("Funny index value %d for %s. (Internal Error in Type Checking.",index, name);
    return array[0];
  }
  mu_1__type_3& operator= (const mu_1__type_3& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_3& a, mu_1__type_3& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 3; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_3::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_3::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_3::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"InitiatorId_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"ResponderId_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"IntruderId_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_3::~mu_1__type_3()
{
}
/*** end array declaration ***/
mu_1__type_3 mu_1__type_3_undefined_var;

class mu_1__type_4
{
 public:
  mu_0_boolean array[ 3 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_4 (const char *n, int os) { set_self(n, os); };
  mu_1__type_4 ( void ) {};
  virtual ~mu_1__type_4 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - (1) ];
    if ( ( index >= 2 ) && ( index <= 2 ) )
      return array[ index - (1) ];
    if ( ( index >= 3 ) && ( index <= 3 ) )
      return array[ index - (1) ];
    if (index==UNDEFVAL) 
      Error.Error("Indexing to %s using an undefined value.", name);
    else
      Error.Error("Funny index value %d for %s. (Internal Error in Type Checking.",index, name);
    return array[0];
  }
  mu_1__type_4& operator= (const mu_1__type_4& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_4& a, mu_1__type_4& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 3; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_4::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_4::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_4::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"InitiatorId_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"ResponderId_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"IntruderId_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_4::~mu_1__type_4()
{
}
/*** end array declaration ***/
mu_1__type_4 mu_1__type_4_undefined_var;

class mu_1__type_5
{
 public:
  mu_0_boolean array[ 3 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_5 (const char *n, int os) { set_self(n, os); };
  mu_1__type_5 ( void ) {};
  virtual ~mu_1__type_5 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - (1) ];
    if ( ( index >= 2 ) && ( index <= 2 ) )
      return array[ index - (1) ];
    if ( ( index >= 3 ) && ( index <= 3 ) )
      return array[ index - (1) ];
    if (index==UNDEFVAL) 
      Error.Error("Indexing to %s using an undefined value.", name);
    else
      Error.Error("Funny index value %d for %s. (Internal Error in Type Checking.",index, name);
    return array[0];
  }
  mu_1__type_5& operator= (const mu_1__type_5& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_5& a, mu_1__type_5& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 3; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_5::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_5::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_5::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"InitiatorId_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"ResponderId_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"IntruderId_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_5::~mu_1__type_5()
{
}
/*** end array declaration ***/
mu_1__type_5 mu_1__type_5_undefined_var;

class mu_1__type_6
{
 public:
  mu_0_boolean array[ 3 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_6 (const char *n, int os) { set_self(n, os); };
  mu_1__type_6 ( void ) {};
  virtual ~mu_1__type_6 ();
  mu_0_boolean& operator[] (int index) /* const */
  {
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - (1) ];
    if ( ( index >= 2 ) && ( index <= 2 ) )
      return array[ index - (1) ];
    if ( ( index >= 3 ) && ( index <= 3 ) )
      return array[ index - (1) ];
    if (index==UNDEFVAL) 
      Error.Error("Indexing to %s using an undefined value.", name);
    else
      Error.Error("Funny index value %d for %s. (Internal Error in Type Checking.",index, name);
    return array[0];
  }
  mu_1__type_6& operator= (const mu_1__type_6& from)
  {
    for (int i = 0; i < 3; i++)
      array[i].value(from.array[i].value());
    return *this;
  }

friend int CompareWeight(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_6& a, mu_1__type_6& b)
  {
    int w;
    for (int i=0; i<3; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<3; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<3; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 3; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 3; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 3; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 3; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 3; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 3; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_6::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_6::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_6::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"InitiatorId_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"ResponderId_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
if (n) array[i].set_self_ar(n,"IntruderId_1", i * 8 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_6::~mu_1__type_6()
{
}
/*** end array declaration ***/
mu_1__type_6 mu_1__type_6_undefined_var;

class mu_1_Intruder
{
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  void set_self(const char *n, int os);
  mu_1__type_1 mu_messages;
  mu_1__type_2 mu_linkKeys;
  mu_1__type_3 mu_pk;
  mu_1__type_4 mu_sent_pk;
  mu_1__type_5 mu_nonce;
  mu_1__type_6 mu_sent_n;
  mu_1_Intruder ( const char *n, int os ) { set_self(n,os); };
  mu_1_Intruder ( void ) {};

  virtual ~mu_1_Intruder(); 
friend int CompareWeight(mu_1_Intruder& a, mu_1_Intruder& b)
  {
    int w;
    w = CompareWeight(a.mu_messages, b.mu_messages);
    if (w!=0) return w;
    w = CompareWeight(a.mu_linkKeys, b.mu_linkKeys);
    if (w!=0) return w;
    w = CompareWeight(a.mu_pk, b.mu_pk);
    if (w!=0) return w;
    w = CompareWeight(a.mu_sent_pk, b.mu_sent_pk);
    if (w!=0) return w;
    w = CompareWeight(a.mu_nonce, b.mu_nonce);
    if (w!=0) return w;
    w = CompareWeight(a.mu_sent_n, b.mu_sent_n);
    if (w!=0) return w;
  return 0;
}
friend int Compare(mu_1_Intruder& a, mu_1_Intruder& b)
  {
    int w;
    w = Compare(a.mu_messages, b.mu_messages);
    if (w!=0) return w;
    w = Compare(a.mu_linkKeys, b.mu_linkKeys);
    if (w!=0) return w;
    w = Compare(a.mu_pk, b.mu_pk);
    if (w!=0) return w;
    w = Compare(a.mu_sent_pk, b.mu_sent_pk);
    if (w!=0) return w;
    w = Compare(a.mu_nonce, b.mu_nonce);
    if (w!=0) return w;
    w = Compare(a.mu_sent_n, b.mu_sent_n);
    if (w!=0) return w;
  return 0;
}
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    mu_messages.MultisetSort();
    mu_linkKeys.MultisetSort();
    mu_pk.MultisetSort();
    mu_sent_pk.MultisetSort();
    mu_nonce.MultisetSort();
    mu_sent_n.MultisetSort();
  }
  void print_statistic()
  {
    mu_messages.print_statistic();
    mu_linkKeys.print_statistic();
    mu_pk.print_statistic();
    mu_sent_pk.print_statistic();
    mu_nonce.print_statistic();
    mu_sent_n.print_statistic();
  }
  void clear() {
    mu_messages.clear();
    mu_linkKeys.clear();
    mu_pk.clear();
    mu_sent_pk.clear();
    mu_nonce.clear();
    mu_sent_n.clear();
 };
  void undefine() {
    mu_messages.undefine();
    mu_linkKeys.undefine();
    mu_pk.undefine();
    mu_sent_pk.undefine();
    mu_nonce.undefine();
    mu_sent_n.undefine();
 };
  void reset() {
    mu_messages.reset();
    mu_linkKeys.reset();
    mu_pk.reset();
    mu_sent_pk.reset();
    mu_nonce.reset();
    mu_sent_n.reset();
 };
  void print() {
    mu_messages.print();
    mu_linkKeys.print();
    mu_pk.print();
    mu_sent_pk.print();
    mu_nonce.print();
    mu_sent_n.print();
  };
  void print_diff(state *prevstate) {
    mu_messages.print_diff(prevstate);
    mu_linkKeys.print_diff(prevstate);
    mu_pk.print_diff(prevstate);
    mu_sent_pk.print_diff(prevstate);
    mu_nonce.print_diff(prevstate);
    mu_sent_n.print_diff(prevstate);
  };
  void to_state(state *thestate) {
    mu_messages.to_state(thestate);
    mu_linkKeys.to_state(thestate);
    mu_pk.to_state(thestate);
    mu_sent_pk.to_state(thestate);
    mu_nonce.to_state(thestate);
    mu_sent_n.to_state(thestate);
  };
virtual bool isundefined() { Error.Error("Checking undefinedness of a non-base type"); return TRUE;}
virtual bool ismember() { Error.Error("Checking membership for a non-base type"); return TRUE;}
  mu_1_Intruder& operator= (const mu_1_Intruder& from) {
    mu_messages = from.mu_messages;
    mu_linkKeys = from.mu_linkKeys;
    mu_pk = from.mu_pk;
    mu_sent_pk = from.mu_sent_pk;
    mu_nonce = from.mu_nonce;
    mu_sent_n = from.mu_sent_n;
    return *this;
  };
};

  void mu_1_Intruder::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1_Intruder::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1_Intruder::set_self(const char *n, int os)
{
  name = (char *)n;

  if (name) mu_messages.set_self_2(name, ".messages", os + 0 ); else mu_messages.set_self_2(NULL, NULL, 0);
  if (name) mu_linkKeys.set_self_2(name, ".linkKeys", os + 1120 ); else mu_linkKeys.set_self_2(NULL, NULL, 0);
  if (name) mu_pk.set_self_2(name, ".pk", os + 1144 ); else mu_pk.set_self_2(NULL, NULL, 0);
  if (name) mu_sent_pk.set_self_2(name, ".sent_pk", os + 1168 ); else mu_sent_pk.set_self_2(NULL, NULL, 0);
  if (name) mu_nonce.set_self_2(name, ".nonce", os + 1192 ); else mu_nonce.set_self_2(NULL, NULL, 0);
  if (name) mu_sent_n.set_self_2(name, ".sent_n", os + 1216 ); else mu_sent_n.set_self_2(NULL, NULL, 0);
}

mu_1_Intruder::~mu_1_Intruder()
{
}

/*** end record declaration ***/
mu_1_Intruder mu_1_Intruder_undefined_var;

/*** begin multiset declaration ***/
class mu_1__type_7_id: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1__type_7_id& val) { return value(val.value()); };
  inline operator int() const { return value(); };
  mu_1__type_7_id () : mu__byte(0,9,0) {};
  mu_1__type_7_id (int val) : mu__byte(0,9,0, "Parameter or function result.",0) {operator=(val); };
  char * Name() { return tsprintf("%d", value()); };
};
class mu_1__type_7
{
 public:
  mu_1_Message array[ 10 ];
  int max_size;
  int current_size;
 public:
  mu_0_boolean valid[ 10 ];
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_7 (const char *n, int os): current_size(0), max_size(0) { set_self(n, os); };
  mu_1__type_7 ( void ): current_size(0), max_size(0) {};
  virtual ~mu_1__type_7 ();
  mu_1_Message& operator[] (int index) /* const */
  {
    if ((index >= 0) && (index <= 9) && valid[index].value())
      return array[ index ];
    else {
      Error.Error("Internal Error::%d not in index range of %s.", index, name);
      return array[0];
    }
  };
  mu_1__type_7& operator= (const mu_1__type_7& from)
  {
    for (int i = 0; i < 10; i++)
    {
       array[i] = from.array[i];
       valid[i].value(from.valid[i].value());
    };
    current_size = from.get_current_size();
    return *this;
  }

friend int CompareWeight(mu_1__type_7& a, mu_1__type_7& b)
  {
    return 0;
  }
friend int Compare(mu_1__type_7& a, mu_1__type_7& b)
  {
    int w;
    for (int i=0; i<10; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  void clear() { for (int i = 0; i < 10; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void undefine() { for (int i = 0; i < 10; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void reset() { for (int i = 0; i < 10; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 10; i++)
     {
       array[i].to_state(thestate);
       valid[i].to_state(thestate);
     }
  };

  int get_current_size() const  {
    int tmp = 0;
    for (int i = 0; i < 10; i++)
      if (valid[i].value()) tmp++;
    return tmp;
  };

   void update_size()
  {
    current_size = 0;
    for (int i = 0; i < 10; i++)
      if (valid[i].value()) current_size++;
    if (max_size<current_size) max_size = current_size;
  };

   inline bool in(const mu_1__type_7_id& id)
  { return valid[(int)id].value(); }
  void print()
  {
    for (int i = 0; i < 10; i++)
      if (valid[i].value())
	array[i].print();
  };

  void print_statistic()
  {
    cout << "	The maximum size for the multiset \"" 
	 << name << "\" is: " << max_size << ".\n"; 
  };
  void print_diff(state *prevstate)
  {
    bool prevvalid;
    static state temp;
    StateCopy(&temp, workingstate);
    for (int i = 0; i < 10; i++)
      {
	StateCopy(workingstate, prevstate);
	prevvalid = valid[i].value();
	StateCopy(workingstate, &temp);
	if (prevvalid && !valid[i].value())
	  array[i].print();
	if (!prevvalid && valid[i].value())
	  array[i].print();
	if (prevvalid && valid[i].value())
	  array[i].print_diff(prevstate);
      }
  };
  int multisetadd(const mu_1_Message &element)
  {
    update_size();
    if (current_size >= 10) Error.Error("Maximum size of MultiSet (%s) exceeded.",name);
    int i;
    for (i = 0; i < 10; i++)
      if (!valid[i].value())
	{
	  array[i] = element;
	  valid[i].value(TRUE);
	  break;
	}
    current_size++;
    return i;
  };
  void multisetremove(const mu_1__type_7_id &id)
  {
    update_size();
    if (!valid[(int)id].value()) Error.Error("Internal Error: Illegal Multiset element selected.");
    valid[(int)id].value(FALSE);
    array[(int)id].undefine();
    current_size--;
  };
  void MultisetSort()
  {
    static mu_1_Message temp;

    // compact
    int i,j;
    for (i = 0, j = 0; i < 10; i++)
      if (valid[i].value())
	{
	  if (j!=i)
	    array[j++] = array[i];
	  else
	    j++;
	}
    if (j != current_size) current_size = j;
    for (i = j; i < 10; i++)
      array[i].undefine();
    for (i = 0; i < j; i++)
      valid[i].value(TRUE);
    for (i = j; i < 10; i++)
      valid[i].value(FALSE);

    // bubble sort
    for (i = 0; i < current_size; i++)
      for (j = i+1; j < current_size; j++)
	if (Compare(array[i],array[j])>0)
	  {
	    temp = array[i];
	    array[i] = array[j];
	    array[j] = temp;
	  }
  }
};

  void mu_1__type_7::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_7::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_7::set_self( const char *n, int os)
{
  int i,k;
  name = (char *)n;
  for(i = 0; i < 10; i++)
    if (n) array[i].set_self(tsprintf("%s{%d}", n,i), i * 104 + os); else array[i].set_self(NULL, 0);
  k = os + i * 104;
  for(i = 0; i < 10; i++)
    valid[i].set_self("", i * 8 + k);
};
mu_1__type_7::~mu_1__type_7()
{
}
/*** end multiset declaration ***/
mu_1__type_7 mu_1__type_7_undefined_var;

class mu_1__type_8
{
 public:
  mu_1_Initiator array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_8 (const char *n, int os) { set_self(n, os); };
  mu_1__type_8 ( void ) {};
  virtual ~mu_1__type_8 ();
  mu_1_Initiator& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 1 ) && ( index <= 1 ) )
      return array[ index - 1 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: InitiatorId is internally represented from 1 to 1.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 1 ];
#endif
  };
  mu_1__type_8& operator= (const mu_1__type_8& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_8& a, mu_1__type_8& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_8::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_8::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_8::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"InitiatorId_1", i * 104 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_8::~mu_1__type_8()
{
}
/*** end array declaration ***/
mu_1__type_8 mu_1__type_8_undefined_var;

class mu_1__type_9
{
 public:
  mu_1_Responder array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_9 (const char *n, int os) { set_self(n, os); };
  mu_1__type_9 ( void ) {};
  virtual ~mu_1__type_9 ();
  mu_1_Responder& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 2 ) && ( index <= 2 ) )
      return array[ index - 2 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: ResponderId is internally represented from 2 to 2.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 2 ];
#endif
  };
  mu_1__type_9& operator= (const mu_1__type_9& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_9& a, mu_1__type_9& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_9& a, mu_1__type_9& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_9::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_9::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_9::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"ResponderId_1", i * 112 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_9::~mu_1__type_9()
{
}
/*** end array declaration ***/
mu_1__type_9 mu_1__type_9_undefined_var;

class mu_1__type_10
{
 public:
  mu_1_Intruder array[ 1 ];
 public:
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_10 (const char *n, int os) { set_self(n, os); };
  mu_1__type_10 ( void ) {};
  virtual ~mu_1__type_10 ();
  mu_1_Intruder& operator[] (int index) /* const */
  {
#ifndef NO_RUN_TIME_CHECKING
    if ( ( index >= 3 ) && ( index <= 3 ) )
      return array[ index - 3 ];
    else
      {
	if (index==UNDEFVAL) 
	  Error.Error("Indexing to %s using an undefined value.", name);
	else
	  Error.Error("Funny index value %d for %s: IntruderId is internally represented from 3 to 3.\nInternal Error in Type checking.",index, name);
	return array[0];
      }
#else
    return array[ index - 3 ];
#endif
  };
  mu_1__type_10& operator= (const mu_1__type_10& from)
  {
      array[0] = from.array[0];
    return *this;
  }

friend int CompareWeight(mu_1__type_10& a, mu_1__type_10& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = CompareWeight(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
friend int Compare(mu_1__type_10& a, mu_1__type_10& b)
  {
    int w;
    for (int i=0; i<1; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  virtual void MultisetSort()
  {
    for (int i=0; i<1; i++)
      array[i].MultisetSort();
  }
  void print_statistic()
  {
    for (int i=0; i<1; i++)
      array[i].print_statistic();
  }
  void clear() { for (int i = 0; i < 1; i++) array[i].clear(); };

  void undefine() { for (int i = 0; i < 1; i++) array[i].undefine(); };

  void reset() { for (int i = 0; i < 1; i++) array[i].reset(); };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 1; i++)
      array[i].to_state(thestate);
  };

  void print()
  {
    for (int i = 0; i < 1; i++)
      array[i].print(); };

  void print_diff(state *prevstate)
  {
    for (int i = 0; i < 1; i++)
      array[i].print_diff(prevstate);
  };
};

  void mu_1__type_10::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_10::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_10::set_self( const char *n, int os)
  {
    int i=0;
    name = (char *)n;

if (n) array[i].set_self_ar(n,"IntruderId_1", i * 1240 + os); else array[i].set_self_ar(NULL, NULL, 0); i++;
}
mu_1__type_10::~mu_1__type_10()
{
}
/*** end array declaration ***/
mu_1__type_10 mu_1__type_10_undefined_var;

/*** begin multiset declaration ***/
class mu_1__type_11_id: public mu__byte
{
 public:
  inline int operator=(int val) { return value(val); };
  inline int operator=(const mu_1__type_11_id& val) { return value(val.value()); };
  inline operator int() const { return value(); };
  mu_1__type_11_id () : mu__byte(0,9,0) {};
  mu_1__type_11_id (int val) : mu__byte(0,9,0, "Parameter or function result.",0) {operator=(val); };
  char * Name() { return tsprintf("%d", value()); };
};
class mu_1__type_11
{
 public:
  mu_1_GlobalPairing array[ 10 ];
  int max_size;
  int current_size;
 public:
  mu_0_boolean valid[ 10 ];
  char *name;
  char longname[BUFFER_SIZE/4];
  void set_self( const char *n, int os);
  void set_self_2( const char *n, const char *n2, int os);
  void set_self_ar( const char *n, const char *n2, int os);
  mu_1__type_11 (const char *n, int os): current_size(0), max_size(0) { set_self(n, os); };
  mu_1__type_11 ( void ): current_size(0), max_size(0) {};
  virtual ~mu_1__type_11 ();
  mu_1_GlobalPairing& operator[] (int index) /* const */
  {
    if ((index >= 0) && (index <= 9) && valid[index].value())
      return array[ index ];
    else {
      Error.Error("Internal Error::%d not in index range of %s.", index, name);
      return array[0];
    }
  };
  mu_1__type_11& operator= (const mu_1__type_11& from)
  {
    for (int i = 0; i < 10; i++)
    {
       array[i] = from.array[i];
       valid[i].value(from.valid[i].value());
    };
    current_size = from.get_current_size();
    return *this;
  }

friend int CompareWeight(mu_1__type_11& a, mu_1__type_11& b)
  {
    return 0;
  }
friend int Compare(mu_1__type_11& a, mu_1__type_11& b)
  {
    int w;
    for (int i=0; i<10; i++) {
      w = Compare(a.array[i], b.array[i]);
      if (w!=0) return w;
    }
    return 0;
  }
  virtual void Permute(PermSet& Perm, int i);
  virtual void SimpleCanonicalize(PermSet& Perm);
  virtual void Canonicalize(PermSet& Perm);
  virtual void SimpleLimit(PermSet& Perm);
  virtual void ArrayLimit(PermSet& Perm);
  virtual void Limit(PermSet& Perm);
  virtual void MultisetLimit(PermSet& Perm);
  void clear() { for (int i = 0; i < 10; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void undefine() { for (int i = 0; i < 10; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void reset() { for (int i = 0; i < 10; i++) { array[i].undefine(); valid[i].value(FALSE); } current_size = 0; };

  void to_state(state *thestate)
  {
    for (int i = 0; i < 10; i++)
     {
       array[i].to_state(thestate);
       valid[i].to_state(thestate);
     }
  };

  int get_current_size() const  {
    int tmp = 0;
    for (int i = 0; i < 10; i++)
      if (valid[i].value()) tmp++;
    return tmp;
  };

   void update_size()
  {
    current_size = 0;
    for (int i = 0; i < 10; i++)
      if (valid[i].value()) current_size++;
    if (max_size<current_size) max_size = current_size;
  };

   inline bool in(const mu_1__type_11_id& id)
  { return valid[(int)id].value(); }
  void print()
  {
    for (int i = 0; i < 10; i++)
      if (valid[i].value())
	array[i].print();
  };

  void print_statistic()
  {
    cout << "	The maximum size for the multiset \"" 
	 << name << "\" is: " << max_size << ".\n"; 
  };
  void print_diff(state *prevstate)
  {
    bool prevvalid;
    static state temp;
    StateCopy(&temp, workingstate);
    for (int i = 0; i < 10; i++)
      {
	StateCopy(workingstate, prevstate);
	prevvalid = valid[i].value();
	StateCopy(workingstate, &temp);
	if (prevvalid && !valid[i].value())
	  array[i].print();
	if (!prevvalid && valid[i].value())
	  array[i].print();
	if (prevvalid && valid[i].value())
	  array[i].print_diff(prevstate);
      }
  };
  int multisetadd(const mu_1_GlobalPairing &element)
  {
    update_size();
    if (current_size >= 10) Error.Error("Maximum size of MultiSet (%s) exceeded.",name);
    int i;
    for (i = 0; i < 10; i++)
      if (!valid[i].value())
	{
	  array[i] = element;
	  valid[i].value(TRUE);
	  break;
	}
    current_size++;
    return i;
  };
  void multisetremove(const mu_1__type_11_id &id)
  {
    update_size();
    if (!valid[(int)id].value()) Error.Error("Internal Error: Illegal Multiset element selected.");
    valid[(int)id].value(FALSE);
    array[(int)id].undefine();
    current_size--;
  };
  void MultisetSort()
  {
    static mu_1_GlobalPairing temp;

    // compact
    int i,j;
    for (i = 0, j = 0; i < 10; i++)
      if (valid[i].value())
	{
	  if (j!=i)
	    array[j++] = array[i];
	  else
	    j++;
	}
    if (j != current_size) current_size = j;
    for (i = j; i < 10; i++)
      array[i].undefine();
    for (i = 0; i < j; i++)
      valid[i].value(TRUE);
    for (i = j; i < 10; i++)
      valid[i].value(FALSE);

    // bubble sort
    for (i = 0; i < current_size; i++)
      for (j = i+1; j < current_size; j++)
	if (Compare(array[i],array[j])>0)
	  {
	    temp = array[i];
	    array[i] = array[j];
	    array[j] = temp;
	  }
  }
};

  void mu_1__type_11::set_self_ar( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    int l1 = strlen(n1), l2 = strlen(n2);
    strcpy( longname, n1 );
    longname[l1] = '[';
    strcpy( longname+l1+1, n2 );
    longname[l1+l2+1] = ']';
    longname[l1+l2+2] = 0;
    set_self( longname, os );
  };
  void mu_1__type_11::set_self_2( const char *n1, const char *n2, int os ) {
    if (n1 == NULL) {set_self(NULL, 0); return;}
    strcpy( longname, n1 );
    strcat( longname, n2 );
    set_self( longname, os );
  };
void mu_1__type_11::set_self( const char *n, int os)
{
  int i,k;
  name = (char *)n;
  for(i = 0; i < 10; i++)
    if (n) array[i].set_self(tsprintf("%s{%d}", n,i), i * 16 + os); else array[i].set_self(NULL, 0);
  k = os + i * 16;
  for(i = 0; i < 10; i++)
    valid[i].set_self("", i * 8 + k);
};
mu_1__type_11::~mu_1__type_11()
{
}
/*** end multiset declaration ***/
mu_1__type_11 mu_1__type_11_undefined_var;

const int mu_PHASETWO = 2;
const int mu_ASSUMEVALIDRESPONDER = 1;
const int mu_NumInitiators = 1;
const int mu_MaxInitiators = 1;
const int mu_NumResponders = 1;
const int mu_NumIntruders = 1;
const int mu_NetworkSize = 10;
const int mu_MaxKnowledge = 10;
const int mu_MaxPairings = 10;
const int mu_InitiatorId_1 = 1;
const int mu_ResponderId_1 = 2;
const int mu_IntruderId_1 = 3;
const int mu_M_PublicKey = 4;
const int mu_M_CommitValue = 5;
const int mu_M_Nonce = 6;
const int mu_M_ExchangeVerif = 7;
const int mu_I_SLEEP = 8;
const int mu_I_SENT_KEY = 9;
const int mu_I_PHASEONE_DONE = 10;
const int mu_I_WAIT_NONCE = 11;
const int mu_I_NC_VERIF_SET = 12;
const int mu_I_PHASETWO_DONE = 13;
const int mu_I_WAIT_EVALUE = 14;
const int mu_I_PAIRED = 15;
const int mu_R_SLEEP = 16;
const int mu_R_PHASEONE_DONE = 17;
const int mu_R_WAIT_NONCE = 18;
const int mu_R_NC_VERIF_SET = 19;
const int mu_R_PHASETWO_DONE = 20;
const int mu_R_PAIRED = 21;
/*** Variable declaration ***/
mu_1__type_7 mu_net("net",0);

/*** Variable declaration ***/
mu_1__type_8 mu_ini("ini",1120);

/*** Variable declaration ***/
mu_1__type_9 mu_res("res",1224);

/*** Variable declaration ***/
mu_1__type_10 mu_int("int",1336);

/*** Variable declaration ***/
mu_1__type_11 mu_gpr("gpr",2576);





/********************
  The world
 ********************/
void world_class::clear()
{
  mu_net.clear();
  mu_ini.clear();
  mu_res.clear();
  mu_int.clear();
  mu_gpr.clear();
}
void world_class::undefine()
{
  mu_net.undefine();
  mu_ini.undefine();
  mu_res.undefine();
  mu_int.undefine();
  mu_gpr.undefine();
}
void world_class::reset()
{
  mu_net.reset();
  mu_ini.reset();
  mu_res.reset();
  mu_int.reset();
  mu_gpr.reset();
}
void world_class::print()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_net.print();
  mu_ini.print();
  mu_res.print();
  mu_int.print();
  mu_gpr.print();
    num_calls--;
}
}
void world_class::print_statistic()
{
  static int num_calls = 0; /* to ward off recursive calls. */
  if ( num_calls == 0 ) {
    num_calls++;
  mu_net.print_statistic();
  mu_ini.print_statistic();
  mu_res.print_statistic();
  mu_int.print_statistic();
  mu_gpr.print_statistic();
    num_calls--;
}
}
void world_class::print_diff( state *prevstate )
{
  if ( prevstate != NULL )
  {
    mu_net.print_diff(prevstate);
    mu_ini.print_diff(prevstate);
    mu_res.print_diff(prevstate);
    mu_int.print_diff(prevstate);
    mu_gpr.print_diff(prevstate);
  }
  else
print();
}
void world_class::to_state(state *newstate)
{
  mu_net.to_state( newstate );
  mu_ini.to_state( newstate );
  mu_res.to_state( newstate );
  mu_int.to_state( newstate );
  mu_gpr.to_state( newstate );
}
void world_class::setstate(state *thestate)
{
}


/********************
  Rule declarations
 ********************/
/******************** RuleBase0 ********************/
class RuleBase0
{
public:
  int Priority()
  {
    return 98;
  }
  char * Name(unsigned r)
  {
    static mu_1_AgentId mu_k;
    mu_k.unionassign(r % 3);
    r = r / 3;
    static mu_1__type_1_id mu_j;
    mu_j.value((r % 10) + 0);
    r = r / 10;
    static mu_1_IntruderId mu_i;
    mu_i.value((r % 1) + 3);
    r = r / 1;
    return tsprintf("intruder sends recorded message with its own info, k:%s, j:%s, i:%s", mu_k.Name(), mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_AgentId mu_k;
    mu_k.unionassign(r % 3);
    r = r / 3;
    static mu_1__type_1_id mu_j;
    mu_j.value((r % 10) + 0);
    r = r / 10;
    static mu_1_IntruderId mu_i;
    mu_i.value((r % 1) + 3);
    r = r / 1;
  if (!mu_int[mu_i].mu_messages.in(mu_j)) { return FALSE; }
bool mu__boolexpr12;
bool mu__boolexpr13;
  if (!(!((mu_k>=3 && mu_k<=3)))) mu__boolexpr13 = FALSE ;
  else {
  mu__boolexpr13 = (!((mu_int[mu_i].mu_messages[mu_j].mu_source) == (mu_k))) ; 
}
  if (!(mu__boolexpr13)) mu__boolexpr12 = FALSE ;
  else {
/*** begin multisetcount 14 declaration ***/
  int mu__intexpr14 = 0;
  {
  mu_1__type_7_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_net.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr14++;
	}
      if (mu_l == 10-1) break;
    }
  }
/*** end multisetcount 14 declaration ***/
  mu__boolexpr12 = ((mu__intexpr14) < (mu_NetworkSize)) ; 
}
    return mu__boolexpr12;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 0;
    static mu_1_AgentId mu_k;
    mu_k.unionassign(r % 3);
    r = r / 3;
    static mu_1__type_1_id mu_j;
    mu_j.value((r % 10) + 0);
    r = r / 10;
    static mu_1_IntruderId mu_i;
    mu_i.value((r % 1) + 3);
    r = r / 1;
    while (what_rule < 30 && mu_j.value()<10 )
      {
	if ( ( TRUE && mu_int[mu_i].mu_messages.in(mu_j) ) ) {
bool mu__boolexpr15;
bool mu__boolexpr16;
  if (!(!((mu_k>=3 && mu_k<=3)))) mu__boolexpr16 = FALSE ;
  else {
  mu__boolexpr16 = (!((mu_int[mu_i].mu_messages[mu_j].mu_source) == (mu_k))) ; 
}
  if (!(mu__boolexpr16)) mu__boolexpr15 = FALSE ;
  else {
/*** begin multisetcount 14 declaration ***/
  int mu__intexpr17 = 0;
  {
  mu_1__type_7_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_net.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr17++;
	}
      if (mu_l == 10-1) break;
    }
  }
/*** end multisetcount 14 declaration ***/
  mu__boolexpr15 = ((mu__intexpr17) < (mu_NetworkSize)) ; 
}
	      if (mu__boolexpr15) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 0;
    mu_k.unionassign(r % 3);
    r = r / 3;
    mu_j.value((r % 10) + 0);
    r = r / 10;
    mu_i.value((r % 1) + 3);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_AgentId mu_k;
    mu_k.unionassign(r % 3);
    r = r / 3;
    static mu_1__type_1_id mu_j;
    mu_j.value((r % 10) + 0);
    r = r / 10;
    static mu_1_IntruderId mu_i;
    mu_i.value((r % 1) + 3);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_outM("outM",0);

/*** Variable declaration ***/
mu_1_CValue mu_outCValue("outCValue",104);

/*** Variable declaration ***/
mu_1_EValue mu_outEValue("outEValue",128);

mu_outM.undefine();
switch ((int) mu_int[mu_i].mu_messages[mu_j].mu_mType) {
case mu_M_PublicKey:
mu_outM.mu_mType = mu_M_PublicKey;
mu_outM.mu_source = mu_i;
mu_outM.mu_dest = mu_k;
mu_outM.mu_publickey = mu_i;
mu_int[mu_i].mu_sent_pk[mu_k] = mu_true;
break;
case mu_M_CommitValue:
mu_outCValue.undefine();
mu_outCValue.mu_pk_send = mu_i;
mu_outCValue.mu_pk_recv = mu_k;
mu_outCValue.mu_n_send = mu_i;
mu_outM.mu_mType = mu_M_CommitValue;
mu_outM.mu_source = mu_i;
mu_outM.mu_dest = mu_k;
mu_outM.mu_cValue = mu_outCValue;
break;
case mu_M_Nonce:
mu_outM.mu_mType = mu_M_Nonce;
mu_outM.mu_source = mu_i;
mu_outM.mu_dest = mu_k;
mu_outM.mu_nonce = mu_i;
mu_int[mu_i].mu_sent_n[mu_k] = mu_true;
break;
case mu_M_ExchangeVerif:
mu_outEValue.undefine();
mu_outEValue.mu_pk_send = mu_i;
mu_outEValue.mu_pk_recv = mu_k;
mu_outEValue.mu_n_send = mu_i;
mu_outEValue.mu_n_recv = mu_k;
mu_outEValue.mu_r_recv = mu_k;
mu_outM.mu_mType = mu_M_ExchangeVerif;
mu_outM.mu_source = mu_i;
mu_outM.mu_dest = mu_k;
mu_outM.mu_eValue = mu_outEValue;
break;
}
mu_net.multisetadd(mu_outM);
  };

};
/******************** RuleBase1 ********************/
class RuleBase1
{
public:
  int Priority()
  {
    return 98;
  }
  char * Name(unsigned r)
  {
    static mu_1_AgentId mu_k;
    mu_k.unionassign(r % 3);
    r = r / 3;
    static mu_1__type_1_id mu_j;
    mu_j.value((r % 10) + 0);
    r = r / 10;
    static mu_1_IntruderId mu_i;
    mu_i.value((r % 1) + 3);
    r = r / 1;
    return tsprintf("intruder sends recorded message, k:%s, j:%s, i:%s", mu_k.Name(), mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_AgentId mu_k;
    mu_k.unionassign(r % 3);
    r = r / 3;
    static mu_1__type_1_id mu_j;
    mu_j.value((r % 10) + 0);
    r = r / 10;
    static mu_1_IntruderId mu_i;
    mu_i.value((r % 1) + 3);
    r = r / 1;
  if (!mu_int[mu_i].mu_messages.in(mu_j)) { return FALSE; }
bool mu__boolexpr18;
bool mu__boolexpr19;
  if (!(!((mu_k>=3 && mu_k<=3)))) mu__boolexpr19 = FALSE ;
  else {
  mu__boolexpr19 = (!((mu_int[mu_i].mu_messages[mu_j].mu_source) == (mu_k))) ; 
}
  if (!(mu__boolexpr19)) mu__boolexpr18 = FALSE ;
  else {
/*** begin multisetcount 13 declaration ***/
  int mu__intexpr20 = 0;
  {
  mu_1__type_7_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_net.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr20++;
	}
      if (mu_l == 10-1) break;
    }
  }
/*** end multisetcount 13 declaration ***/
  mu__boolexpr18 = ((mu__intexpr20) < (mu_NetworkSize)) ; 
}
    return mu__boolexpr18;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 30;
    static mu_1_AgentId mu_k;
    mu_k.unionassign(r % 3);
    r = r / 3;
    static mu_1__type_1_id mu_j;
    mu_j.value((r % 10) + 0);
    r = r / 10;
    static mu_1_IntruderId mu_i;
    mu_i.value((r % 1) + 3);
    r = r / 1;
    while (what_rule < 60 && mu_j.value()<10 )
      {
	if ( ( TRUE && mu_int[mu_i].mu_messages.in(mu_j) ) ) {
bool mu__boolexpr21;
bool mu__boolexpr22;
  if (!(!((mu_k>=3 && mu_k<=3)))) mu__boolexpr22 = FALSE ;
  else {
  mu__boolexpr22 = (!((mu_int[mu_i].mu_messages[mu_j].mu_source) == (mu_k))) ; 
}
  if (!(mu__boolexpr22)) mu__boolexpr21 = FALSE ;
  else {
/*** begin multisetcount 13 declaration ***/
  int mu__intexpr23 = 0;
  {
  mu_1__type_7_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_net.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr23++;
	}
      if (mu_l == 10-1) break;
    }
  }
/*** end multisetcount 13 declaration ***/
  mu__boolexpr21 = ((mu__intexpr23) < (mu_NetworkSize)) ; 
}
	      if (mu__boolexpr21) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 30;
    mu_k.unionassign(r % 3);
    r = r / 3;
    mu_j.value((r % 10) + 0);
    r = r / 10;
    mu_i.value((r % 1) + 3);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_AgentId mu_k;
    mu_k.unionassign(r % 3);
    r = r / 3;
    static mu_1__type_1_id mu_j;
    mu_j.value((r % 10) + 0);
    r = r / 10;
    static mu_1_IntruderId mu_i;
    mu_i.value((r % 1) + 3);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_outM("outM",0);

mu_outM.undefine();
mu_outM = mu_int[mu_i].mu_messages[mu_j];
mu_outM.mu_source = mu_i;
mu_outM.mu_dest = mu_k;
mu_net.multisetadd(mu_outM);
  };

};
/******************** RuleBase2 ********************/
class RuleBase2
{
public:
  int Priority()
  {
    return 98;
  }
  char * Name(unsigned r)
  {
    static mu_1_IntruderId mu_i;
    mu_i.value((r % 1) + 3);
    r = r / 1;
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    return tsprintf("intruder intercepts messages, i:%s, k:%s", mu_i.Name(), mu_k.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_IntruderId mu_i;
    mu_i.value((r % 1) + 3);
    r = r / 1;
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
  if (!mu_net.in(mu_k)) { return FALSE; }
    return !((mu_net[mu_k].mu_source>=3 && mu_net[mu_k].mu_source<=3));
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 60;
    static mu_1_IntruderId mu_i;
    mu_i.value((r % 1) + 3);
    r = r / 1;
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    while (what_rule < 70 && mu_k.value()<10 )
      {
	if ( ( TRUE && mu_net.in(mu_k) ) ) {
	      if (!((mu_net[mu_k].mu_source>=3 && mu_net[mu_k].mu_source<=3))) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 60;
    mu_i.value((r % 1) + 3);
    r = r / 1;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_IntruderId mu_i;
    mu_i.value((r % 1) + 3);
    r = r / 1;
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
/*** Variable declaration ***/
mu_1_Message mu_temp("temp",0);

{
  mu_1_Message& mu_msg = mu_net[mu_k];
{
  mu_1__type_1& mu_messages = mu_int[mu_i].mu_messages;
mu_temp = mu_msg;
/*** begin multisetcount 12 declaration ***/
  int mu__intexpr24 = 0;
  {
  mu_1__type_1_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_messages.valid[(int)mu_l].value())
	{
bool mu__boolexpr25;
bool mu__boolexpr26;
bool mu__boolexpr27;
bool mu__boolexpr28;
bool mu__boolexpr29;
bool mu__boolexpr30;
  if (!((mu_messages[mu_l].mu_mType) == (mu_temp.mu_mType))) mu__boolexpr30 = FALSE ;
  else {
  mu__boolexpr30 = ((mu_messages[mu_l].mu_source) == (mu_temp.mu_source)) ; 
}
  if (!(mu__boolexpr30)) mu__boolexpr29 = FALSE ;
  else {
  mu__boolexpr29 = ((mu_messages[mu_l].mu_dest) == (mu_temp.mu_dest)) ; 
}
  if (!(mu__boolexpr29)) mu__boolexpr28 = FALSE ;
  else {
bool mu__boolexpr31;
  if (!((mu_messages[mu_l].mu_mType) == (mu_M_PublicKey))) mu__boolexpr31 = TRUE ;
  else {
  mu__boolexpr31 = ((mu_messages[mu_l].mu_publickey) == (mu_temp.mu_publickey)) ; 
}
  mu__boolexpr28 = (mu__boolexpr31) ; 
}
  if (!(mu__boolexpr28)) mu__boolexpr27 = FALSE ;
  else {
bool mu__boolexpr32;
  if (!((mu_messages[mu_l].mu_mType) == (mu_M_Nonce))) mu__boolexpr32 = TRUE ;
  else {
  mu__boolexpr32 = ((mu_messages[mu_l].mu_nonce) == (mu_temp.mu_nonce)) ; 
}
  mu__boolexpr27 = (mu__boolexpr32) ; 
}
  if (!(mu__boolexpr27)) mu__boolexpr26 = FALSE ;
  else {
bool mu__boolexpr33;
  if (!((mu_messages[mu_l].mu_mType) == (mu_M_CommitValue))) mu__boolexpr33 = TRUE ;
  else {
bool mu__boolexpr34;
bool mu__boolexpr35;
  if (!((mu_messages[mu_l].mu_cValue.mu_pk_send) == (mu_temp.mu_cValue.mu_pk_send))) mu__boolexpr35 = FALSE ;
  else {
  mu__boolexpr35 = ((mu_messages[mu_l].mu_cValue.mu_pk_send) == (mu_temp.mu_cValue.mu_pk_recv)) ; 
}
  if (!(mu__boolexpr35)) mu__boolexpr34 = FALSE ;
  else {
  mu__boolexpr34 = ((mu_messages[mu_l].mu_cValue.mu_n_send) == (mu_temp.mu_cValue.mu_n_send)) ; 
}
  mu__boolexpr33 = (mu__boolexpr34) ; 
}
  mu__boolexpr26 = (mu__boolexpr33) ; 
}
  if (!(mu__boolexpr26)) mu__boolexpr25 = FALSE ;
  else {
bool mu__boolexpr36;
  if (!((mu_messages[mu_l].mu_mType) == (mu_M_ExchangeVerif))) mu__boolexpr36 = TRUE ;
  else {
bool mu__boolexpr37;
bool mu__boolexpr38;
bool mu__boolexpr39;
bool mu__boolexpr40;
  if (!((mu_messages[mu_l].mu_eValue.mu_pk_send) == (mu_temp.mu_eValue.mu_pk_send))) mu__boolexpr40 = FALSE ;
  else {
  mu__boolexpr40 = ((mu_messages[mu_l].mu_eValue.mu_pk_recv) == (mu_temp.mu_eValue.mu_pk_recv)) ; 
}
  if (!(mu__boolexpr40)) mu__boolexpr39 = FALSE ;
  else {
  mu__boolexpr39 = ((mu_messages[mu_l].mu_eValue.mu_n_send) == (mu_temp.mu_eValue.mu_n_send)) ; 
}
  if (!(mu__boolexpr39)) mu__boolexpr38 = FALSE ;
  else {
  mu__boolexpr38 = ((mu_messages[mu_l].mu_eValue.mu_n_recv) == (mu_temp.mu_eValue.mu_n_recv)) ; 
}
  if (!(mu__boolexpr38)) mu__boolexpr37 = FALSE ;
  else {
  mu__boolexpr37 = ((mu_messages[mu_l].mu_eValue.mu_r_recv) == (mu_temp.mu_eValue.mu_r_recv)) ; 
}
  mu__boolexpr36 = (mu__boolexpr37) ; 
}
  mu__boolexpr25 = (mu__boolexpr36) ; 
}
	  if ( mu__boolexpr25 ) mu__intexpr24++;
	}
      if (mu_l == 10-1) break;
    }
  }
/*** end multisetcount 12 declaration ***/
if ( (mu__intexpr24) == (0) )
{
mu_int[mu_i].mu_messages.multisetadd(mu_temp);
if ( (mu_temp.mu_mType) == (mu_M_PublicKey) )
{
mu_int[mu_i].mu_pk[mu_temp.mu_source] = mu_true;
}
if ( (mu_temp.mu_mType) == (mu_M_Nonce) )
{
mu_int[mu_i].mu_nonce[mu_temp.mu_source] = mu_true;
}
}
}
}
mu_net.multisetremove(mu_k);
  };

};
/******************** RuleBase3 ********************/
class RuleBase3
{
public:
  int Priority()
  {
    return 99;
  }
  char * Name(unsigned r)
  {
    static mu_1__type_0_id mu_k;
    mu_k.value((r % 1) + 0);
    r = r / 1;
    static mu_1_ResponderId mu_r;
    mu_r.value((r % 1) + 2);
    r = r / 1;
    static mu_1_IntruderId mu_a;
    mu_a.value((r % 1) + 3);
    r = r / 1;
    return tsprintf("responder and intruder check verification, k:%s, r:%s, a:%s", mu_k.Name(), mu_r.Name(), mu_a.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1__type_0_id mu_k;
    mu_k.value((r % 1) + 0);
    r = r / 1;
    static mu_1_ResponderId mu_r;
    mu_r.value((r % 1) + 2);
    r = r / 1;
    static mu_1_IntruderId mu_a;
    mu_a.value((r % 1) + 3);
    r = r / 1;
  if (!mu_res[mu_r].mu_pairings.in(mu_k)) { return FALSE; }
bool mu__boolexpr41;
/*** begin multisetcount 11 declaration ***/
  int mu__intexpr42 = 0;
  {
  mu_1__type_11_id mu_g;
  for (mu_g = 0; ; mu_g=mu_g+1)
    {
      if (mu_gpr.valid[(int)mu_g].value())
	{
bool mu__boolexpr43;
  if (!((mu_gpr[mu_g].mu_initiator) == (mu_a))) mu__boolexpr43 = FALSE ;
  else {
  mu__boolexpr43 = ((mu_gpr[mu_g].mu_responder) == (mu_r)) ; 
}
	  if ( mu__boolexpr43 ) mu__intexpr42++;
	}
      if (mu_g == 10-1) break;
    }
  }
/*** end multisetcount 11 declaration ***/
  if (!((mu__intexpr42) >= (1))) mu__boolexpr41 = FALSE ;
  else {
  mu__boolexpr41 = ((mu_res[mu_r].mu_pairings[mu_k].mu_state) == (mu_R_NC_VERIF_SET)) ; 
}
    return mu__boolexpr41;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 70;
    static mu_1__type_0_id mu_k;
    mu_k.value((r % 1) + 0);
    r = r / 1;
    static mu_1_ResponderId mu_r;
    mu_r.value((r % 1) + 2);
    r = r / 1;
    static mu_1_IntruderId mu_a;
    mu_a.value((r % 1) + 3);
    r = r / 1;
    while (what_rule < 71 && mu_k.value()<1 )
      {
	if ( ( TRUE && mu_res[mu_r].mu_pairings.in(mu_k) ) ) {
bool mu__boolexpr44;
/*** begin multisetcount 11 declaration ***/
  int mu__intexpr45 = 0;
  {
  mu_1__type_11_id mu_g;
  for (mu_g = 0; ; mu_g=mu_g+1)
    {
      if (mu_gpr.valid[(int)mu_g].value())
	{
bool mu__boolexpr46;
  if (!((mu_gpr[mu_g].mu_initiator) == (mu_a))) mu__boolexpr46 = FALSE ;
  else {
  mu__boolexpr46 = ((mu_gpr[mu_g].mu_responder) == (mu_r)) ; 
}
	  if ( mu__boolexpr46 ) mu__intexpr45++;
	}
      if (mu_g == 10-1) break;
    }
  }
/*** end multisetcount 11 declaration ***/
  if (!((mu__intexpr45) >= (1))) mu__boolexpr44 = FALSE ;
  else {
  mu__boolexpr44 = ((mu_res[mu_r].mu_pairings[mu_k].mu_state) == (mu_R_NC_VERIF_SET)) ; 
}
	      if (mu__boolexpr44) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 70;
    mu_k.value((r % 1) + 0);
    r = r / 1;
    mu_r.value((r % 1) + 2);
    r = r / 1;
    mu_a.value((r % 1) + 3);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1__type_0_id mu_k;
    mu_k.value((r % 1) + 0);
    r = r / 1;
    static mu_1_ResponderId mu_r;
    mu_r.value((r % 1) + 2);
    r = r / 1;
    static mu_1_IntruderId mu_a;
    mu_a.value((r % 1) + 3);
    r = r / 1;
bool mu__boolexpr47;
bool mu__boolexpr48;
bool mu__boolexpr49;
  if (!(mu_int[mu_a].mu_pk[mu_r])) mu__boolexpr49 = FALSE ;
  else {
  mu__boolexpr49 = (mu_int[mu_a].mu_sent_pk[mu_r]) ; 
}
  if (!(mu__boolexpr49)) mu__boolexpr48 = FALSE ;
  else {
  mu__boolexpr48 = (mu_int[mu_a].mu_nonce[mu_r]) ; 
}
  if (!(mu__boolexpr48)) mu__boolexpr47 = FALSE ;
  else {
  mu__boolexpr47 = (mu_int[mu_a].mu_sent_n[mu_r]) ; 
}
if ( mu__boolexpr47 )
{
mu_res[mu_r].mu_pairings[mu_k].mu_state = mu_R_PHASETWO_DONE;
}
  };

};
/******************** RuleBase4 ********************/
class RuleBase4
{
public:
  int Priority()
  {
    return 90;
  }
  char * Name(unsigned r)
  {
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    static mu_1_IntruderId mu_a;
    mu_a.value((r % 1) + 3);
    r = r / 1;
    return tsprintf("initiator and intruder check verification, i:%s, a:%s", mu_i.Name(), mu_a.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    static mu_1_IntruderId mu_a;
    mu_a.value((r % 1) + 3);
    r = r / 1;
bool mu__boolexpr50;
/*** begin multisetcount 10 declaration ***/
  int mu__intexpr51 = 0;
  {
  mu_1__type_11_id mu_g;
  for (mu_g = 0; ; mu_g=mu_g+1)
    {
      if (mu_gpr.valid[(int)mu_g].value())
	{
bool mu__boolexpr52;
  if (!((mu_gpr[mu_g].mu_initiator) == (mu_i))) mu__boolexpr52 = FALSE ;
  else {
  mu__boolexpr52 = ((mu_gpr[mu_g].mu_responder) == (mu_a)) ; 
}
	  if ( mu__boolexpr52 ) mu__intexpr51++;
	}
      if (mu_g == 10-1) break;
    }
  }
/*** end multisetcount 10 declaration ***/
  if (!((mu__intexpr51) >= (1))) mu__boolexpr50 = FALSE ;
  else {
  mu__boolexpr50 = ((mu_ini[mu_i].mu_state) == (mu_I_NC_VERIF_SET)) ; 
}
    return mu__boolexpr50;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 71;
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    static mu_1_IntruderId mu_a;
    mu_a.value((r % 1) + 3);
    r = r / 1;
    while (what_rule < 72 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr53;
/*** begin multisetcount 10 declaration ***/
  int mu__intexpr54 = 0;
  {
  mu_1__type_11_id mu_g;
  for (mu_g = 0; ; mu_g=mu_g+1)
    {
      if (mu_gpr.valid[(int)mu_g].value())
	{
bool mu__boolexpr55;
  if (!((mu_gpr[mu_g].mu_initiator) == (mu_i))) mu__boolexpr55 = FALSE ;
  else {
  mu__boolexpr55 = ((mu_gpr[mu_g].mu_responder) == (mu_a)) ; 
}
	  if ( mu__boolexpr55 ) mu__intexpr54++;
	}
      if (mu_g == 10-1) break;
    }
  }
/*** end multisetcount 10 declaration ***/
  if (!((mu__intexpr54) >= (1))) mu__boolexpr53 = FALSE ;
  else {
  mu__boolexpr53 = ((mu_ini[mu_i].mu_state) == (mu_I_NC_VERIF_SET)) ; 
}
	      if (mu__boolexpr53) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 71;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    mu_a.value((r % 1) + 3);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    static mu_1_IntruderId mu_a;
    mu_a.value((r % 1) + 3);
    r = r / 1;
bool mu__boolexpr56;
bool mu__boolexpr57;
bool mu__boolexpr58;
  if (!(mu_int[mu_a].mu_pk[mu_i])) mu__boolexpr58 = FALSE ;
  else {
  mu__boolexpr58 = (mu_int[mu_a].mu_sent_pk[mu_i]) ; 
}
  if (!(mu__boolexpr58)) mu__boolexpr57 = FALSE ;
  else {
  mu__boolexpr57 = (mu_int[mu_a].mu_nonce[mu_i]) ; 
}
  if (!(mu__boolexpr57)) mu__boolexpr56 = FALSE ;
  else {
  mu__boolexpr56 = (mu_int[mu_a].mu_sent_n[mu_i]) ; 
}
if ( mu__boolexpr56 )
{
mu_ini[mu_i].mu_state = mu_I_PHASETWO_DONE;
}
  };

};
/******************** RuleBase5 ********************/
class RuleBase5
{
public:
  int Priority()
  {
    return 90;
  }
  char * Name(unsigned r)
  {
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    static mu_1__type_0_id mu_k;
    mu_k.value((r % 1) + 0);
    r = r / 1;
    static mu_1_ResponderId mu_r;
    mu_r.value((r % 1) + 2);
    r = r / 1;
    return tsprintf("responder and initiator check verification, i:%s, k:%s, r:%s", mu_i.Name(), mu_k.Name(), mu_r.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    static mu_1__type_0_id mu_k;
    mu_k.value((r % 1) + 0);
    r = r / 1;
    static mu_1_ResponderId mu_r;
    mu_r.value((r % 1) + 2);
    r = r / 1;
  if (!mu_res[mu_r].mu_pairings.in(mu_k)) { return FALSE; }
bool mu__boolexpr59;
bool mu__boolexpr60;
/*** begin multisetcount 9 declaration ***/
  int mu__intexpr61 = 0;
  {
  mu_1__type_11_id mu_g;
  for (mu_g = 0; ; mu_g=mu_g+1)
    {
      if (mu_gpr.valid[(int)mu_g].value())
	{
bool mu__boolexpr62;
  if (!((mu_gpr[mu_g].mu_initiator) == (mu_i))) mu__boolexpr62 = FALSE ;
  else {
  mu__boolexpr62 = ((mu_gpr[mu_g].mu_responder) == (mu_r)) ; 
}
	  if ( mu__boolexpr62 ) mu__intexpr61++;
	}
      if (mu_g == 10-1) break;
    }
  }
/*** end multisetcount 9 declaration ***/
  if (!((mu__intexpr61) > (0))) mu__boolexpr60 = FALSE ;
  else {
  mu__boolexpr60 = ((mu_ini[mu_i].mu_state) == (mu_I_NC_VERIF_SET)) ; 
}
  if (!(mu__boolexpr60)) mu__boolexpr59 = FALSE ;
  else {
  mu__boolexpr59 = ((mu_res[mu_r].mu_pairings[mu_k].mu_state) == (mu_R_NC_VERIF_SET)) ; 
}
    return mu__boolexpr59;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 72;
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    static mu_1__type_0_id mu_k;
    mu_k.value((r % 1) + 0);
    r = r / 1;
    static mu_1_ResponderId mu_r;
    mu_r.value((r % 1) + 2);
    r = r / 1;
    while (what_rule < 73 && mu_k.value()<1 )
      {
	if ( ( TRUE && mu_res[mu_r].mu_pairings.in(mu_k) ) ) {
bool mu__boolexpr63;
bool mu__boolexpr64;
/*** begin multisetcount 9 declaration ***/
  int mu__intexpr65 = 0;
  {
  mu_1__type_11_id mu_g;
  for (mu_g = 0; ; mu_g=mu_g+1)
    {
      if (mu_gpr.valid[(int)mu_g].value())
	{
bool mu__boolexpr66;
  if (!((mu_gpr[mu_g].mu_initiator) == (mu_i))) mu__boolexpr66 = FALSE ;
  else {
  mu__boolexpr66 = ((mu_gpr[mu_g].mu_responder) == (mu_r)) ; 
}
	  if ( mu__boolexpr66 ) mu__intexpr65++;
	}
      if (mu_g == 10-1) break;
    }
  }
/*** end multisetcount 9 declaration ***/
  if (!((mu__intexpr65) > (0))) mu__boolexpr64 = FALSE ;
  else {
  mu__boolexpr64 = ((mu_ini[mu_i].mu_state) == (mu_I_NC_VERIF_SET)) ; 
}
  if (!(mu__boolexpr64)) mu__boolexpr63 = FALSE ;
  else {
  mu__boolexpr63 = ((mu_res[mu_r].mu_pairings[mu_k].mu_state) == (mu_R_NC_VERIF_SET)) ; 
}
	      if (mu__boolexpr63) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 72;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    mu_k.value((r % 1) + 0);
    r = r / 1;
    mu_r.value((r % 1) + 2);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    static mu_1__type_0_id mu_k;
    mu_k.value((r % 1) + 0);
    r = r / 1;
    static mu_1_ResponderId mu_r;
    mu_r.value((r % 1) + 2);
    r = r / 1;
{
  mu_1_VValue& mu_r_vValue = mu_res[mu_r].mu_pairings[mu_k].mu_vValue;
{
  mu_1_VValue& mu_i_vValue = mu_ini[mu_i].mu_vValue;
bool mu__boolexpr67;
bool mu__boolexpr68;
bool mu__boolexpr69;
  if (!((mu_r_vValue.mu_pk_initiator) == (mu_i_vValue.mu_pk_initiator))) mu__boolexpr69 = FALSE ;
  else {
  mu__boolexpr69 = ((mu_r_vValue.mu_pk_responder) == (mu_i_vValue.mu_pk_responder)) ; 
}
  if (!(mu__boolexpr69)) mu__boolexpr68 = FALSE ;
  else {
  mu__boolexpr68 = ((mu_r_vValue.mu_n_initiator) == (mu_i_vValue.mu_n_initiator)) ; 
}
  if (!(mu__boolexpr68)) mu__boolexpr67 = FALSE ;
  else {
  mu__boolexpr67 = ((mu_r_vValue.mu_n_responder) == (mu_i_vValue.mu_n_responder)) ; 
}
if ( mu__boolexpr67 )
{
mu_res[mu_r].mu_pairings[mu_k].mu_state = mu_R_PHASETWO_DONE;
mu_ini[mu_i].mu_state = mu_I_PHASETWO_DONE;
}
}
}
  };

};
/******************** RuleBase6 ********************/
class RuleBase6
{
public:
  int Priority()
  {
    return 96;
  }
  char * Name(unsigned r)
  {
    static mu_1__type_0_id mu_i;
    mu_i.value((r % 1) + 0);
    r = r / 1;
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    static mu_1_ResponderId mu_j;
    mu_j.value((r % 1) + 2);
    r = r / 1;
    return tsprintf("responder responds to exchange verification (step 10b/11), i:%s, k:%s, j:%s", mu_i.Name(), mu_k.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1__type_0_id mu_i;
    mu_i.value((r % 1) + 0);
    r = r / 1;
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    static mu_1_ResponderId mu_j;
    mu_j.value((r % 1) + 2);
    r = r / 1;
  if (!mu_res[mu_j].mu_pairings.in(mu_i)) { return FALSE; }
  if (!mu_net.in(mu_k)) { return FALSE; }
bool mu__boolexpr70;
bool mu__boolexpr71;
  if (!((mu_net[mu_k].mu_dest) == (mu_j))) mu__boolexpr71 = FALSE ;
  else {
  mu__boolexpr71 = ((mu_res[mu_j].mu_pairings[mu_i].mu_state) == (mu_R_PHASETWO_DONE)) ; 
}
  if (!(mu__boolexpr71)) mu__boolexpr70 = FALSE ;
  else {
/*** begin multisetcount 8 declaration ***/
  int mu__intexpr72 = 0;
  {
  mu_1__type_7_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_net.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr72++;
	}
      if (mu_l == 10-1) break;
    }
  }
/*** end multisetcount 8 declaration ***/
  mu__boolexpr70 = ((mu__intexpr72) <= (mu_NetworkSize)) ; 
}
    return mu__boolexpr70;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 73;
    static mu_1__type_0_id mu_i;
    mu_i.value((r % 1) + 0);
    r = r / 1;
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    static mu_1_ResponderId mu_j;
    mu_j.value((r % 1) + 2);
    r = r / 1;
    while (what_rule < 83 && mu_i.value()<1 && mu_k.value()<10 )
      {
	if ( ( TRUE && mu_res[mu_j].mu_pairings.in(mu_i)&& mu_net.in(mu_k) ) ) {
bool mu__boolexpr73;
bool mu__boolexpr74;
  if (!((mu_net[mu_k].mu_dest) == (mu_j))) mu__boolexpr74 = FALSE ;
  else {
  mu__boolexpr74 = ((mu_res[mu_j].mu_pairings[mu_i].mu_state) == (mu_R_PHASETWO_DONE)) ; 
}
  if (!(mu__boolexpr74)) mu__boolexpr73 = FALSE ;
  else {
/*** begin multisetcount 8 declaration ***/
  int mu__intexpr75 = 0;
  {
  mu_1__type_7_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_net.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr75++;
	}
      if (mu_l == 10-1) break;
    }
  }
/*** end multisetcount 8 declaration ***/
  mu__boolexpr73 = ((mu__intexpr75) <= (mu_NetworkSize)) ; 
}
	      if (mu__boolexpr73) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 73;
    mu_i.value((r % 1) + 0);
    r = r / 1;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    mu_j.value((r % 1) + 2);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1__type_0_id mu_i;
    mu_i.value((r % 1) + 0);
    r = r / 1;
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    static mu_1_ResponderId mu_j;
    mu_j.value((r % 1) + 2);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_inM("inM",0);

/*** Variable declaration ***/
mu_1_Message mu_outM("outM",104);

/*** Variable declaration ***/
mu_1_EValue mu_outEValue("outEValue",208);

/*** Variable declaration ***/
mu_1_Pairing mu_pairing("pairing",248);

mu_inM = mu_net[mu_k];
mu_net.multisetremove(mu_k);
{
  mu_1_Pairing& mu_pairing = mu_res[mu_j].mu_pairings[mu_i];
if ( (mu_inM.mu_mType) == (mu_M_ExchangeVerif) )
{
bool mu__boolexpr76;
bool mu__boolexpr77;
bool mu__boolexpr78;
bool mu__boolexpr79;
  if (!((mu_inM.mu_eValue.mu_pk_send) == (mu_pairing.mu_initiator_pk))) mu__boolexpr79 = FALSE ;
  else {
  mu__boolexpr79 = ((mu_inM.mu_eValue.mu_pk_recv) == (mu_j)) ; 
}
  if (!(mu__boolexpr79)) mu__boolexpr78 = FALSE ;
  else {
  mu__boolexpr78 = ((mu_inM.mu_eValue.mu_n_send) == (mu_pairing.mu_initiator_n)) ; 
}
  if (!(mu__boolexpr78)) mu__boolexpr77 = FALSE ;
  else {
  mu__boolexpr77 = ((mu_inM.mu_eValue.mu_n_recv) == (mu_j)) ; 
}
  if (!(mu__boolexpr77)) mu__boolexpr76 = FALSE ;
  else {
  mu__boolexpr76 = ((mu_inM.mu_eValue.mu_r_recv) == (mu_j)) ; 
}
if ( mu__boolexpr76 )
{
mu_outEValue.undefine();
mu_outEValue.mu_pk_send = mu_j;
mu_outEValue.mu_pk_recv = mu_pairing.mu_initiator_pk;
mu_outEValue.mu_n_send = mu_j;
mu_outEValue.mu_n_recv = mu_pairing.mu_initiator_n;
mu_outEValue.mu_r_recv = mu_pairing.mu_initiator_r;
mu_outM.undefine();
mu_outM.mu_mType = mu_M_ExchangeVerif;
mu_outM.mu_source = mu_j;
mu_outM.mu_dest = mu_pairing.mu_initiator;
mu_outM.mu_eValue = mu_outEValue;
mu_net.multisetadd(mu_outM);
mu_res[mu_j].mu_pairings[mu_i].mu_state = mu_R_PAIRED;
mu_res[mu_j].mu_pairings[mu_i].mu_linkKey = mu_true;
if ( (mu_res[mu_j].mu_pairings[mu_i].mu_initiator>=3 && mu_res[mu_j].mu_pairings[mu_i].mu_initiator<=3) )
{
{
  mu_1_AgentId& mu_a = mu_res[mu_j].mu_pairings[mu_i].mu_initiator;
bool mu__boolexpr80;
bool mu__boolexpr81;
bool mu__boolexpr82;
  if (!(mu_int[mu_a].mu_pk[mu_j])) mu__boolexpr82 = FALSE ;
  else {
  mu__boolexpr82 = (mu_int[mu_a].mu_sent_pk[mu_j]) ; 
}
  if (!(mu__boolexpr82)) mu__boolexpr81 = FALSE ;
  else {
  mu__boolexpr81 = (mu_int[mu_a].mu_nonce[mu_j]) ; 
}
  if (!(mu__boolexpr81)) mu__boolexpr80 = FALSE ;
  else {
  mu__boolexpr80 = (mu_int[mu_a].mu_sent_n[mu_j]) ; 
}
if ( mu__boolexpr80 )
{
mu_int[mu_a].mu_linkKeys[mu_j] = mu_true;
}
}
}
}
}
}
  };

};
/******************** RuleBase7 ********************/
class RuleBase7
{
public:
  int Priority()
  {
    return 97;
  }
  char * Name(unsigned r)
  {
    static mu_1__type_0_id mu_i;
    mu_i.value((r % 1) + 0);
    r = r / 1;
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    static mu_1_ResponderId mu_j;
    mu_j.value((r % 1) + 2);
    r = r / 1;
    return tsprintf("responder gets nonce from and sends nonce to initiator (step 6), i:%s, k:%s, j:%s", mu_i.Name(), mu_k.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1__type_0_id mu_i;
    mu_i.value((r % 1) + 0);
    r = r / 1;
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    static mu_1_ResponderId mu_j;
    mu_j.value((r % 1) + 2);
    r = r / 1;
  if (!mu_res[mu_j].mu_pairings.in(mu_i)) { return FALSE; }
  if (!mu_net.in(mu_k)) { return FALSE; }
bool mu__boolexpr83;
bool mu__boolexpr84;
bool mu__boolexpr85;
  if (!(1)) mu__boolexpr85 = FALSE ;
  else {
  mu__boolexpr85 = ((mu_res[mu_j].mu_pairings[mu_i].mu_state) == (mu_R_WAIT_NONCE)) ; 
}
  if (!(mu__boolexpr85)) mu__boolexpr84 = FALSE ;
  else {
  mu__boolexpr84 = ((mu_net[mu_k].mu_dest) == (mu_j)) ; 
}
  if (!(mu__boolexpr84)) mu__boolexpr83 = FALSE ;
  else {
/*** begin multisetcount 7 declaration ***/
  int mu__intexpr86 = 0;
  {
  mu_1__type_7_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_net.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr86++;
	}
      if (mu_l == 10-1) break;
    }
  }
/*** end multisetcount 7 declaration ***/
  mu__boolexpr83 = ((mu__intexpr86) <= (mu_NetworkSize)) ; 
}
    return mu__boolexpr83;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 83;
    static mu_1__type_0_id mu_i;
    mu_i.value((r % 1) + 0);
    r = r / 1;
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    static mu_1_ResponderId mu_j;
    mu_j.value((r % 1) + 2);
    r = r / 1;
    while (what_rule < 93 && mu_i.value()<1 && mu_k.value()<10 )
      {
	if ( ( TRUE && mu_res[mu_j].mu_pairings.in(mu_i)&& mu_net.in(mu_k) ) ) {
bool mu__boolexpr87;
bool mu__boolexpr88;
bool mu__boolexpr89;
  if (!(1)) mu__boolexpr89 = FALSE ;
  else {
  mu__boolexpr89 = ((mu_res[mu_j].mu_pairings[mu_i].mu_state) == (mu_R_WAIT_NONCE)) ; 
}
  if (!(mu__boolexpr89)) mu__boolexpr88 = FALSE ;
  else {
  mu__boolexpr88 = ((mu_net[mu_k].mu_dest) == (mu_j)) ; 
}
  if (!(mu__boolexpr88)) mu__boolexpr87 = FALSE ;
  else {
/*** begin multisetcount 7 declaration ***/
  int mu__intexpr90 = 0;
  {
  mu_1__type_7_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_net.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr90++;
	}
      if (mu_l == 10-1) break;
    }
  }
/*** end multisetcount 7 declaration ***/
  mu__boolexpr87 = ((mu__intexpr90) <= (mu_NetworkSize)) ; 
}
	      if (mu__boolexpr87) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 83;
    mu_i.value((r % 1) + 0);
    r = r / 1;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    mu_j.value((r % 1) + 2);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1__type_0_id mu_i;
    mu_i.value((r % 1) + 0);
    r = r / 1;
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    static mu_1_ResponderId mu_j;
    mu_j.value((r % 1) + 2);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_inM("inM",0);

/*** Variable declaration ***/
mu_1_Message mu_outM("outM",104);

/*** Variable declaration ***/
mu_1_CValue mu_outCValue("outCValue",208);

/*** Variable declaration ***/
mu_1_VValue mu_newVValue("newVValue",232);

mu_inM = mu_net[mu_k];
mu_net.multisetremove(mu_k);
if ( (mu_inM.mu_mType) == (mu_M_Nonce) )
{
mu_res[mu_j].mu_pairings[mu_i].mu_initiator_n = mu_inM.mu_nonce;
mu_outM.undefine();
mu_outM.mu_mType = mu_M_Nonce;
mu_outM.mu_source = mu_j;
mu_outM.mu_dest = mu_res[mu_j].mu_pairings[mu_i].mu_initiator;
mu_outM.mu_nonce = mu_j;
mu_net.multisetadd(mu_outM);
if ( 0 )
{
mu_res[mu_j].mu_pairings[mu_i].mu_state = mu_R_PHASETWO_DONE;
}
if ( 1 )
{
mu_newVValue.undefine();
mu_newVValue.mu_pk_initiator = mu_res[mu_j].mu_pairings[mu_i].mu_initiator_pk;
mu_newVValue.mu_pk_responder = mu_j;
mu_newVValue.mu_n_initiator = mu_res[mu_j].mu_pairings[mu_i].mu_initiator_pk;
mu_newVValue.mu_n_responder = mu_j;
mu_res[mu_j].mu_pairings[mu_i].mu_vValue = mu_newVValue;
mu_res[mu_j].mu_pairings[mu_i].mu_state = mu_R_NC_VERIF_SET;
}
}
  };

};
/******************** RuleBase8 ********************/
class RuleBase8
{
public:
  int Priority()
  {
    return 98;
  }
  char * Name(unsigned r)
  {
    static mu_1__type_0_id mu_i;
    mu_i.value((r % 1) + 0);
    r = r / 1;
    static mu_1_ResponderId mu_j;
    mu_j.value((r % 1) + 2);
    r = r / 1;
    return tsprintf("responder sends commitment value to initiator (step 4), i:%s, j:%s", mu_i.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1__type_0_id mu_i;
    mu_i.value((r % 1) + 0);
    r = r / 1;
    static mu_1_ResponderId mu_j;
    mu_j.value((r % 1) + 2);
    r = r / 1;
  if (!mu_res[mu_j].mu_pairings.in(mu_i)) { return FALSE; }
bool mu__boolexpr91;
bool mu__boolexpr92;
  if (!(1)) mu__boolexpr92 = FALSE ;
  else {
  mu__boolexpr92 = ((mu_res[mu_j].mu_pairings[mu_i].mu_state) == (mu_R_PHASEONE_DONE)) ; 
}
  if (!(mu__boolexpr92)) mu__boolexpr91 = FALSE ;
  else {
/*** begin multisetcount 6 declaration ***/
  int mu__intexpr93 = 0;
  {
  mu_1__type_7_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_net.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr93++;
	}
      if (mu_l == 10-1) break;
    }
  }
/*** end multisetcount 6 declaration ***/
  mu__boolexpr91 = ((mu__intexpr93) < (mu_NetworkSize)) ; 
}
    return mu__boolexpr91;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 93;
    static mu_1__type_0_id mu_i;
    mu_i.value((r % 1) + 0);
    r = r / 1;
    static mu_1_ResponderId mu_j;
    mu_j.value((r % 1) + 2);
    r = r / 1;
    while (what_rule < 94 && mu_i.value()<1 )
      {
	if ( ( TRUE && mu_res[mu_j].mu_pairings.in(mu_i) ) ) {
bool mu__boolexpr94;
bool mu__boolexpr95;
  if (!(1)) mu__boolexpr95 = FALSE ;
  else {
  mu__boolexpr95 = ((mu_res[mu_j].mu_pairings[mu_i].mu_state) == (mu_R_PHASEONE_DONE)) ; 
}
  if (!(mu__boolexpr95)) mu__boolexpr94 = FALSE ;
  else {
/*** begin multisetcount 6 declaration ***/
  int mu__intexpr96 = 0;
  {
  mu_1__type_7_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_net.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr96++;
	}
      if (mu_l == 10-1) break;
    }
  }
/*** end multisetcount 6 declaration ***/
  mu__boolexpr94 = ((mu__intexpr96) < (mu_NetworkSize)) ; 
}
	      if (mu__boolexpr94) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 93;
    mu_i.value((r % 1) + 0);
    r = r / 1;
    mu_j.value((r % 1) + 2);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1__type_0_id mu_i;
    mu_i.value((r % 1) + 0);
    r = r / 1;
    static mu_1_ResponderId mu_j;
    mu_j.value((r % 1) + 2);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_outM("outM",0);

/*** Variable declaration ***/
mu_1_CValue mu_outCValue("outCValue",104);

mu_outCValue.undefine();
mu_outCValue.mu_pk_send = mu_j;
mu_outCValue.mu_pk_recv = mu_res[mu_j].mu_pairings[mu_i].mu_initiator_pk;
mu_outCValue.mu_n_send = mu_j;
mu_outM.undefine();
mu_outM.mu_mType = mu_M_CommitValue;
mu_outM.mu_source = mu_j;
mu_outM.mu_dest = mu_res[mu_j].mu_pairings[mu_i].mu_initiator;
mu_outM.mu_cValue = mu_outCValue;
mu_net.multisetadd(mu_outM);
mu_res[mu_j].mu_pairings[mu_i].mu_state = mu_R_WAIT_NONCE;
mu_res[mu_j].mu_pairings[mu_i].mu_initiator_r = mu_res[mu_j].mu_pairings[mu_i].mu_initiator;
  };

};
/******************** RuleBase9 ********************/
class RuleBase9
{
public:
  int Priority()
  {
    return 99;
  }
  char * Name(unsigned r)
  {
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    static mu_1_ResponderId mu_j;
    mu_j.value((r % 1) + 2);
    r = r / 1;
    return tsprintf("responder reacts to public key and sends back pkb (step 1b), k:%s, j:%s", mu_k.Name(), mu_j.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    static mu_1_ResponderId mu_j;
    mu_j.value((r % 1) + 2);
    r = r / 1;
  if (!mu_net.in(mu_k)) { return FALSE; }
bool mu__boolexpr97;
bool mu__boolexpr98;
bool mu__boolexpr99;
  if (!((mu_net[mu_k].mu_dest) == (mu_j))) mu__boolexpr99 = FALSE ;
  else {
/*** begin multisetcount 2 declaration ***/
  int mu__intexpr100 = 0;
  {
  mu_1__type_0_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_res[mu_j].mu_pairings.valid[(int)mu_l].value())
	{
	  if ( (mu_res[mu_j].mu_pairings[mu_l].mu_initiator) == (mu_net[mu_k].mu_source) ) mu__intexpr100++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 2 declaration ***/
  mu__boolexpr99 = ((mu__intexpr100) == (0)) ; 
}
  if (!(mu__boolexpr99)) mu__boolexpr98 = FALSE ;
  else {
/*** begin multisetcount 3 declaration ***/
  int mu__intexpr101 = 0;
  {
  mu_1__type_0_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_res[mu_j].mu_pairings.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr101++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 3 declaration ***/
  mu__boolexpr98 = ((mu__intexpr101) < (mu_MaxInitiators)) ; 
}
  if (!(mu__boolexpr98)) mu__boolexpr97 = FALSE ;
  else {
/*** begin multisetcount 4 declaration ***/
  int mu__intexpr102 = 0;
  {
  mu_1__type_7_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_net.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr102++;
	}
      if (mu_l == 10-1) break;
    }
  }
/*** end multisetcount 4 declaration ***/
  mu__boolexpr97 = ((mu__intexpr102) <= (mu_NetworkSize)) ; 
}
    return mu__boolexpr97;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 94;
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    static mu_1_ResponderId mu_j;
    mu_j.value((r % 1) + 2);
    r = r / 1;
    while (what_rule < 104 && mu_k.value()<10 )
      {
	if ( ( TRUE && mu_net.in(mu_k) ) ) {
bool mu__boolexpr103;
bool mu__boolexpr104;
bool mu__boolexpr105;
  if (!((mu_net[mu_k].mu_dest) == (mu_j))) mu__boolexpr105 = FALSE ;
  else {
/*** begin multisetcount 2 declaration ***/
  int mu__intexpr106 = 0;
  {
  mu_1__type_0_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_res[mu_j].mu_pairings.valid[(int)mu_l].value())
	{
	  if ( (mu_res[mu_j].mu_pairings[mu_l].mu_initiator) == (mu_net[mu_k].mu_source) ) mu__intexpr106++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 2 declaration ***/
  mu__boolexpr105 = ((mu__intexpr106) == (0)) ; 
}
  if (!(mu__boolexpr105)) mu__boolexpr104 = FALSE ;
  else {
/*** begin multisetcount 3 declaration ***/
  int mu__intexpr107 = 0;
  {
  mu_1__type_0_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_res[mu_j].mu_pairings.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr107++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 3 declaration ***/
  mu__boolexpr104 = ((mu__intexpr107) < (mu_MaxInitiators)) ; 
}
  if (!(mu__boolexpr104)) mu__boolexpr103 = FALSE ;
  else {
/*** begin multisetcount 4 declaration ***/
  int mu__intexpr108 = 0;
  {
  mu_1__type_7_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_net.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr108++;
	}
      if (mu_l == 10-1) break;
    }
  }
/*** end multisetcount 4 declaration ***/
  mu__boolexpr103 = ((mu__intexpr108) <= (mu_NetworkSize)) ; 
}
	      if (mu__boolexpr103) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 94;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    mu_j.value((r % 1) + 2);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    static mu_1_ResponderId mu_j;
    mu_j.value((r % 1) + 2);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Pairing mu_pairing("pairing",0);

/*** Variable declaration ***/
mu_1_Message mu_inM("inM",104);

/*** Variable declaration ***/
mu_1_Message mu_outM("outM",208);

/*** Variable declaration ***/
mu_1_GlobalPairing mu_gpairing("gpairing",312);

mu_inM = mu_net[mu_k];
mu_net.multisetremove(mu_k);
if ( (mu_inM.mu_mType) == (mu_M_PublicKey) )
{
mu_pairing.undefine();
mu_pairing.mu_initiator = mu_inM.mu_source;
mu_pairing.mu_state = mu_R_SLEEP;
mu_pairing.mu_initiator_pk = mu_inM.mu_publickey;
mu_pairing.mu_linkKey = mu_false;
mu_outM.undefine();
mu_outM.mu_mType = mu_M_PublicKey;
mu_outM.mu_source = mu_j;
mu_outM.mu_dest = mu_pairing.mu_initiator;
mu_outM.mu_publickey = mu_j;
mu_net.multisetadd(mu_outM);
/*** begin multisetcount 5 declaration ***/
  int mu__intexpr109 = 0;
  {
  mu_1__type_11_id mu_g;
  for (mu_g = 0; ; mu_g=mu_g+1)
    {
      if (mu_gpr.valid[(int)mu_g].value())
	{
bool mu__boolexpr110;
  if (!((mu_gpr[mu_g].mu_initiator) == (mu_pairing.mu_initiator))) mu__boolexpr110 = FALSE ;
  else {
  mu__boolexpr110 = ((mu_gpr[mu_g].mu_responder) == (mu_j)) ; 
}
	  if ( mu__boolexpr110 ) mu__intexpr109++;
	}
      if (mu_g == 10-1) break;
    }
  }
/*** end multisetcount 5 declaration ***/
if ( (mu__intexpr109) == (0) )
{
mu_gpairing.undefine();
mu_gpairing.mu_initiator = mu_pairing.mu_initiator;
mu_gpairing.mu_responder = mu_j;
mu_gpr.multisetadd(mu_gpairing);
}
mu_pairing.mu_state = mu_R_PHASEONE_DONE;
mu_res[mu_j].mu_pairings.multisetadd(mu_pairing);
}
  };

};
/******************** RuleBase10 ********************/
class RuleBase10
{
public:
  int Priority()
  {
    return 94;
  }
  char * Name(unsigned r)
  {
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("initiator checks the exchange verification value (step 11a), k:%s, i:%s", mu_k.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
  if (!mu_net.in(mu_k)) { return FALSE; }
bool mu__boolexpr111;
  if (!((mu_ini[mu_i].mu_state) == (mu_I_WAIT_EVALUE))) mu__boolexpr111 = FALSE ;
  else {
  mu__boolexpr111 = ((mu_net[mu_k].mu_dest) == (mu_i)) ; 
}
    return mu__boolexpr111;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 104;
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 114 && mu_k.value()<10 )
      {
	if ( ( TRUE && mu_net.in(mu_k) ) ) {
bool mu__boolexpr112;
  if (!((mu_ini[mu_i].mu_state) == (mu_I_WAIT_EVALUE))) mu__boolexpr112 = FALSE ;
  else {
  mu__boolexpr112 = ((mu_net[mu_k].mu_dest) == (mu_i)) ; 
}
	      if (mu__boolexpr112) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 104;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_inM("inM",0);

mu_inM = mu_net[mu_k];
mu_net.multisetremove(mu_k);
if ( (mu_inM.mu_mType) == (mu_M_ExchangeVerif) )
{
bool mu__boolexpr113;
bool mu__boolexpr114;
bool mu__boolexpr115;
bool mu__boolexpr116;
  if (!((mu_inM.mu_eValue.mu_pk_send) == (mu_ini[mu_i].mu_responder_pk))) mu__boolexpr116 = FALSE ;
  else {
  mu__boolexpr116 = ((mu_inM.mu_eValue.mu_pk_recv) == (mu_i)) ; 
}
  if (!(mu__boolexpr116)) mu__boolexpr115 = FALSE ;
  else {
  mu__boolexpr115 = ((mu_inM.mu_eValue.mu_n_send) == (mu_ini[mu_i].mu_responder_n)) ; 
}
  if (!(mu__boolexpr115)) mu__boolexpr114 = FALSE ;
  else {
  mu__boolexpr114 = ((mu_inM.mu_eValue.mu_n_recv) == (mu_i)) ; 
}
  if (!(mu__boolexpr114)) mu__boolexpr113 = FALSE ;
  else {
  mu__boolexpr113 = ((mu_inM.mu_eValue.mu_r_recv) == (mu_i)) ; 
}
if ( mu__boolexpr113 )
{
mu_ini[mu_i].mu_state = mu_I_PAIRED;
mu_ini[mu_i].mu_linkKey = mu_true;
if ( (mu_ini[mu_i].mu_responder>=3 && mu_ini[mu_i].mu_responder<=3) )
{
{
  mu_1_AgentId& mu_a = mu_ini[mu_i].mu_responder;
bool mu__boolexpr117;
bool mu__boolexpr118;
bool mu__boolexpr119;
  if (!(mu_int[mu_a].mu_pk[mu_i])) mu__boolexpr119 = FALSE ;
  else {
  mu__boolexpr119 = (mu_int[mu_a].mu_sent_pk[mu_i]) ; 
}
  if (!(mu__boolexpr119)) mu__boolexpr118 = FALSE ;
  else {
  mu__boolexpr118 = (mu_int[mu_a].mu_nonce[mu_i]) ; 
}
  if (!(mu__boolexpr118)) mu__boolexpr117 = FALSE ;
  else {
  mu__boolexpr117 = (mu_int[mu_a].mu_sent_n[mu_i]) ; 
}
if ( mu__boolexpr117 )
{
mu_int[mu_a].mu_linkKeys[mu_i] = mu_true;
}
}
}
}
}
  };

};
/******************** RuleBase11 ********************/
class RuleBase11
{
public:
  int Priority()
  {
    return 95;
  }
  char * Name(unsigned r)
  {
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("initiator initiates the exchange verification (step 10), i:%s", mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr120;
  if (!((mu_ini[mu_i].mu_state) == (mu_I_PHASETWO_DONE))) mu__boolexpr120 = FALSE ;
  else {
/*** begin multisetcount 1 declaration ***/
  int mu__intexpr121 = 0;
  {
  mu_1__type_7_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_net.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr121++;
	}
      if (mu_l == 10-1) break;
    }
  }
/*** end multisetcount 1 declaration ***/
  mu__boolexpr120 = ((mu__intexpr121) < (mu_NetworkSize)) ; 
}
    return mu__boolexpr120;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 114;
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 115 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr122;
  if (!((mu_ini[mu_i].mu_state) == (mu_I_PHASETWO_DONE))) mu__boolexpr122 = FALSE ;
  else {
/*** begin multisetcount 1 declaration ***/
  int mu__intexpr123 = 0;
  {
  mu_1__type_7_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_net.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr123++;
	}
      if (mu_l == 10-1) break;
    }
  }
/*** end multisetcount 1 declaration ***/
  mu__boolexpr122 = ((mu__intexpr123) < (mu_NetworkSize)) ; 
}
	      if (mu__boolexpr122) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 114;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_outM("outM",0);

/*** Variable declaration ***/
mu_1_EValue mu_outEValue("outEValue",104);

mu_outEValue.undefine();
mu_outEValue.mu_pk_send = mu_i;
mu_outEValue.mu_pk_recv = mu_ini[mu_i].mu_responder_pk;
mu_outEValue.mu_n_send = mu_i;
mu_outEValue.mu_n_recv = mu_ini[mu_i].mu_responder_n;
mu_outEValue.mu_r_recv = mu_ini[mu_i].mu_responder_r;
mu_outM.undefine();
mu_outM.mu_mType = mu_M_ExchangeVerif;
mu_outM.mu_source = mu_i;
mu_outM.mu_dest = mu_ini[mu_i].mu_responder;
mu_outM.mu_eValue = mu_outEValue;
mu_net.multisetadd(mu_outM);
mu_ini[mu_i].mu_state = mu_I_WAIT_EVALUE;
  };

};
/******************** RuleBase12 ********************/
class RuleBase12
{
public:
  int Priority()
  {
    return 96;
  }
  char * Name(unsigned r)
  {
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("initiator reacts to nonce recieved and checks CValue (step 6a), k:%s, i:%s", mu_k.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
  if (!mu_net.in(mu_k)) { return FALSE; }
bool mu__boolexpr124;
bool mu__boolexpr125;
  if (!(1)) mu__boolexpr125 = FALSE ;
  else {
  mu__boolexpr125 = ((mu_ini[mu_i].mu_state) == (mu_I_WAIT_NONCE)) ; 
}
  if (!(mu__boolexpr125)) mu__boolexpr124 = FALSE ;
  else {
  mu__boolexpr124 = ((mu_net[mu_k].mu_dest) == (mu_i)) ; 
}
    return mu__boolexpr124;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 115;
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 125 && mu_k.value()<10 )
      {
	if ( ( TRUE && mu_net.in(mu_k) ) ) {
bool mu__boolexpr126;
bool mu__boolexpr127;
  if (!(1)) mu__boolexpr127 = FALSE ;
  else {
  mu__boolexpr127 = ((mu_ini[mu_i].mu_state) == (mu_I_WAIT_NONCE)) ; 
}
  if (!(mu__boolexpr127)) mu__boolexpr126 = FALSE ;
  else {
  mu__boolexpr126 = ((mu_net[mu_k].mu_dest) == (mu_i)) ; 
}
	      if (mu__boolexpr126) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 115;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_inM("inM",0);

/*** Variable declaration ***/
mu_1_Message mu_outM("outM",104);

/*** Variable declaration ***/
mu_1_VValue mu_newVValue("newVValue",208);

mu_inM = mu_net[mu_k];
mu_net.multisetremove(mu_k);
if ( (mu_inM.mu_mType) == (mu_M_Nonce) )
{
mu_ini[mu_i].mu_responder_n = mu_inM.mu_nonce;
bool mu__boolexpr128;
bool mu__boolexpr129;
  if (!((mu_ini[mu_i].mu_responder_c.mu_pk_send) == (mu_ini[mu_i].mu_responder_pk))) mu__boolexpr129 = FALSE ;
  else {
  mu__boolexpr129 = ((mu_ini[mu_i].mu_responder_c.mu_pk_recv) == (mu_i)) ; 
}
  if (!(mu__boolexpr129)) mu__boolexpr128 = FALSE ;
  else {
  mu__boolexpr128 = ((mu_ini[mu_i].mu_responder_c.mu_n_send) == (mu_ini[mu_i].mu_responder_n)) ; 
}
if ( mu__boolexpr128 )
{
if ( 0 )
{
mu_ini[mu_i].mu_state = mu_I_PHASETWO_DONE;
}
if ( 1 )
{
mu_newVValue.undefine();
mu_newVValue.mu_pk_initiator = mu_i;
mu_newVValue.mu_pk_responder = mu_ini[mu_i].mu_responder;
mu_newVValue.mu_n_initiator = mu_i;
mu_newVValue.mu_n_responder = mu_ini[mu_i].mu_responder_n;
mu_ini[mu_i].mu_vValue = mu_newVValue;
mu_ini[mu_i].mu_state = mu_I_NC_VERIF_SET;
}
}
}
  };

};
/******************** RuleBase13 ********************/
class RuleBase13
{
public:
  int Priority()
  {
    return 97;
  }
  char * Name(unsigned r)
  {
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("initiator reacts to commit value received and sends nonce (step 5), k:%s, i:%s", mu_k.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
  if (!mu_net.in(mu_k)) { return FALSE; }
bool mu__boolexpr130;
bool mu__boolexpr131;
  if (!(1)) mu__boolexpr131 = FALSE ;
  else {
  mu__boolexpr131 = ((mu_ini[mu_i].mu_state) == (mu_I_PHASEONE_DONE)) ; 
}
  if (!(mu__boolexpr131)) mu__boolexpr130 = FALSE ;
  else {
  mu__boolexpr130 = ((mu_net[mu_k].mu_dest) == (mu_i)) ; 
}
    return mu__boolexpr130;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 125;
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 135 && mu_k.value()<10 )
      {
	if ( ( TRUE && mu_net.in(mu_k) ) ) {
bool mu__boolexpr132;
bool mu__boolexpr133;
  if (!(1)) mu__boolexpr133 = FALSE ;
  else {
  mu__boolexpr133 = ((mu_ini[mu_i].mu_state) == (mu_I_PHASEONE_DONE)) ; 
}
  if (!(mu__boolexpr133)) mu__boolexpr132 = FALSE ;
  else {
  mu__boolexpr132 = ((mu_net[mu_k].mu_dest) == (mu_i)) ; 
}
	      if (mu__boolexpr132) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 125;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_inM("inM",0);

/*** Variable declaration ***/
mu_1_Message mu_outM("outM",104);

mu_inM = mu_net[mu_k];
mu_net.multisetremove(mu_k);
if ( (mu_inM.mu_mType) == (mu_M_CommitValue) )
{
mu_ini[mu_i].mu_responder_c = mu_inM.mu_cValue;
mu_outM.undefine();
mu_outM.mu_mType = mu_M_Nonce;
mu_outM.mu_source = mu_i;
mu_outM.mu_dest = mu_ini[mu_i].mu_responder;
mu_outM.mu_nonce = mu_i;
mu_net.multisetadd(mu_outM);
mu_ini[mu_i].mu_state = mu_I_WAIT_NONCE;
mu_ini[mu_i].mu_responder_r = mu_ini[mu_i].mu_responder;
}
  };

};
/******************** RuleBase14 ********************/
class RuleBase14
{
public:
  int Priority()
  {
    return 98;
  }
  char * Name(unsigned r)
  {
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("initiator reacts to public key response (step 1b done), k:%s, i:%s", mu_k.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
  if (!mu_net.in(mu_k)) { return FALSE; }
bool mu__boolexpr134;
  if (!((mu_ini[mu_i].mu_state) == (mu_I_SENT_KEY))) mu__boolexpr134 = FALSE ;
  else {
  mu__boolexpr134 = ((mu_net[mu_k].mu_dest) == (mu_i)) ; 
}
    return mu__boolexpr134;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 135;
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 145 && mu_k.value()<10 )
      {
	if ( ( TRUE && mu_net.in(mu_k) ) ) {
bool mu__boolexpr135;
  if (!((mu_ini[mu_i].mu_state) == (mu_I_SENT_KEY))) mu__boolexpr135 = FALSE ;
  else {
  mu__boolexpr135 = ((mu_net[mu_k].mu_dest) == (mu_i)) ; 
}
	      if (mu__boolexpr135) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 135;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1__type_7_id mu_k;
    mu_k.value((r % 10) + 0);
    r = r / 10;
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_inM("inM",0);

mu_inM = mu_net[mu_k];
mu_net.multisetremove(mu_k);
if ( (mu_inM.mu_mType) == (mu_M_PublicKey) )
{
mu_ini[mu_i].mu_responder_pk = mu_inM.mu_publickey;
mu_ini[mu_i].mu_state = mu_I_PHASEONE_DONE;
}
  };

};
/******************** RuleBase15 ********************/
class RuleBase15
{
public:
  int Priority()
  {
    return 99;
  }
  char * Name(unsigned r)
  {
    static mu_1_AgentId mu_j;
    mu_j.unionassign(r % 3);
    r = r / 3;
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    return tsprintf("initiator starts protocol (step 1a), j:%s, i:%s", mu_j.Name(), mu_i.Name());
  }
  bool Condition(unsigned r)
  {
    static mu_1_AgentId mu_j;
    mu_j.unionassign(r % 3);
    r = r / 3;
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
bool mu__boolexpr136;
bool mu__boolexpr137;
  if (!((mu_ini[mu_i].mu_state) == (mu_I_SLEEP))) mu__boolexpr137 = FALSE ;
  else {
  mu__boolexpr137 = (!((mu_j>=1 && mu_j<=1))) ; 
}
  if (!(mu__boolexpr137)) mu__boolexpr136 = FALSE ;
  else {
/*** begin multisetcount 0 declaration ***/
  int mu__intexpr138 = 0;
  {
  mu_1__type_7_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_net.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr138++;
	}
      if (mu_l == 10-1) break;
    }
  }
/*** end multisetcount 0 declaration ***/
  mu__boolexpr136 = ((mu__intexpr138) < (mu_NetworkSize)) ; 
}
    return mu__boolexpr136;
  }

  void NextRule(unsigned & what_rule)
  {
    unsigned r = what_rule - 145;
    static mu_1_AgentId mu_j;
    mu_j.unionassign(r % 3);
    r = r / 3;
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    while (what_rule < 148 )
      {
	if ( ( TRUE  ) ) {
bool mu__boolexpr139;
bool mu__boolexpr140;
  if (!((mu_ini[mu_i].mu_state) == (mu_I_SLEEP))) mu__boolexpr140 = FALSE ;
  else {
  mu__boolexpr140 = (!((mu_j>=1 && mu_j<=1))) ; 
}
  if (!(mu__boolexpr140)) mu__boolexpr139 = FALSE ;
  else {
/*** begin multisetcount 0 declaration ***/
  int mu__intexpr141 = 0;
  {
  mu_1__type_7_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_net.valid[(int)mu_l].value())
	{
	  if ( mu_true ) mu__intexpr141++;
	}
      if (mu_l == 10-1) break;
    }
  }
/*** end multisetcount 0 declaration ***/
  mu__boolexpr139 = ((mu__intexpr141) < (mu_NetworkSize)) ; 
}
	      if (mu__boolexpr139) {
		if ( ( TRUE  ) )
		  return;
		else
		  what_rule++;
	      }
	      else
		what_rule += 1;
	}
	else
	  what_rule += 1;
    r = what_rule - 145;
    mu_j.unionassign(r % 3);
    r = r / 3;
    mu_i.value((r % 1) + 1);
    r = r / 1;
    }
  }

  void Code(unsigned r)
  {
    static mu_1_AgentId mu_j;
    mu_j.unionassign(r % 3);
    r = r / 3;
    static mu_1_InitiatorId mu_i;
    mu_i.value((r % 1) + 1);
    r = r / 1;
/*** Variable declaration ***/
mu_1_Message mu_outM("outM",0);

/*** Variable declaration ***/
mu_1_GlobalPairing mu_gpairing("gpairing",104);

if ( (mu_j>=2 && mu_j<=2) )
{
mu_outM.undefine();
mu_outM.mu_mType = mu_M_PublicKey;
mu_outM.mu_source = mu_i;
mu_outM.mu_dest = mu_j;
mu_outM.mu_publickey = mu_i;
mu_net.multisetadd(mu_outM);
mu_ini[mu_i].mu_state = mu_I_SENT_KEY;
mu_ini[mu_i].mu_responder = mu_j;
mu_gpairing.undefine();
mu_gpairing.mu_initiator = mu_i;
mu_gpairing.mu_responder = mu_j;
mu_gpr.multisetadd(mu_gpairing);
}
else
{
if ( !(mu_ASSUMEVALIDRESPONDER) )
{
mu_outM.undefine();
mu_outM.mu_mType = mu_M_PublicKey;
mu_outM.mu_source = mu_i;
mu_outM.mu_dest = mu_j;
mu_outM.mu_publickey = mu_i;
mu_net.multisetadd(mu_outM);
mu_ini[mu_i].mu_state = mu_I_SENT_KEY;
mu_ini[mu_i].mu_responder = mu_j;
mu_gpairing.undefine();
mu_gpairing.mu_initiator = mu_i;
mu_gpairing.mu_responder = mu_j;
mu_gpr.multisetadd(mu_gpairing);
}
}
  };

};
class NextStateGenerator
{
  RuleBase0 R0;
  RuleBase1 R1;
  RuleBase2 R2;
  RuleBase3 R3;
  RuleBase4 R4;
  RuleBase5 R5;
  RuleBase6 R6;
  RuleBase7 R7;
  RuleBase8 R8;
  RuleBase9 R9;
  RuleBase10 R10;
  RuleBase11 R11;
  RuleBase12 R12;
  RuleBase13 R13;
  RuleBase14 R14;
  RuleBase15 R15;
public:
void SetNextEnabledRule(unsigned & what_rule)
{
  category = CONDITION;
  if (what_rule<30)
    { R0.NextRule(what_rule);
      if (what_rule<30) return; }
  if (what_rule>=30 && what_rule<60)
    { R1.NextRule(what_rule);
      if (what_rule<60) return; }
  if (what_rule>=60 && what_rule<70)
    { R2.NextRule(what_rule);
      if (what_rule<70) return; }
  if (what_rule>=70 && what_rule<71)
    { R3.NextRule(what_rule);
      if (what_rule<71) return; }
  if (what_rule>=71 && what_rule<72)
    { R4.NextRule(what_rule);
      if (what_rule<72) return; }
  if (what_rule>=72 && what_rule<73)
    { R5.NextRule(what_rule);
      if (what_rule<73) return; }
  if (what_rule>=73 && what_rule<83)
    { R6.NextRule(what_rule);
      if (what_rule<83) return; }
  if (what_rule>=83 && what_rule<93)
    { R7.NextRule(what_rule);
      if (what_rule<93) return; }
  if (what_rule>=93 && what_rule<94)
    { R8.NextRule(what_rule);
      if (what_rule<94) return; }
  if (what_rule>=94 && what_rule<104)
    { R9.NextRule(what_rule);
      if (what_rule<104) return; }
  if (what_rule>=104 && what_rule<114)
    { R10.NextRule(what_rule);
      if (what_rule<114) return; }
  if (what_rule>=114 && what_rule<115)
    { R11.NextRule(what_rule);
      if (what_rule<115) return; }
  if (what_rule>=115 && what_rule<125)
    { R12.NextRule(what_rule);
      if (what_rule<125) return; }
  if (what_rule>=125 && what_rule<135)
    { R13.NextRule(what_rule);
      if (what_rule<135) return; }
  if (what_rule>=135 && what_rule<145)
    { R14.NextRule(what_rule);
      if (what_rule<145) return; }
  if (what_rule>=145 && what_rule<148)
    { R15.NextRule(what_rule);
      if (what_rule<148) return; }
}
bool Condition(unsigned r)
{
  category = CONDITION;
  if (r<=29) return R0.Condition(r-0);
  if (r>=30 && r<=59) return R1.Condition(r-30);
  if (r>=60 && r<=69) return R2.Condition(r-60);
  if (r>=70 && r<=70) return R3.Condition(r-70);
  if (r>=71 && r<=71) return R4.Condition(r-71);
  if (r>=72 && r<=72) return R5.Condition(r-72);
  if (r>=73 && r<=82) return R6.Condition(r-73);
  if (r>=83 && r<=92) return R7.Condition(r-83);
  if (r>=93 && r<=93) return R8.Condition(r-93);
  if (r>=94 && r<=103) return R9.Condition(r-94);
  if (r>=104 && r<=113) return R10.Condition(r-104);
  if (r>=114 && r<=114) return R11.Condition(r-114);
  if (r>=115 && r<=124) return R12.Condition(r-115);
  if (r>=125 && r<=134) return R13.Condition(r-125);
  if (r>=135 && r<=144) return R14.Condition(r-135);
  if (r>=145 && r<=147) return R15.Condition(r-145);
Error.Notrace("Internal: NextStateGenerator -- checking condition for nonexisting rule.");
return 0;}
void Code(unsigned r)
{
  if (r<=29) { R0.Code(r-0); return; } 
  if (r>=30 && r<=59) { R1.Code(r-30); return; } 
  if (r>=60 && r<=69) { R2.Code(r-60); return; } 
  if (r>=70 && r<=70) { R3.Code(r-70); return; } 
  if (r>=71 && r<=71) { R4.Code(r-71); return; } 
  if (r>=72 && r<=72) { R5.Code(r-72); return; } 
  if (r>=73 && r<=82) { R6.Code(r-73); return; } 
  if (r>=83 && r<=92) { R7.Code(r-83); return; } 
  if (r>=93 && r<=93) { R8.Code(r-93); return; } 
  if (r>=94 && r<=103) { R9.Code(r-94); return; } 
  if (r>=104 && r<=113) { R10.Code(r-104); return; } 
  if (r>=114 && r<=114) { R11.Code(r-114); return; } 
  if (r>=115 && r<=124) { R12.Code(r-115); return; } 
  if (r>=125 && r<=134) { R13.Code(r-125); return; } 
  if (r>=135 && r<=144) { R14.Code(r-135); return; } 
  if (r>=145 && r<=147) { R15.Code(r-145); return; } 
}
int Priority(unsigned short r)
{
  if (r<=29) { return R0.Priority(); } 
  if (r>=30 && r<=59) { return R1.Priority(); } 
  if (r>=60 && r<=69) { return R2.Priority(); } 
  if (r>=70 && r<=70) { return R3.Priority(); } 
  if (r>=71 && r<=71) { return R4.Priority(); } 
  if (r>=72 && r<=72) { return R5.Priority(); } 
  if (r>=73 && r<=82) { return R6.Priority(); } 
  if (r>=83 && r<=92) { return R7.Priority(); } 
  if (r>=93 && r<=93) { return R8.Priority(); } 
  if (r>=94 && r<=103) { return R9.Priority(); } 
  if (r>=104 && r<=113) { return R10.Priority(); } 
  if (r>=114 && r<=114) { return R11.Priority(); } 
  if (r>=115 && r<=124) { return R12.Priority(); } 
  if (r>=125 && r<=134) { return R13.Priority(); } 
  if (r>=135 && r<=144) { return R14.Priority(); } 
  if (r>=145 && r<=147) { return R15.Priority(); } 
return 0;}
char * Name(unsigned r)
{
  if (r<=29) return R0.Name(r-0);
  if (r>=30 && r<=59) return R1.Name(r-30);
  if (r>=60 && r<=69) return R2.Name(r-60);
  if (r>=70 && r<=70) return R3.Name(r-70);
  if (r>=71 && r<=71) return R4.Name(r-71);
  if (r>=72 && r<=72) return R5.Name(r-72);
  if (r>=73 && r<=82) return R6.Name(r-73);
  if (r>=83 && r<=92) return R7.Name(r-83);
  if (r>=93 && r<=93) return R8.Name(r-93);
  if (r>=94 && r<=103) return R9.Name(r-94);
  if (r>=104 && r<=113) return R10.Name(r-104);
  if (r>=114 && r<=114) return R11.Name(r-114);
  if (r>=115 && r<=124) return R12.Name(r-115);
  if (r>=125 && r<=134) return R13.Name(r-125);
  if (r>=135 && r<=144) return R14.Name(r-135);
  if (r>=145 && r<=147) return R15.Name(r-145);
  return NULL;
}
};
const unsigned numrules = 148;

/********************
  parameter
 ********************/
#define RULES_IN_WORLD 148


/********************
  Startstate records
 ********************/
/******************** StartStateBase0 ********************/
class StartStateBase0
{
public:
  char * Name(unsigned short r)
  {
    return tsprintf("Startstate 0");
  }
  void Code(unsigned short r)
  {
mu_ini.undefine();
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
mu_ini[mu_i].mu_state = mu_I_SLEEP;
mu_ini[mu_i].mu_responder = mu_i;
mu_ini[mu_i].mu_linkKey = mu_false;
};
};
mu_res.undefine();
{
for(int mu_i = 2; mu_i <= 2; mu_i++) {
mu_res[mu_i].mu_pairings.undefine();
};
};
mu_int.undefine();
{
for(int mu_i = 3; mu_i <= 3; mu_i++) {
{
for(int mu_j = 1; mu_j <= 3; mu_j++)
  if (( ( mu_j >= 3 ) && ( mu_j <= 3 ) )|| ( ( mu_j >= 2 ) && ( mu_j <= 2 ) )|| ( ( mu_j >= 1 ) && ( mu_j <= 1 ) )) {
mu_int[mu_i].mu_linkKeys[mu_j] = mu_false;
mu_int[mu_i].mu_sent_pk[mu_j] = mu_false;
mu_int[mu_i].mu_sent_n[mu_j] = mu_false;
};
};
mu_int[mu_i].mu_linkKeys[mu_i] = mu_true;
mu_int[mu_i].mu_pk[mu_i] = mu_true;
mu_int[mu_i].mu_nonce[mu_i] = mu_true;
};
};
mu_net.undefine();
  };

};
class StartStateGenerator
{
  StartStateBase0 S0;
public:
void Code(unsigned short r)
{
  if (r<=0) { S0.Code(r-0); return; }
}
char * Name(unsigned short r)
{
  if (r<=0) return S0.Name(r-0);
  return NULL;
}
};
const rulerec startstates[] = {
{ NULL, NULL, NULL, FALSE},
};
unsigned short StartStateManager::numstartstates = 1;

/********************
  Invariant records
 ********************/
int mu__invariant_142() // Invariant "responder honest pairing"
{
bool mu__quant143; 
mu__quant143 = TRUE;
{
for(int mu_i = 2; mu_i <= 2; mu_i++) {
bool mu__boolexpr144;
/*** begin multisetcount 18 declaration ***/
  int mu__intexpr145 = 0;
  {
  mu_1__type_0_id mu_j;
  for (mu_j = 0; ; mu_j=mu_j+1)
    {
      if (mu_res[mu_i].mu_pairings.valid[(int)mu_j].value())
	{
	  if ( (mu_res[mu_i].mu_pairings[mu_j].mu_state) == (mu_R_PAIRED) ) mu__intexpr145++;
	}
      if (mu_j == 1-1) break;
    }
  }
/*** end multisetcount 18 declaration ***/
  if (!((mu__intexpr145) >= (1))) mu__boolexpr144 = TRUE ;
  else {
/*** begin multisetcount 20 declaration ***/
  int mu__intexpr146 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_gpr.valid[(int)mu_l].value())
	{
/*** begin multisetcount 19 declaration ***/
  int mu__intexpr147 = 0;
  {
  mu_1__type_0_id mu_j;
  for (mu_j = 0; ; mu_j=mu_j+1)
    {
      if (mu_res[mu_i].mu_pairings.valid[(int)mu_j].value())
	{
bool mu__boolexpr148;
bool mu__boolexpr149;
  if (!((mu_res[mu_i].mu_pairings[mu_j].mu_state) == (mu_R_PAIRED))) mu__boolexpr149 = FALSE ;
  else {
  mu__boolexpr149 = ((mu_gpr[mu_l].mu_responder) == (mu_i)) ; 
}
  if (!(mu__boolexpr149)) mu__boolexpr148 = FALSE ;
  else {
  mu__boolexpr148 = ((mu_res[mu_i].mu_pairings[mu_j].mu_initiator) == (mu_gpr[mu_l].mu_initiator)) ; 
}
	  if ( mu__boolexpr148 ) mu__intexpr147++;
	}
      if (mu_j == 1-1) break;
    }
  }
/*** end multisetcount 19 declaration ***/
	  if ( (mu__intexpr147) >= (1) ) mu__intexpr146++;
	}
      if (mu_l == 10-1) break;
    }
  }
/*** end multisetcount 20 declaration ***/
  mu__boolexpr144 = ((mu__intexpr146) >= (1)) ; 
}
if ( !(mu__boolexpr144) )
  { mu__quant143 = FALSE; break; }
};
};
return mu__quant143;
};

bool mu__condition_150() // Condition for Rule "responder honest pairing"
{
  return mu__invariant_142( );
}

/**** end rule declaration ****/

int mu__invariant_151() // Invariant "initiator honest pairing"
{
bool mu__quant152; 
mu__quant152 = TRUE;
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
bool mu__boolexpr153;
bool mu__boolexpr154;
  if (!((mu_ini[mu_i].mu_state) == (mu_I_PAIRED))) mu__boolexpr154 = FALSE ;
  else {
  mu__boolexpr154 = ((mu_ini[mu_i].mu_linkKey) == (mu_true)) ; 
}
  if (!(mu__boolexpr154)) mu__boolexpr153 = TRUE ;
  else {
/*** begin multisetcount 17 declaration ***/
  int mu__intexpr155 = 0;
  {
  mu_1__type_11_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_gpr.valid[(int)mu_l].value())
	{
bool mu__boolexpr156;
  if (!((mu_gpr[mu_l].mu_initiator) == (mu_i))) mu__boolexpr156 = FALSE ;
  else {
  mu__boolexpr156 = ((mu_gpr[mu_l].mu_responder) == (mu_ini[mu_i].mu_responder)) ; 
}
	  if ( mu__boolexpr156 ) mu__intexpr155++;
	}
      if (mu_l == 10-1) break;
    }
  }
/*** end multisetcount 17 declaration ***/
  mu__boolexpr153 = ((mu__intexpr155) >= (1)) ; 
}
if ( !(mu__boolexpr153) )
  { mu__quant152 = FALSE; break; }
};
};
return mu__quant152;
};

bool mu__condition_157() // Condition for Rule "initiator honest pairing"
{
  return mu__invariant_151( );
}

/**** end rule declaration ****/

int mu__invariant_158() // Invariant "responder link key is secret"
{
bool mu__quant159; 
mu__quant159 = TRUE;
{
for(int mu_j = 3; mu_j <= 3; mu_j++) {
bool mu__quant160; 
mu__quant160 = TRUE;
{
for(int mu_i = 2; mu_i <= 2; mu_i++) {
/*** begin multisetcount 16 declaration ***/
  int mu__intexpr161 = 0;
  {
  mu_1__type_0_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_res[mu_i].mu_pairings.valid[(int)mu_l].value())
	{
bool mu__boolexpr162;
bool mu__boolexpr163;
bool mu__boolexpr164;
  if (!((mu_res[mu_i].mu_pairings[mu_l].mu_initiator) == (mu_j))) mu__boolexpr164 = FALSE ;
  else {
  mu__boolexpr164 = ((mu_res[mu_i].mu_pairings[mu_l].mu_state) == (mu_R_PAIRED)) ; 
}
  if (!(mu__boolexpr164)) mu__boolexpr163 = FALSE ;
  else {
  mu__boolexpr163 = ((mu_res[mu_i].mu_pairings[mu_l].mu_linkKey) == (mu_true)) ; 
}
  if (!(mu__boolexpr163)) mu__boolexpr162 = FALSE ;
  else {
  mu__boolexpr162 = ((mu_int[mu_j].mu_linkKeys[mu_i]) == (mu_true)) ; 
}
	  if ( mu__boolexpr162 ) mu__intexpr161++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 16 declaration ***/
if ( !((mu__intexpr161) == (0)) )
  { mu__quant160 = FALSE; break; }
};
};
if ( !(mu__quant160) )
  { mu__quant159 = FALSE; break; }
};
};
return mu__quant159;
};

bool mu__condition_165() // Condition for Rule "responder link key is secret"
{
  return mu__invariant_158( );
}

/**** end rule declaration ****/

int mu__invariant_166() // Invariant "initiator link key is secret"
{
bool mu__quant167; 
mu__quant167 = TRUE;
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
bool mu__boolexpr168;
bool mu__boolexpr169;
  if (!((mu_ini[mu_i].mu_state) == (mu_I_PAIRED))) mu__boolexpr169 = FALSE ;
  else {
  mu__boolexpr169 = ((mu_ini[mu_i].mu_linkKey) == (mu_true)) ; 
}
  if (!(mu__boolexpr169)) mu__boolexpr168 = TRUE ;
  else {
bool mu__quant170; 
mu__quant170 = TRUE;
{
for(int mu_j = 3; mu_j <= 3; mu_j++) {
if ( !((mu_int[mu_j].mu_linkKeys[mu_i]) == (mu_false)) )
  { mu__quant170 = FALSE; break; }
};
};
  mu__boolexpr168 = (mu__quant170) ; 
}
if ( !(mu__boolexpr168) )
  { mu__quant167 = FALSE; break; }
};
};
return mu__quant167;
};

bool mu__condition_171() // Condition for Rule "initiator link key is secret"
{
  return mu__invariant_166( );
}

/**** end rule declaration ****/

int mu__invariant_172() // Invariant "responders correctly paired with good initiator"
{
bool mu__quant173; 
mu__quant173 = TRUE;
{
for(int mu_i = 2; mu_i <= 2; mu_i++) {
/*** begin multisetcount 15 declaration ***/
  int mu__intexpr174 = 0;
  {
  mu_1__type_0_id mu_l;
  for (mu_l = 0; ; mu_l=mu_l+1)
    {
      if (mu_res[mu_i].mu_pairings.valid[(int)mu_l].value())
	{
bool mu__boolexpr175;
  if (!((mu_res[mu_i].mu_pairings[mu_l].mu_state) == (mu_R_PAIRED))) mu__boolexpr175 = FALSE ;
  else {
  mu__boolexpr175 = ((mu_res[mu_i].mu_pairings[mu_l].mu_initiator>=3 && mu_res[mu_i].mu_pairings[mu_l].mu_initiator<=3)) ; 
}
	  if ( mu__boolexpr175 ) mu__intexpr174++;
	}
      if (mu_l == 1-1) break;
    }
  }
/*** end multisetcount 15 declaration ***/
if ( !((mu__intexpr174) == (0)) )
  { mu__quant173 = FALSE; break; }
};
};
return mu__quant173;
};

bool mu__condition_176() // Condition for Rule "responders correctly paired with good initiator"
{
  return mu__invariant_172( );
}

/**** end rule declaration ****/

int mu__invariant_177() // Invariant "initiator correctly paired with good responder"
{
bool mu__quant178; 
mu__quant178 = TRUE;
{
for(int mu_i = 1; mu_i <= 1; mu_i++) {
bool mu__boolexpr179;
  if (!((mu_ini[mu_i].mu_state) == (mu_I_PAIRED))) mu__boolexpr179 = TRUE ;
  else {
  mu__boolexpr179 = (!((mu_ini[mu_i].mu_responder>=3 && mu_ini[mu_i].mu_responder<=3))) ; 
}
if ( !(mu__boolexpr179) )
  { mu__quant178 = FALSE; break; }
};
};
return mu__quant178;
};

bool mu__condition_180() // Condition for Rule "initiator correctly paired with good responder"
{
  return mu__invariant_177( );
}

/**** end rule declaration ****/

const rulerec invariants[] = {
{"initiator correctly paired with good responder", &mu__condition_180, NULL, },
{"responders correctly paired with good initiator", &mu__condition_176, NULL, },
{"initiator link key is secret", &mu__condition_171, NULL, },
{"responder link key is secret", &mu__condition_165, NULL, },
{"initiator honest pairing", &mu__condition_157, NULL, },
{"responder honest pairing", &mu__condition_150, NULL, },
};
const unsigned short numinvariants = 6;

/********************
  Normal/Canonicalization for scalarset
 ********************/
/*
ini:NoScalarset
net:Complex
res:Complex
int:Complex
gpr:Complex
*/

/********************
Code for symmetry
 ********************/

/********************
 Permutation Set Class
 ********************/
class PermSet
{
public:
  // book keeping
  enum PresentationType {Simple, Explicit};
  PresentationType Presentation;

  void ResetToSimple();
  void ResetToExplicit();
  void SimpleToExplicit();
  void SimpleToOne();
  bool NextPermutation();

  void Print_in_size()
  { int ret=0; for (int i=0; i<count; i++) if (in[i]) ret++; cout << "in_size:" << ret << "\n"; }


  /********************
   Simple and efficient representation
   ********************/
  bool AlreadyOnlyOneRemain;
  bool MoreThanOneRemain();


  /********************
   Explicit representation
  ********************/
  unsigned long size;
  unsigned long count;
  // in will be of product of factorial sizes for fast canonicalize
  // in will be of size 1 for reduced local memory canonicalize
  bool * in;

  // auxiliary for explicit representation

  // in/perm/revperm will be of factorial size for fast canonicalize
  // they will be of size 1 for reduced local memory canonicalize
  // second range will be size of the scalarset
  // procedure for explicit representation
  // General procedure
  PermSet();
  bool In(int i) const { return in[i]; };
  void Add(int i) { for (int j=0; j<i; j++) in[j] = FALSE;};
  void Remove(int i) { in[i] = FALSE; };
};
bool PermSet::MoreThanOneRemain()
{
  int i,j;
  if (AlreadyOnlyOneRemain)
    return FALSE;
  else {
  }
  AlreadyOnlyOneRemain = TRUE;
  return FALSE;
}
PermSet::PermSet()
: Presentation(Simple)
{
  int i,j,k;
  if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize) {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];

    // Set perm and revperm

    // setting up combination of permutations
    // for different scalarset
    int carry;
    size = 1;
    count = 1;
    for (i=0; i<1; i++)
      {
        carry = 1;
        in[i]= TRUE;
    }
  }
  else
  {

  /********************
   declaration of class variables
  ********************/
  in = new bool[1];
  in[0] = TRUE;
  }
}
void PermSet::ResetToSimple()
{
  int i;

  AlreadyOnlyOneRemain = FALSE;
  Presentation = Simple;
}
void PermSet::ResetToExplicit()
{
  for (int i=0; i<1; i++) in[i] = TRUE;
  Presentation = Explicit;
}
void PermSet::SimpleToExplicit()
{
  int i,j,k;
  int start, class_size;

  // Setup range for mapping

  // To be In or not to be

  // setup explicit representation 
  // Set perm and revperm
  for (i=0; i<1; i++)
    {
      in[i] = TRUE;
    }
  Presentation = Explicit;
  if (args->test_parameter1.value==0) Print_in_size();
}
void PermSet::SimpleToOne()
{
  int i,j,k;
  int class_size;
  int start;


  // Setup range for mapping
  Presentation = Explicit;
}
bool PermSet::NextPermutation()
{
  bool nexted = FALSE;
  int start, end; 
  int class_size;
  int temp;
  int j,k;

  // algorithm
  // for each class
  //   if forall in the same class reverse_sorted, 
  //     { sort again; goto next class }
  //   else
  //     {
  //       nexted = TRUE;
  //       for (j from l to r)
  // 	       if (for all j+ are reversed sorted)
  // 	         {
  // 	           swap j, j+1
  // 	           sort all j+ again
  // 	           break;
  // 	         }
  //     }
if (!nexted) return FALSE;
  return TRUE;
}

/********************
 Symmetry Class
 ********************/
class SymmetryClass
{
  PermSet Perm;
  bool BestInitialized;
  state BestPermutedState;

  // utilities
  void SetBestResult(int i, state* temp);
  void ResetBestResult() {BestInitialized = FALSE;};

public:
  // initializer
  SymmetryClass() : Perm(), BestInitialized(FALSE) {};
  ~SymmetryClass() {};

  void Normalize(state* s);

  void Exhaustive_Fast_Canonicalize(state *s);
  void Heuristic_Fast_Canonicalize(state *s);
  void Heuristic_Small_Mem_Canonicalize(state *s);
  void Heuristic_Fast_Normalize(state *s);

  void MultisetSort(state* s);
};


/********************
 Symmetry Class Members
 ********************/
void SymmetryClass::MultisetSort(state* s)
{
        mu_ini.MultisetSort();
        mu_net.MultisetSort();
        mu_res.MultisetSort();
        mu_int.MultisetSort();
        mu_gpr.MultisetSort();
}
void SymmetryClass::Normalize(state* s)
{
  switch (args->sym_alg.mode) {
  case argsym_alg::Exhaustive_Fast_Canonicalize:
    Exhaustive_Fast_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Fast_Canonicalize:
    Heuristic_Fast_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Small_Mem_Canonicalize:
    Heuristic_Small_Mem_Canonicalize(s);
    break;
  case argsym_alg::Heuristic_Fast_Normalize:
    Heuristic_Fast_Normalize(s);
    break;
  default:
    Heuristic_Fast_Canonicalize(s);
  }
}

/********************
 Permute and Canonicalize function for different types
 ********************/
void mu_1_InitiatorId::Permute(PermSet& Perm, int i) {}
void mu_1_InitiatorId::SimpleCanonicalize(PermSet& Perm) {}
void mu_1_InitiatorId::Canonicalize(PermSet& Perm)
{
  Error.Error("Calling canonicalize() for Scalarset.");
}
void mu_1_InitiatorId::SimpleLimit(PermSet& Perm) {}
void mu_1_InitiatorId::ArrayLimit(PermSet& Perm) {}
void mu_1_InitiatorId::Limit(PermSet& Perm) {}
void mu_1_InitiatorId::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset type.\n"); };
void mu_1_ResponderId::Permute(PermSet& Perm, int i) {}
void mu_1_ResponderId::SimpleCanonicalize(PermSet& Perm) {}
void mu_1_ResponderId::Canonicalize(PermSet& Perm)
{
  Error.Error("Calling canonicalize() for Scalarset.");
}
void mu_1_ResponderId::SimpleLimit(PermSet& Perm) {}
void mu_1_ResponderId::ArrayLimit(PermSet& Perm) {}
void mu_1_ResponderId::Limit(PermSet& Perm) {}
void mu_1_ResponderId::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset type.\n"); };
void mu_1_IntruderId::Permute(PermSet& Perm, int i) {}
void mu_1_IntruderId::SimpleCanonicalize(PermSet& Perm) {}
void mu_1_IntruderId::Canonicalize(PermSet& Perm)
{
  Error.Error("Calling canonicalize() for Scalarset.");
}
void mu_1_IntruderId::SimpleLimit(PermSet& Perm) {}
void mu_1_IntruderId::ArrayLimit(PermSet& Perm) {}
void mu_1_IntruderId::Limit(PermSet& Perm) {}
void mu_1_IntruderId::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset type.\n"); };
void mu_1_AgentId::Permute(PermSet& Perm, int i)
{
  if (Perm.Presentation != PermSet::Explicit)
    Error.Error("Internal Error: Wrong Sequence of Normalization");
  if (defined()) {
  }
}
void mu_1_AgentId::SimpleCanonicalize(PermSet& Perm)
{
  int i, class_number;
  if (Perm.Presentation != PermSet::Simple)
    Error.Error("Internal Error: Wrong Sequence of Normalization");
  if (defined()) {
  }
}
void mu_1_AgentId::Canonicalize(PermSet& Perm)
{
  Error.Error("Calling canonicalize() for Scalarset.");
}
void mu_1_AgentId::SimpleLimit(PermSet& Perm)
{
  int i, class_number;
  if (Perm.Presentation != PermSet::Simple)
    Error.Error("Internal Error: Wrong Sequence of Normalization");
  if (defined()) {
  }
}
void mu_1_AgentId::ArrayLimit(PermSet& Perm) {}
void mu_1_AgentId::Limit(PermSet& Perm) {}
void mu_1_AgentId::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for union type.\n"); };
void mu_1_CValue::Permute(PermSet& Perm, int i)
{
};
void mu_1_CValue::SimpleCanonicalize(PermSet& Perm)
{
  mu_pk_send.SimpleCanonicalize(Perm);
  mu_pk_recv.SimpleCanonicalize(Perm);
  mu_n_send.SimpleCanonicalize(Perm);
};
void mu_1_CValue::Canonicalize(PermSet& Perm)
{
};
void mu_1_CValue::SimpleLimit(PermSet& Perm)
{
  mu_pk_send.SimpleLimit(Perm);
  mu_pk_recv.SimpleLimit(Perm);
  mu_n_send.SimpleLimit(Perm);
};
void mu_1_CValue::ArrayLimit(PermSet& Perm){}
void mu_1_CValue::Limit(PermSet& Perm)
{
};
void mu_1_CValue::MultisetLimit(PermSet& Perm)
{
};
void mu_1_EValue::Permute(PermSet& Perm, int i)
{
};
void mu_1_EValue::SimpleCanonicalize(PermSet& Perm)
{
  mu_pk_send.SimpleCanonicalize(Perm);
  mu_pk_recv.SimpleCanonicalize(Perm);
  mu_n_send.SimpleCanonicalize(Perm);
  mu_n_recv.SimpleCanonicalize(Perm);
  mu_r_recv.SimpleCanonicalize(Perm);
};
void mu_1_EValue::Canonicalize(PermSet& Perm)
{
};
void mu_1_EValue::SimpleLimit(PermSet& Perm)
{
  mu_pk_send.SimpleLimit(Perm);
  mu_pk_recv.SimpleLimit(Perm);
  mu_n_send.SimpleLimit(Perm);
  mu_n_recv.SimpleLimit(Perm);
  mu_r_recv.SimpleLimit(Perm);
};
void mu_1_EValue::ArrayLimit(PermSet& Perm){}
void mu_1_EValue::Limit(PermSet& Perm)
{
};
void mu_1_EValue::MultisetLimit(PermSet& Perm)
{
};
void mu_1_VValue::Permute(PermSet& Perm, int i)
{
};
void mu_1_VValue::SimpleCanonicalize(PermSet& Perm)
{
  mu_pk_initiator.SimpleCanonicalize(Perm);
  mu_pk_responder.SimpleCanonicalize(Perm);
  mu_n_initiator.SimpleCanonicalize(Perm);
  mu_n_responder.SimpleCanonicalize(Perm);
};
void mu_1_VValue::Canonicalize(PermSet& Perm)
{
};
void mu_1_VValue::SimpleLimit(PermSet& Perm)
{
  mu_pk_initiator.SimpleLimit(Perm);
  mu_pk_responder.SimpleLimit(Perm);
  mu_n_initiator.SimpleLimit(Perm);
  mu_n_responder.SimpleLimit(Perm);
};
void mu_1_VValue::ArrayLimit(PermSet& Perm){}
void mu_1_VValue::Limit(PermSet& Perm)
{
};
void mu_1_VValue::MultisetLimit(PermSet& Perm)
{
};
void mu_1_MessageType::Permute(PermSet& Perm, int i) {};
void mu_1_MessageType::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_MessageType::Canonicalize(PermSet& Perm) {};
void mu_1_MessageType::SimpleLimit(PermSet& Perm) {};
void mu_1_MessageType::ArrayLimit(PermSet& Perm) {};
void mu_1_MessageType::Limit(PermSet& Perm) {};
void mu_1_MessageType::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_Message::Permute(PermSet& Perm, int i)
{
};
void mu_1_Message::SimpleCanonicalize(PermSet& Perm)
{
  mu_source.SimpleCanonicalize(Perm);
  mu_dest.SimpleCanonicalize(Perm);
  mu_nonce.SimpleCanonicalize(Perm);
  mu_publickey.SimpleCanonicalize(Perm);
  mu_cValue.SimpleCanonicalize(Perm);
  mu_eValue.SimpleCanonicalize(Perm);
};
void mu_1_Message::Canonicalize(PermSet& Perm)
{
};
void mu_1_Message::SimpleLimit(PermSet& Perm)
{
  mu_source.SimpleLimit(Perm);
  mu_dest.SimpleLimit(Perm);
  mu_nonce.SimpleLimit(Perm);
  mu_publickey.SimpleLimit(Perm);
  mu_cValue.SimpleLimit(Perm);
  mu_eValue.SimpleLimit(Perm);
};
void mu_1_Message::ArrayLimit(PermSet& Perm){}
void mu_1_Message::Limit(PermSet& Perm)
{
};
void mu_1_Message::MultisetLimit(PermSet& Perm)
{
};
void mu_1_InitiatorStates::Permute(PermSet& Perm, int i) {};
void mu_1_InitiatorStates::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_InitiatorStates::Canonicalize(PermSet& Perm) {};
void mu_1_InitiatorStates::SimpleLimit(PermSet& Perm) {};
void mu_1_InitiatorStates::ArrayLimit(PermSet& Perm) {};
void mu_1_InitiatorStates::Limit(PermSet& Perm) {};
void mu_1_InitiatorStates::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_Initiator::Permute(PermSet& Perm, int i)
{
};
void mu_1_Initiator::SimpleCanonicalize(PermSet& Perm)
{
  mu_responder.SimpleCanonicalize(Perm);
  mu_responder_pk.SimpleCanonicalize(Perm);
  mu_responder_r.SimpleCanonicalize(Perm);
  mu_responder_n.SimpleCanonicalize(Perm);
  mu_responder_c.SimpleCanonicalize(Perm);
  mu_vValue.SimpleCanonicalize(Perm);
};
void mu_1_Initiator::Canonicalize(PermSet& Perm)
{
};
void mu_1_Initiator::SimpleLimit(PermSet& Perm)
{
  mu_responder.SimpleLimit(Perm);
  mu_responder_pk.SimpleLimit(Perm);
  mu_responder_r.SimpleLimit(Perm);
  mu_responder_n.SimpleLimit(Perm);
  mu_responder_c.SimpleLimit(Perm);
  mu_vValue.SimpleLimit(Perm);
};
void mu_1_Initiator::ArrayLimit(PermSet& Perm){}
void mu_1_Initiator::Limit(PermSet& Perm)
{
};
void mu_1_Initiator::MultisetLimit(PermSet& Perm)
{
};
void mu_1_ResponderStates::Permute(PermSet& Perm, int i) {};
void mu_1_ResponderStates::SimpleCanonicalize(PermSet& Perm) {};
void mu_1_ResponderStates::Canonicalize(PermSet& Perm) {};
void mu_1_ResponderStates::SimpleLimit(PermSet& Perm) {};
void mu_1_ResponderStates::ArrayLimit(PermSet& Perm) {};
void mu_1_ResponderStates::Limit(PermSet& Perm) {};
void mu_1_ResponderStates::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for enum type.\n"); };
void mu_1_Pairing::Permute(PermSet& Perm, int i)
{
};
void mu_1_Pairing::SimpleCanonicalize(PermSet& Perm)
{
  mu_initiator.SimpleCanonicalize(Perm);
  mu_initiator_pk.SimpleCanonicalize(Perm);
  mu_initiator_r.SimpleCanonicalize(Perm);
  mu_initiator_n.SimpleCanonicalize(Perm);
  mu_initiator_c.SimpleCanonicalize(Perm);
  mu_vValue.SimpleCanonicalize(Perm);
};
void mu_1_Pairing::Canonicalize(PermSet& Perm)
{
};
void mu_1_Pairing::SimpleLimit(PermSet& Perm)
{
  mu_initiator.SimpleLimit(Perm);
  mu_initiator_pk.SimpleLimit(Perm);
  mu_initiator_r.SimpleLimit(Perm);
  mu_initiator_n.SimpleLimit(Perm);
  mu_initiator_c.SimpleLimit(Perm);
  mu_vValue.SimpleLimit(Perm);
};
void mu_1_Pairing::ArrayLimit(PermSet& Perm){}
void mu_1_Pairing::Limit(PermSet& Perm)
{
};
void mu_1_Pairing::MultisetLimit(PermSet& Perm)
{
};
void mu_1_GlobalPairing::Permute(PermSet& Perm, int i)
{
};
void mu_1_GlobalPairing::SimpleCanonicalize(PermSet& Perm)
{
  mu_initiator.SimpleCanonicalize(Perm);
  mu_responder.SimpleCanonicalize(Perm);
};
void mu_1_GlobalPairing::Canonicalize(PermSet& Perm)
{
};
void mu_1_GlobalPairing::SimpleLimit(PermSet& Perm)
{
  mu_initiator.SimpleLimit(Perm);
  mu_responder.SimpleLimit(Perm);
};
void mu_1_GlobalPairing::ArrayLimit(PermSet& Perm){}
void mu_1_GlobalPairing::Limit(PermSet& Perm)
{
};
void mu_1_GlobalPairing::MultisetLimit(PermSet& Perm)
{
};
void mu_1__type_0::Permute(PermSet& Perm, int i)
{
  static mu_1__type_0 temp("Permute_mu_1__type_0",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_0::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: calling SimpleCanonicalize for a multiset.\n"); };
void mu_1__type_0::Canonicalize(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1__type_0::SimpleLimit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1__type_0::ArrayLimit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1__type_0::Limit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1__type_0::MultisetLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // while guard
  bool while_guard, while_guard_temp;
  // sorting
  static mu_1_Pairing value[1];
  // limit
  bool exists;
  bool split;
  int i0;
  int count_multisetindex, oldcount_multisetindex;
  bool pos_multisetindex[1][1];
  bool goodset_multisetindex[1];
  mu_1_Pairing temp;

  // compact
  for (i = 0, j = 0; i < 1; i++)
    if (valid[i].value())
      {
        if (j!=i)
          array[j++] = array[i];
        else
          j++;
      }
  if (j != current_size) current_size = j;
  for (i = j; i < 1; i++)
    array[i].undefine();
  for (i = 0; i < j; i++)
    valid[i].value(TRUE);
  for (i = j; i < 1; i++)
    valid[i].value(FALSE);

  // bubble sort
  for (i = 0; i < current_size; i++)
    for (j = i+1; j < current_size; j++)
      if (CompareWeight(array[i],array[j])>0)
        {
          temp = array[i];
          array[i] = array[j];
          array[j] = temp;
        }
  // initializing pos array
    for (i=0; i<current_size; i++)
      for (j=0; j<current_size; j++)
        pos_multisetindex[i][j]=FALSE;
    count_multisetindex = 1;
    pos_multisetindex[0][0] = TRUE;
    for (i = 1, j = 0 ; i < current_size; i++)
      if (CompareWeight(array[i-1],array[i])==0)
        pos_multisetindex[j][i] = TRUE;
      else
        { count_multisetindex++; pos_multisetindex[++j][i] = TRUE; }
  if (current_size == 1)
    {
      array[0].SimpleLimit(Perm);
    }
  else
    {


  // refinement -- checking priority in general
  while_guard = (count_multisetindex < current_size);
  while ( while_guard )
    {
      oldcount_multisetindex = count_multisetindex;
      while_guard = oldcount_multisetindex!=count_multisetindex;
      while_guard_temp = while_guard;
      while_guard = (count_multisetindex < current_size);
      while_guard = while_guard && while_guard_temp;
    } // end while
  }
}
void mu_1_Responder::Permute(PermSet& Perm, int i)
{
};
void mu_1_Responder::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_Responder::Canonicalize(PermSet& Perm)
{
};
void mu_1_Responder::SimpleLimit(PermSet& Perm){}
void mu_1_Responder::ArrayLimit(PermSet& Perm){}
void mu_1_Responder::Limit(PermSet& Perm)
{
};
void mu_1_Responder::MultisetLimit(PermSet& Perm)
{
  mu_pairings.MultisetLimit(Perm);
};
void mu_1__type_1::Permute(PermSet& Perm, int i)
{
  static mu_1__type_1 temp("Permute_mu_1__type_1",-1);
  int j;
  for (j=0; j<10; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_1::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: calling SimpleCanonicalize for a multiset.\n"); };
void mu_1__type_1::Canonicalize(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1__type_1::SimpleLimit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1__type_1::ArrayLimit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1__type_1::Limit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1__type_1::MultisetLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // while guard
  bool while_guard, while_guard_temp;
  // sorting
  static mu_1_Message value[10];
  // limit
  bool exists;
  bool split;
  int i0;
  int count_multisetindex, oldcount_multisetindex;
  bool pos_multisetindex[10][10];
  bool goodset_multisetindex[10];
  mu_1_Message temp;

  // compact
  for (i = 0, j = 0; i < 10; i++)
    if (valid[i].value())
      {
        if (j!=i)
          array[j++] = array[i];
        else
          j++;
      }
  if (j != current_size) current_size = j;
  for (i = j; i < 10; i++)
    array[i].undefine();
  for (i = 0; i < j; i++)
    valid[i].value(TRUE);
  for (i = j; i < 10; i++)
    valid[i].value(FALSE);

  // bubble sort
  for (i = 0; i < current_size; i++)
    for (j = i+1; j < current_size; j++)
      if (CompareWeight(array[i],array[j])>0)
        {
          temp = array[i];
          array[i] = array[j];
          array[j] = temp;
        }
  // initializing pos array
    for (i=0; i<current_size; i++)
      for (j=0; j<current_size; j++)
        pos_multisetindex[i][j]=FALSE;
    count_multisetindex = 1;
    pos_multisetindex[0][0] = TRUE;
    for (i = 1, j = 0 ; i < current_size; i++)
      if (CompareWeight(array[i-1],array[i])==0)
        pos_multisetindex[j][i] = TRUE;
      else
        { count_multisetindex++; pos_multisetindex[++j][i] = TRUE; }
  if (current_size == 1)
    {
      array[0].SimpleLimit(Perm);
    }
  else
    {


  // refinement -- checking priority in general
  while_guard = (count_multisetindex < current_size);
  while ( while_guard )
    {
      oldcount_multisetindex = count_multisetindex;
      while_guard = oldcount_multisetindex!=count_multisetindex;
      while_guard_temp = while_guard;
      while_guard = (count_multisetindex < current_size);
      while_guard = while_guard && while_guard_temp;
    } // end while
  }
}
void mu_1__type_2::Permute(PermSet& Perm, int i)
{
  static mu_1__type_2 temp("Permute_mu_1__type_2",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_2::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_2::Canonicalize(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  static mu_0_boolean value[3];
  int compare;
  // limit
  bool exists;
  bool split;
  // range mapping
  int start;
  int class_size;
  // canonicalization
  static mu_1__type_2 temp;
}
void mu_1__type_2::SimpleLimit(PermSet& Perm){}
void mu_1__type_2::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int compare;
  static mu_0_boolean value[3];
  // limit
  bool exists;
  bool split;
}
void mu_1__type_2::Limit(PermSet& Perm){}
void mu_1__type_2::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_3::Permute(PermSet& Perm, int i)
{
  static mu_1__type_3 temp("Permute_mu_1__type_3",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_3::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_3::Canonicalize(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  static mu_0_boolean value[3];
  int compare;
  // limit
  bool exists;
  bool split;
  // range mapping
  int start;
  int class_size;
  // canonicalization
  static mu_1__type_3 temp;
}
void mu_1__type_3::SimpleLimit(PermSet& Perm){}
void mu_1__type_3::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int compare;
  static mu_0_boolean value[3];
  // limit
  bool exists;
  bool split;
}
void mu_1__type_3::Limit(PermSet& Perm){}
void mu_1__type_3::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_4::Permute(PermSet& Perm, int i)
{
  static mu_1__type_4 temp("Permute_mu_1__type_4",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_4::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_4::Canonicalize(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  static mu_0_boolean value[3];
  int compare;
  // limit
  bool exists;
  bool split;
  // range mapping
  int start;
  int class_size;
  // canonicalization
  static mu_1__type_4 temp;
}
void mu_1__type_4::SimpleLimit(PermSet& Perm){}
void mu_1__type_4::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int compare;
  static mu_0_boolean value[3];
  // limit
  bool exists;
  bool split;
}
void mu_1__type_4::Limit(PermSet& Perm){}
void mu_1__type_4::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_5::Permute(PermSet& Perm, int i)
{
  static mu_1__type_5 temp("Permute_mu_1__type_5",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_5::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_5::Canonicalize(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  static mu_0_boolean value[3];
  int compare;
  // limit
  bool exists;
  bool split;
  // range mapping
  int start;
  int class_size;
  // canonicalization
  static mu_1__type_5 temp;
}
void mu_1__type_5::SimpleLimit(PermSet& Perm){}
void mu_1__type_5::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int compare;
  static mu_0_boolean value[3];
  // limit
  bool exists;
  bool split;
}
void mu_1__type_5::Limit(PermSet& Perm){}
void mu_1__type_5::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_6::Permute(PermSet& Perm, int i)
{
  static mu_1__type_6 temp("Permute_mu_1__type_6",-1);
  int j;
  for (j=0; j<3; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_6::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_6::Canonicalize(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  static mu_0_boolean value[3];
  int compare;
  // limit
  bool exists;
  bool split;
  // range mapping
  int start;
  int class_size;
  // canonicalization
  static mu_1__type_6 temp;
}
void mu_1__type_6::SimpleLimit(PermSet& Perm){}
void mu_1__type_6::ArrayLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // sorting
  int compare;
  static mu_0_boolean value[3];
  // limit
  bool exists;
  bool split;
}
void mu_1__type_6::Limit(PermSet& Perm){}
void mu_1__type_6::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1_Intruder::Permute(PermSet& Perm, int i)
{
};
void mu_1_Intruder::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Record with no scalarset variable\n"); };
void mu_1_Intruder::Canonicalize(PermSet& Perm)
{
};
void mu_1_Intruder::SimpleLimit(PermSet& Perm){}
void mu_1_Intruder::ArrayLimit(PermSet& Perm){}
void mu_1_Intruder::Limit(PermSet& Perm)
{
};
void mu_1_Intruder::MultisetLimit(PermSet& Perm)
{
  mu_messages.MultisetLimit(Perm);
};
void mu_1__type_7::Permute(PermSet& Perm, int i)
{
  static mu_1__type_7 temp("Permute_mu_1__type_7",-1);
  int j;
  for (j=0; j<10; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_7::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: calling SimpleCanonicalize for a multiset.\n"); };
void mu_1__type_7::Canonicalize(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1__type_7::SimpleLimit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1__type_7::ArrayLimit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1__type_7::Limit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1__type_7::MultisetLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // while guard
  bool while_guard, while_guard_temp;
  // sorting
  static mu_1_Message value[10];
  // limit
  bool exists;
  bool split;
  int i0;
  int count_multisetindex, oldcount_multisetindex;
  bool pos_multisetindex[10][10];
  bool goodset_multisetindex[10];
  mu_1_Message temp;

  // compact
  for (i = 0, j = 0; i < 10; i++)
    if (valid[i].value())
      {
        if (j!=i)
          array[j++] = array[i];
        else
          j++;
      }
  if (j != current_size) current_size = j;
  for (i = j; i < 10; i++)
    array[i].undefine();
  for (i = 0; i < j; i++)
    valid[i].value(TRUE);
  for (i = j; i < 10; i++)
    valid[i].value(FALSE);

  // bubble sort
  for (i = 0; i < current_size; i++)
    for (j = i+1; j < current_size; j++)
      if (CompareWeight(array[i],array[j])>0)
        {
          temp = array[i];
          array[i] = array[j];
          array[j] = temp;
        }
  // initializing pos array
    for (i=0; i<current_size; i++)
      for (j=0; j<current_size; j++)
        pos_multisetindex[i][j]=FALSE;
    count_multisetindex = 1;
    pos_multisetindex[0][0] = TRUE;
    for (i = 1, j = 0 ; i < current_size; i++)
      if (CompareWeight(array[i-1],array[i])==0)
        pos_multisetindex[j][i] = TRUE;
      else
        { count_multisetindex++; pos_multisetindex[++j][i] = TRUE; }
  if (current_size == 1)
    {
      array[0].SimpleLimit(Perm);
    }
  else
    {


  // refinement -- checking priority in general
  while_guard = (count_multisetindex < current_size);
  while ( while_guard )
    {
      oldcount_multisetindex = count_multisetindex;
      while_guard = oldcount_multisetindex!=count_multisetindex;
      while_guard_temp = while_guard;
      while_guard = (count_multisetindex < current_size);
      while_guard = while_guard && while_guard_temp;
    } // end while
  }
}
void mu_1__type_8::Permute(PermSet& Perm, int i)
{
  static mu_1__type_8 temp("Permute_mu_1__type_8",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_8::SimpleCanonicalize(PermSet& Perm)
{
  for (int j=0; j<1; j++)
    array[j].SimpleCanonicalize(Perm);
}
void mu_1__type_8::Canonicalize(PermSet& Perm){};
void mu_1__type_8::SimpleLimit(PermSet& Perm)
{
  for (int j=0; j<1; j++) {
    array[j].SimpleLimit(Perm);
  }
}
void mu_1__type_8::ArrayLimit(PermSet& Perm) {}
void mu_1__type_8::Limit(PermSet& Perm){}
void mu_1__type_8::MultisetLimit(PermSet& Perm)
{ Error.Error("Internal: calling MultisetLimit for scalarset array.\n"); };
void mu_1__type_9::Permute(PermSet& Perm, int i)
{
  static mu_1__type_9 temp("Permute_mu_1__type_9",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_9::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_9::Canonicalize(PermSet& Perm)
{
  for (int j=0; j<1; j++)
    array[j].Canonicalize(Perm);
}
void mu_1__type_9::SimpleLimit(PermSet& Perm){}
void mu_1__type_9::ArrayLimit(PermSet& Perm) {}
void mu_1__type_9::Limit(PermSet& Perm){}
void mu_1__type_9::MultisetLimit(PermSet& Perm)
{
  for (int j=0; j<1; j++) {
    array[j].MultisetLimit(Perm);
  }
}
void mu_1__type_10::Permute(PermSet& Perm, int i)
{
  static mu_1__type_10 temp("Permute_mu_1__type_10",-1);
  int j;
  for (j=0; j<1; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_10::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: Simple Canonicalization of Scalarset Array\n"); };
void mu_1__type_10::Canonicalize(PermSet& Perm)
{
  for (int j=0; j<1; j++)
    array[j].Canonicalize(Perm);
}
void mu_1__type_10::SimpleLimit(PermSet& Perm){}
void mu_1__type_10::ArrayLimit(PermSet& Perm) {}
void mu_1__type_10::Limit(PermSet& Perm){}
void mu_1__type_10::MultisetLimit(PermSet& Perm)
{
  for (int j=0; j<1; j++) {
    array[j].MultisetLimit(Perm);
  }
}
void mu_1__type_11::Permute(PermSet& Perm, int i)
{
  static mu_1__type_11 temp("Permute_mu_1__type_11",-1);
  int j;
  for (j=0; j<10; j++)
    array[j].Permute(Perm, i);
};
void mu_1__type_11::SimpleCanonicalize(PermSet& Perm)
{ Error.Error("Internal: calling SimpleCanonicalize for a multiset.\n"); };
void mu_1__type_11::Canonicalize(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1__type_11::SimpleLimit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1__type_11::ArrayLimit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1__type_11::Limit(PermSet& Perm)
{ Error.Error("You cannot use this symmetry algorithm with Multiset.\n"); };
void mu_1__type_11::MultisetLimit(PermSet& Perm)
{
  // indexes
  int i,j,k,z;
  // while guard
  bool while_guard, while_guard_temp;
  // sorting
  static mu_1_GlobalPairing value[10];
  // limit
  bool exists;
  bool split;
  int i0;
  int count_multisetindex, oldcount_multisetindex;
  bool pos_multisetindex[10][10];
  bool goodset_multisetindex[10];
  mu_1_GlobalPairing temp;

  // compact
  for (i = 0, j = 0; i < 10; i++)
    if (valid[i].value())
      {
        if (j!=i)
          array[j++] = array[i];
        else
          j++;
      }
  if (j != current_size) current_size = j;
  for (i = j; i < 10; i++)
    array[i].undefine();
  for (i = 0; i < j; i++)
    valid[i].value(TRUE);
  for (i = j; i < 10; i++)
    valid[i].value(FALSE);

  // bubble sort
  for (i = 0; i < current_size; i++)
    for (j = i+1; j < current_size; j++)
      if (CompareWeight(array[i],array[j])>0)
        {
          temp = array[i];
          array[i] = array[j];
          array[j] = temp;
        }
  // initializing pos array
    for (i=0; i<current_size; i++)
      for (j=0; j<current_size; j++)
        pos_multisetindex[i][j]=FALSE;
    count_multisetindex = 1;
    pos_multisetindex[0][0] = TRUE;
    for (i = 1, j = 0 ; i < current_size; i++)
      if (CompareWeight(array[i-1],array[i])==0)
        pos_multisetindex[j][i] = TRUE;
      else
        { count_multisetindex++; pos_multisetindex[++j][i] = TRUE; }
  if (current_size == 1)
    {
      array[0].SimpleLimit(Perm);
    }
  else
    {


  // refinement -- checking priority in general
  while_guard = (count_multisetindex < current_size);
  while ( while_guard )
    {
      oldcount_multisetindex = count_multisetindex;
      while_guard = oldcount_multisetindex!=count_multisetindex;
      while_guard_temp = while_guard;
      while_guard = (count_multisetindex < current_size);
      while_guard = while_guard && while_guard_temp;
    } // end while
  }
}

/********************
 Auxiliary function for error trace printing
 ********************/
bool match(state* ns, StatePtr p)
{
  int i;
  static PermSet Perm;
  static state temp;
  StateCopy(&temp, ns);
  if (args->symmetry_reduction.value)
    {
      if (  args->sym_alg.mode == argsym_alg::Exhaustive_Fast_Canonicalize) {
        Perm.ResetToExplicit();
        for (i=0; i<Perm.count; i++)
          if (Perm.In(i))
            {
              if (ns != workingstate)
                  StateCopy(workingstate, ns);
              
              mu_ini.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_ini.MultisetSort();
              mu_net.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_net.MultisetSort();
              mu_res.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_res.MultisetSort();
              mu_int.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_int.MultisetSort();
              mu_gpr.Permute(Perm,i);
              if (args->multiset_reduction.value)
                mu_gpr.MultisetSort();
            if (p.compare(workingstate)) {
              StateCopy(workingstate,&temp); return TRUE; }
          }
        StateCopy(workingstate,&temp);
        return FALSE;
      }
      else {
        Perm.ResetToSimple();
        Perm.SimpleToOne();
        if (ns != workingstate)
          StateCopy(workingstate, ns);

          mu_ini.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_ini.MultisetSort();
          mu_net.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_net.MultisetSort();
          mu_res.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_res.MultisetSort();
          mu_int.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_int.MultisetSort();
          mu_gpr.Permute(Perm,0);
          if (args->multiset_reduction.value)
            mu_gpr.MultisetSort();
        if (p.compare(workingstate)) {
          StateCopy(workingstate,&temp); return TRUE; }

        while (Perm.NextPermutation())
          {
            if (ns != workingstate)
              StateCopy(workingstate, ns);
              
              mu_ini.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_ini.MultisetSort();
              mu_net.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_net.MultisetSort();
              mu_res.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_res.MultisetSort();
              mu_int.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_int.MultisetSort();
              mu_gpr.Permute(Perm,0);
              if (args->multiset_reduction.value)
                mu_gpr.MultisetSort();
            if (p.compare(workingstate)) {
              StateCopy(workingstate,&temp); return TRUE; }
          }
        StateCopy(workingstate,&temp);
        return FALSE;
      }
    }
  if (!args->symmetry_reduction.value
      && args->multiset_reduction.value)
    {
      if (ns != workingstate)
          StateCopy(workingstate, ns);
      mu_ini.MultisetSort();
      mu_net.MultisetSort();
      mu_res.MultisetSort();
      mu_int.MultisetSort();
      mu_gpr.MultisetSort();
      if (p.compare(workingstate)) {
        StateCopy(workingstate,&temp); return TRUE; }
      StateCopy(workingstate,&temp);
      return FALSE;
    }
  return (p.compare(ns));
}

/********************
 Canonicalization by fast exhaustive generation of
 all permutations
 ********************/
void SymmetryClass::Exhaustive_Fast_Canonicalize(state* s)
{
  int i;
  static state temp;
  Perm.ResetToExplicit();

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_ini.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_ini.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_net.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_net.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_res.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_res.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_int.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_int.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

  StateCopy(&temp, workingstate);
  ResetBestResult();
  for (i=0; i<Perm.count; i++)
    if (Perm.In(i))
      {
        StateCopy(workingstate, &temp);
        mu_gpr.Permute(Perm,i);
        if (args->multiset_reduction.value)
          mu_gpr.MultisetSort();
        SetBestResult(i, workingstate);
      }
  StateCopy(workingstate, &BestPermutedState);

};

/********************
 Canonicalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and fast exhaustive generation of
 all permutations for other variables
 ********************/
void SymmetryClass::Heuristic_Fast_Canonicalize(state* s)
{
  int i;
  static state temp;

  Perm.ResetToSimple();

  mu_net.MultisetSort();

  mu_res.MultisetSort();

  mu_int.MultisetSort();

  mu_gpr.MultisetSort();

  if (Perm.MoreThanOneRemain()) {
    mu_ini.SimpleLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_net.MultisetLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_res.MultisetLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_int.MultisetLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_gpr.MultisetLimit(Perm);
  }

};

/********************
 Canonicalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and fast exhaustive generation of
 all permutations for other variables
 and use less local memory
 ********************/
void SymmetryClass::Heuristic_Small_Mem_Canonicalize(state* s)
{
  unsigned long cycle;
  static state temp;

  Perm.ResetToSimple();

  mu_net.MultisetSort();

  mu_res.MultisetSort();

  mu_int.MultisetSort();

  mu_gpr.MultisetSort();

  if (Perm.MoreThanOneRemain()) {
    mu_ini.SimpleLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_net.MultisetLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_res.MultisetLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_int.MultisetLimit(Perm);
  }

  if (Perm.MoreThanOneRemain()) {
    mu_gpr.MultisetLimit(Perm);
  }

};

/********************
 Normalization by fast simple variable canonicalization,
 fast simple scalarset array canonicalization,
 fast restriction on permutation set with simple scalarset array of scalarset,
 and for all other variables, pick any remaining permutation
 ********************/
void SymmetryClass::Heuristic_Fast_Normalize(state* s)
{
  int i;
  static state temp;

  Perm.ResetToSimple();

  mu_net.MultisetSort();

  mu_res.MultisetSort();

  mu_int.MultisetSort();

  mu_gpr.MultisetSort();

  if (Perm.MoreThanOneRemain()) {
    mu_ini.SimpleLimit(Perm);
  }

};

/********************
  Include
 ********************/
#include "mu_epilog.hpp"
