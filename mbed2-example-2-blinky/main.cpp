#include "mbed.h"


DigitalOut myleds[] = {LED1,LED2, LED3, LED4};

int main() 
{
  while(true) {
    myleds [0]= 1;
    wait(0.2);
    myleds [0]= 0;
    wait(0.2);
  }
}
