#include "mbed.h"
DigitalOut conv(PA_4);
int main()
{
    while(true){
        conv = 1;
        wait_ms(5000);
        conv = 0;
        wait_ms(5000);
    }
    
}