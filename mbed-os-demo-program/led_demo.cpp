#include "mbed.h"


void Led(DigitalOut& ledpin)

{

   for(int i=0; i<6; ++i) { //blink for 6 times

       ledpin = !ledpin; // toggle led

       wait(0.2f);

   }
   for(int j=0; i<8; ++i) { //blink for 4 times
   
       ledpin = !ledpin;

       wait(0.2f);
   }

}