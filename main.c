//
// main.c - Blinking LED example for ARM LPC1114
// Written by Ted Burke (based on code by Frank Duignan)
// Last updated 29-11-2013
//

#include "lpc111x.h"
#include <stdint.h>

//uint8_t global[30];
int main()
{
    // Turn on clock for GPIO, IOCON and ADC
    SYSAHBCLKCTRL |= BIT6 + BIT13 + BIT16;
    GPIO0DIR = BIT8; // Make PIO0_8 an output
    GPIO0DATA = 0;   // Turn off PIO0 outputs

    int n;
    while(1)
    {
        GPIO0DATA = BIT8; // Turn on PIO0_8
        n=1000000; while(--n);
        GPIO0DATA = 0;    // Turn on PIO0_8
        n=1000000; while(--n);
    }
}
