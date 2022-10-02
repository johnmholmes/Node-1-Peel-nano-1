/*
This sketch is here for demonstration purposes only feel free to try it out at your own risk. 
It has been tested on a Arduino Nano and the RS485 module I use and a USB cable. 

The JMRI address for the Node is 1 and the individual pin address is shown as a comment.

You will need to set the baud rate in JMRI to match this Node.

I would also advise choose a baud rate for all the nodes to be the same.

I do not need the Auto485 library for this to work. other RS485 modules available will require this library.
*/


#include <CMRI.h>

#define CMRI_ADDR 1 //CMRI node address in JMRI

// Define CMRI connection with 24 inputs and 64 outputs no need for outputs in this case
CMRI cmri(CMRI_ADDR, 24, 64);

void setup() {
  
  Serial.begin(19200);                     // Make sure this value is set in JMRI for this node
  
    pinMode(2, INPUT_PULLUP);
    pinMode(3, INPUT_PULLUP);
    pinMode(4, INPUT_PULLUP);
    pinMode(5, INPUT_PULLUP);
    pinMode(6, INPUT_PULLUP);
    pinMode(7, INPUT_PULLUP);
    pinMode(8, INPUT_PULLUP);
    pinMode(9, INPUT_PULLUP);
    pinMode(10, INPUT_PULLUP);
    pinMode(11, INPUT_PULLUP);
    pinMode(12, INPUT_PULLUP);

    pinMode(A0, INPUT_PULLUP);
    pinMode(A1, INPUT_PULLUP);
    pinMode(A2, INPUT_PULLUP);
    pinMode(A3, INPUT_PULLUP);
    pinMode(A4, INPUT_PULLUP);
    pinMode(A5, INPUT_PULLUP);             // not used
    pinMode(A6, INPUT_PULLUP);             // not used
    pinMode(A6, INPUT_PULLUP);             // not used
    
}

void loop(){
   cmri.process();

   cmri.set_bit(0, !digitalRead(2));   // S1 = address 1001 in JMRI
   cmri.set_bit(1, !digitalRead(3));   // S2 = address 1002 in JMRI   
   cmri.set_bit(2, !digitalRead(4));   // S3 = address 1003 in JMRI   
   cmri.set_bit(3, !digitalRead(5));   // S4 = address 1004 in JMRI   
   cmri.set_bit(4, !digitalRead(6));   // S5 = address 1005 in JMRI   
   cmri.set_bit(5, !digitalRead(7));   // S6 = address 1006 in JMRI   
   cmri.set_bit(6, !digitalRead(8));   // S7 = address 1007 in JMRI   
   cmri.set_bit(7, !digitalRead(9));   // S8 = address 1008 in JMRI  
   cmri.set_bit(8, !digitalRead(10));  // S9 = address 1009 in JMRI  
   cmri.set_bit(9, !digitalRead(11));  // S10 = address 1010 in JMRI   
   cmri.set_bit(10, !digitalRead(12)); // S11 = address 1011 in JMRI

   cmri.set_bit(11, !digitalRead(A0)); // S12 = address 1012 in JMRI  
   cmri.set_bit(12, !digitalRead(A1)); // S13 = address 1013 in JMRI 
   cmri.set_bit(13, !digitalRead(A2)); // S14 = address 1014 in JMRI
   cmri.set_bit(14, !digitalRead(A3)); // S14 = address 1015 in JMRI
   cmri.set_bit(15, !digitalRead(A4)); // S14 = address 1016 in JMRI
}
   
