#include <CMRI.h>

#define CMRI_ADDR 1 //CMRI node address in JMRI

// Define CMRI connection with 24 inputs and 64 outputs no need for outputs in this case
CMRI cmri(CMRI_ADDR, 24, 64);

void setup() {
  
  Serial.begin(19200);                     // Make sure this value is set in JMRI for this node
  
  for (int i=2; i<13; i++)  {
          pinMode(i, INPUT_PULLUP);        // define sensor shield pins 2 to 13 as inputs
        } 

    pinMode(A1, INPUT_PULLUP);
    pinMode(A1, INPUT_PULLUP);
    pinMode(A2, INPUT_PULLUP);
    pinMode(A3, INPUT_PULLUP);             // not used
    pinMode(A4, INPUT_PULLUP);             // not used
    pinMode(A5, INPUT_PULLUP);             // not used
    pinMode(A6, INPUT_PULLUP);             // not used
    pinMode(A6, INPUT_PULLUP);             // not used
    
}

void loop(){
   cmri.process();

   cmri.set_bit(0, !digitalRead(3));   // S1 = address 1001 in JMRI
   cmri.set_bit(1, !digitalRead(4));   
   cmri.set_bit(2, !digitalRead(5));   
   cmri.set_bit(3, !digitalRead(6));   
   cmri.set_bit(4, !digitalRead(7));   
   cmri.set_bit(5, !digitalRead(8));   
   cmri.set_bit(6, !digitalRead(9));   
   cmri.set_bit(7, !digitalRead(10));  
   cmri.set_bit(8, !digitalRead(11));  
   cmri.set_bit(9, !digitalRead(12));   
   cmri.set_bit(10, !digitalRead(13));
   cmri.set_bit(10, !digitalRead(A0));  
   cmri.set_bit(11, !digitalRead(A1)); 
   cmri.set_bit(12, !digitalRead(A2));  // S16 = address 1016 in JMRI
}
   
