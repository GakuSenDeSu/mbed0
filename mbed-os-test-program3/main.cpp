#include "mbed.h"

DigitalOut redLED(LED_RED);
DigitalOut greenLED(LED_GREEN);

int Led(DigitalOut& ledpin);

int main()
{
   redLED = 1;

   greenLED = 1;
   
   while (true) {
       //red LED blink for 3 times
       for(int i=0; i<6; ++i) {
       redLED=!redLED;
       wait(0.2f);
       }
       //green LED blink for 2 times
       for (int i=0; i<2; ++i) {
       greenLED=!greenLED;
       wait(0.2f);
       }
   }
}