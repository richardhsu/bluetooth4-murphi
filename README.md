Bluetooth 4.0 Murphi Modeling
=============================

Murphi Model Checking of Bluetooth 4.0 Secure Simple Pairing

Running
=======

1. Run `make` in the directory after modifying any flags necessary.
2. To run the analysis run `./bt -ndl -tv -nosym`
3. You may need the optional `-m <size_in_mb>` flag to increase memory space.
   * Example: `./bt -ndl -tv -m 5000 -nosym` to allocate 5GB of memory.

Some Tasks to Remember
======================

* Add some table to run through increasing numbers and seeing failures/states.

Attack and Rules
================

Just Works
----------

* Require that the intruder intercepts be set to 10.
* Use regular rules for everything else.

Numeric Comparison
------------------

* With Any Responder: intruder intercept set to 10 and all other regular rules.


