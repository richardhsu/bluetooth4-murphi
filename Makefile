# CS 259 Winter 2013 Project
# Bluetooth 4.0 Murphi Modeling of SSP
#
# David (Wei) Jia and Richard Hsu

MURPHI = /bin/mu

CXX = g++ -DCATCH_DIV -fno-default-inline -Wno-deprecated                           
INCLUDE = /include/                                                               
                                                                                    
bt: bt.cpp                                                                          
	  ${CXX} -I${INCLUDE} bt.cpp -o ns -lm                                              
		                                                                                    
bt.cpp: bt.m                                                                        
	  ${MURPHI} ${MOPTS} bt.m                                                           
		                                                                                    
clean:                                                                              
	  rm -f bt bt.cpp    
