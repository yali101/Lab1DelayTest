// ******************************************************************************************* //
//
// File:         lab1p2.c
// Date:         12-30-2014
// Authors:      Garrett Vanhoy
//
// Description: 
// ******************************************************************************************* //

#include <xc.h>
#include <sys/attribs.h>
#include "lcd.h"
#include "timer.h"
#include "config.h"
#include "interrupt.h"

#define OUTPUT 0
#define INPUT 1
// ******************************************************************************************* //

int main(void)
{
    SYSTEMConfigPerformance(10000000);
    
    TRISDbits.TRISD7 = OUTPUT;
    
    LATDbits.LATD7 = 0;
    while(1)
    {
        
      LATDbits.LATD7 = 1; 
      
      delayUs(100);
      
      LATDbits.LATD7 = 0;
      
      delayUs(200);
      
    }
    return 0;
}
