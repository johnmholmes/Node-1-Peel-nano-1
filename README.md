# Node 1 spot detection arduino nano
 
The plans have changed and I will now use multiple arduino Nano's for spot detection instead of 1 Arduino mega
I feel this will remove some of the cabling and by adding them to the RS485 bus if the Arduino fails it will not mess up JMRI.

I will use only 16 sensors per Nano which leaves a few pins in case I need to add something later.

Pin 13 I have left out as this has the built in LED on it.

# The sketch is here for reference purposes only and only works with C/MRI using a USB lead or the module I use.

Node 2 has been added as its the same could with the Address change to 2 and sensor range is 17 to 32

There will also be a node 3 which will complete all the spot detection I need for the layout.
