#include "mcc_generated_files/system/system.h"
void show_digit(uint8_t digit){
        switch (digit){
            case 0:
                SEG_A_SetLow(); //Turn On Segment A
                SEG_B_SetLow(); //Turn On Segment B
                SEG_C_SetLow(); //Turn On Segment C
                SEG_D_SetLow(); //Turn On Segment D
                SEG_E_SetLow(); //Turn On Segment E
                SEG_F_SetLow(); //Turn On Segment F
                SEG_G_SetHigh(); //Turn Off Segment G                
                break;
            case 1:
                SEG_A_SetHigh(); //Turn OFF Segment A
                SEG_B_SetLow(); //Turn On Segment B
                SEG_C_SetLow(); //Turn On Segment C
                SEG_D_SetHigh(); //Turn OFF Segment D
                SEG_E_SetHigh(); //Turn OFF Segment E
                SEG_F_SetHigh(); //Turn OFF Segment F
                SEG_G_SetHigh(); //Turn OFF Segment G
                break;
            case 2:
                SEG_A_SetLow(); //Turn ON Segment A
                SEG_B_SetLow(); //Turn ON Segment B
                SEG_C_SetHigh(); //Turn OFF Segment C
                SEG_D_SetLow(); //Turn ON Segment D
                SEG_E_SetLow(); //Turn ON Segment E
                SEG_F_SetHigh(); //Turn OFF Segment F
                SEG_G_SetLow(); //Turn ON Segment G
                break;
            case 3:
                SEG_A_SetLow(); //Turn On Segment A
                SEG_B_SetLow(); //Turn On Segment B
                SEG_C_SetLow(); //Turn On Segment C
                SEG_D_SetLow(); //Turn On Segment D
                SEG_E_SetHigh(); //Turn OFF Segment E
                SEG_F_SetHigh(); //Turn OFF Segment F
                SEG_G_SetLow(); //Turn ON Segment G 
                break;
            case 4:
                SEG_A_SetHigh(); //Turn off Segment A
                SEG_B_SetLow(); //Turn On Segment B
                SEG_C_SetLow(); //Turn On Segment C
                SEG_D_SetHigh(); //Turn OFF Segment D
                SEG_E_SetHigh(); //Turn OFF Segment E
                SEG_F_SetLow(); //Turn On Segment F
                SEG_G_SetLow(); //Turn ON Segment G 
                break;
            case 5:
                SEG_A_SetHigh(); //Turn OFF Segment A
                SEG_B_SetLow(); //Turn On Segment B
                SEG_C_SetLow(); //Turn On Segment C
                SEG_D_SetHigh(); //Turn OFF Segment D
                SEG_E_SetHigh(); //Turn OFF Segment E
                SEG_F_SetHigh(); //Turn OFF Segment F
                SEG_G_SetHigh(); //Turn OFF Segment G
                break;
            case 6:
                SEG_A_SetHigh(); //Turn Off Segment A
                SEG_B_SetHigh(); //Turn Off Segment B
                SEG_C_SetLow(); //Turn On Segment C
                SEG_D_SetLow(); //Turn On Segment D
                SEG_E_SetLow(); //Turn on Segment E
                SEG_F_SetLow(); //Turn On Segment F
                SEG_G_SetLow(); //Turn On Segment G 
                break;
            case 7:
                SEG_A_SetLow(); //Turn On Segment A
                SEG_B_SetLow(); //Turn On Segment B
                SEG_C_SetLow(); //Turn On Segment C
                SEG_D_SetLow(); //Turn On Segment D
                SEG_E_SetHigh(); //Turn Off Segment E
                SEG_F_SetHigh(); //Turn Off Segment F
                SEG_G_SetHigh(); //Turn Off Segment G 
                break;
            case 8:
                SEG_A_SetLow(); //Turn 0n Segment A
                SEG_B_SetLow(); //Turn On Segment B
                SEG_C_SetLow(); //Turn On Segment C
                SEG_D_SetLow(); //Turn On Segment D
                SEG_E_SetLow(); //Turn on Segment E
                SEG_F_SetLow(); //Turn On Segment F
                SEG_G_SetLow(); //Turn On Segment G 
                break;
            case 9:
                SEG_A_SetLow(); //Turn 0n Segment A
                SEG_B_SetLow(); //Turn On Segment B
                SEG_C_SetLow(); //Turn On Segment C
                SEG_D_SetHigh(); //Turn Off Segment D
                SEG_E_SetHigh(); //Turn Off Segment E
                SEG_F_SetLow(); //Turn On Segment F
                SEG_G_SetLow(); //Turn On Segment G 
                break;
        }
    }

/*
    Main application
*/
uint16_t number = 888;
uint8_t digit=0;
int main(void)
{
    
    SYSTEM_Initialize();    
    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts 
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global Interrupts 
    // Use the following macros to: 

    // Enable the Global Interrupts 
    //INTERRUPT_GlobalInterruptEnable(); 

    // Disable the Global Interrupts 
    //INTERRUPT_GlobalInterruptDisable(); 
    
    while(1)
    {
        DIG_1_SetLow(); //Turn off digit 1
        DIG_2_SetLow(); //Turn off digit 2
        DIG_3_SetLow(); //Turn off digit 3
        
        switch(digit){
            case 0:
                show_digit(number/100); //Display the hundreds
                DIG_1_SetHigh();        //Turn on Digit 1
                break;
            case 1:
                show_digit((number % 100)/ 10); // Display the tens
                DIG_2_SetHigh();       // Turn on Digit 2
                break;
            case 2:
                show_digit(number%10); // Display the ones
                DIG_3_SetHigh();        // Turn on digit 3
                break;
        }
        __delay_ms(500);
        digit ++;
        if (digit >2){
            digit = 0;
        }
    }
    
}