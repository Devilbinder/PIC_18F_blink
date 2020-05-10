#include <xc.h>
#include <pic18f4520.h>
#include "conbits.h"

void main(void) {
    TRISB=0; //0b00000000
    
    while(1){
        LATB=0; //0b00000000
        __delay_ms(250);
        LATB=1; //0b00000001
        __delay_ms(250);

    }
    
}
