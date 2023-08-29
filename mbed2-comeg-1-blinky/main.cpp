#include "mbed.h"

 RawSerial pc(USBTX,USBRX,9600);

int main (){
    while (true){
        pc.printf("Hello World!!\r\n");
        wait(1.0);
    }
}