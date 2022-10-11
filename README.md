# Node 1 Peel turnout and signls and 5 infra red sensors

This Node leaves a number of pins not used on the Arduino Nano these may get used for platform lighting to be controlled through Jmri
and using a mosfet to allow high voltage and current than the ardion Nono can provide.

The turnout servo is on pin 2 it uses slomotion for movement which Chris Sharp helped me with

There is a feedback from the Nano which changes with the servo being thrown or closed by Jmri also on start up a single bit get sent to Jmri so it 
knows the status of the trunout 

There are 3 TMC 2 aspect signals 

I also use 5 infra-red sensors for spot detection

I may add 2 uncouplers to the section using servos these can be added to the sketch very easily if I go ahead with this idea.
