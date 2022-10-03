/*
This sketch is here for demonstration purposes only feel free to try it out at your own risk. 
It has been tested on a Arduino Nano and the RS485 module I use and a USB cable. 

The JMRI address for the Node is 2 and the individual pin address is shown as a comment.

You will need to set the baud rate in JMRI to match this Node.

I would also advise choose a baud rate for all the nodes to be the same.

I do not need the Auto485 library for this to work. other RS485 modules available will require this library.
*/


#include <CMRI.h>

#define CMRI_ADDR 2                    //CMRI node address in JMRI

// Define CMRI connection with 16 inputs and 32 outputs no need for outputs in this case

CMRI cmri(CMRI_ADDR, 16, 32);

void setup() {
  
  Serial.begin(19200);                 // Make sure this value is set in JMRI for this node
  
    pinMode(2, INPUT_PULLUP);          //S17
    pinMode(3, INPUT_PULLUP);          //S18
    pinMode(4, INPUT_PULLUP);          //S19
    pinMode(5, INPUT_PULLUP);          //S20
    pinMode(6, INPUT_PULLUP);          //S21
    pinMode(7, INPUT_PULLUP);          //S22
    pinMode(8, INPUT_PULLUP);          //S23
    pinMode(9, INPUT_PULLUP);          //S24
    pinMode(10, INPUT_PULLUP);         //S25
    pinMode(11, INPUT_PULLUP);         //S26
    pinMode(12, INPUT_PULLUP);         //S27

    pinMode(A0, INPUT_PULLUP);         //S28
    pinMode(A1, INPUT_PULLUP);         //S29
    pinMode(A2, INPUT_PULLUP);         //S30
    pinMode(A3, INPUT_PULLUP);         //S31
    pinMode(A4, INPUT_PULLUP);         //S32
    pinMode(A5, INPUT_PULLUP);         // not used
    pinMode(A6, INPUT_PULLUP);         // not used
    pinMode(A6, INPUT_PULLUP);         // not used
    
}

void loop(){
   cmri.process();

   cmri.set_bit(0, !digitalRead(2));   // S1 = address 2001 in JMRI
   cmri.set_bit(1, !digitalRead(3));   // S2 = address 2002 in JMRI   
   cmri.set_bit(2, !digitalRead(4));   // S3 = address 2003 in JMRI   
   cmri.set_bit(3, !digitalRead(5));   // S4 = address 2004 in JMRI   
   cmri.set_bit(4, !digitalRead(6));   // S5 = address 2005 in JMRI   
   cmri.set_bit(5, !digitalRead(7));   // S6 = address 2006 in JMRI   
   cmri.set_bit(6, !digitalRead(8));   // S7 = address 2007 in JMRI   
   cmri.set_bit(7, !digitalRead(9));   // S8 = address 2008 in JMRI  
   cmri.set_bit(8, !digitalRead(10));  // S9 = address 2009 in JMRI  
   cmri.set_bit(9, !digitalRead(11));  // S10 = address 2010 in JMRI   
   cmri.set_bit(10, !digitalRead(12)); // S11 = address 2011 in JMRI

   cmri.set_bit(11, !digitalRead(A0)); // S12 = address 2012 in JMRI  
   cmri.set_bit(12, !digitalRead(A1)); // S13 = address 2013 in JMRI 
   cmri.set_bit(13, !digitalRead(A2)); // S14 = address 2014 in JMRI
   cmri.set_bit(14, !digitalRead(A3)); // S15 = address 2015 in JMRI
   cmri.set_bit(15, !digitalRead(A4)); // S16 = address 2016 in JMRI
}
   
