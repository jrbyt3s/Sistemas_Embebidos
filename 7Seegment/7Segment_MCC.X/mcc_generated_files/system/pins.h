/**
 * Generated Pins header File
 * 
 * @file pins.h
 * 
 * @defgroup  pinsdriver Pins Driver
 * 
 * @brief This is generated driver header for pins. 
 *        This header file provides APIs for all pins selected in the GUI.
 *
 * @version Driver Version  3.1.0
*/

/*
© [2024] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#ifndef PINS_H
#define PINS_H

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RC0 aliases
#define SEG_DP_TRIS                 TRISCbits.TRISC0
#define SEG_DP_LAT                  LATCbits.LATC0
#define SEG_DP_PORT                 PORTCbits.RC0
#define SEG_DP_WPU                  WPUCbits.WPUC0
#define SEG_DP_OD                   ODCONCbits.ODCC0
#define SEG_DP_ANS                  ANSELCbits.ANSELC0
#define SEG_DP_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define SEG_DP_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define SEG_DP_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define SEG_DP_GetValue()           PORTCbits.RC0
#define SEG_DP_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define SEG_DP_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define SEG_DP_SetPullup()          do { WPUCbits.WPUC0 = 1; } while(0)
#define SEG_DP_ResetPullup()        do { WPUCbits.WPUC0 = 0; } while(0)
#define SEG_DP_SetPushPull()        do { ODCONCbits.ODCC0 = 0; } while(0)
#define SEG_DP_SetOpenDrain()       do { ODCONCbits.ODCC0 = 1; } while(0)
#define SEG_DP_SetAnalogMode()      do { ANSELCbits.ANSELC0 = 1; } while(0)
#define SEG_DP_SetDigitalMode()     do { ANSELCbits.ANSELC0 = 0; } while(0)

// get/set RC1 aliases
#define SEG_C_TRIS                 TRISCbits.TRISC1
#define SEG_C_LAT                  LATCbits.LATC1
#define SEG_C_PORT                 PORTCbits.RC1
#define SEG_C_WPU                  WPUCbits.WPUC1
#define SEG_C_OD                   ODCONCbits.ODCC1
#define SEG_C_ANS                  ANSELCbits.ANSELC1
#define SEG_C_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define SEG_C_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define SEG_C_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define SEG_C_GetValue()           PORTCbits.RC1
#define SEG_C_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define SEG_C_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define SEG_C_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define SEG_C_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define SEG_C_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define SEG_C_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define SEG_C_SetAnalogMode()      do { ANSELCbits.ANSELC1 = 1; } while(0)
#define SEG_C_SetDigitalMode()     do { ANSELCbits.ANSELC1 = 0; } while(0)

// get/set RC2 aliases
#define SEG_G_TRIS                 TRISCbits.TRISC2
#define SEG_G_LAT                  LATCbits.LATC2
#define SEG_G_PORT                 PORTCbits.RC2
#define SEG_G_WPU                  WPUCbits.WPUC2
#define SEG_G_OD                   ODCONCbits.ODCC2
#define SEG_G_ANS                  ANSELCbits.ANSELC2
#define SEG_G_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define SEG_G_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define SEG_G_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define SEG_G_GetValue()           PORTCbits.RC2
#define SEG_G_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define SEG_G_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define SEG_G_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define SEG_G_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define SEG_G_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define SEG_G_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define SEG_G_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define SEG_G_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set RC3 aliases
#define SEG_A_TRIS                 TRISCbits.TRISC3
#define SEG_A_LAT                  LATCbits.LATC3
#define SEG_A_PORT                 PORTCbits.RC3
#define SEG_A_WPU                  WPUCbits.WPUC3
#define SEG_A_OD                   ODCONCbits.ODCC3
#define SEG_A_ANS                  ANSELCbits.ANSELC3
#define SEG_A_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define SEG_A_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define SEG_A_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define SEG_A_GetValue()           PORTCbits.RC3
#define SEG_A_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define SEG_A_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define SEG_A_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define SEG_A_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define SEG_A_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define SEG_A_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define SEG_A_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define SEG_A_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set RC4 aliases
#define SEG_D_TRIS                 TRISCbits.TRISC4
#define SEG_D_LAT                  LATCbits.LATC4
#define SEG_D_PORT                 PORTCbits.RC4
#define SEG_D_WPU                  WPUCbits.WPUC4
#define SEG_D_OD                   ODCONCbits.ODCC4
#define SEG_D_ANS                  ANSELCbits.ANSELC4
#define SEG_D_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define SEG_D_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define SEG_D_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define SEG_D_GetValue()           PORTCbits.RC4
#define SEG_D_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define SEG_D_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define SEG_D_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define SEG_D_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define SEG_D_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define SEG_D_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define SEG_D_SetAnalogMode()      do { ANSELCbits.ANSELC4 = 1; } while(0)
#define SEG_D_SetDigitalMode()     do { ANSELCbits.ANSELC4 = 0; } while(0)

// get/set RC5 aliases
#define SEG_E_TRIS                 TRISCbits.TRISC5
#define SEG_E_LAT                  LATCbits.LATC5
#define SEG_E_PORT                 PORTCbits.RC5
#define SEG_E_WPU                  WPUCbits.WPUC5
#define SEG_E_OD                   ODCONCbits.ODCC5
#define SEG_E_ANS                  ANSELCbits.ANSELC5
#define SEG_E_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define SEG_E_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define SEG_E_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define SEG_E_GetValue()           PORTCbits.RC5
#define SEG_E_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define SEG_E_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define SEG_E_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define SEG_E_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define SEG_E_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define SEG_E_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define SEG_E_SetAnalogMode()      do { ANSELCbits.ANSELC5 = 1; } while(0)
#define SEG_E_SetDigitalMode()     do { ANSELCbits.ANSELC5 = 0; } while(0)

// get/set RC6 aliases
#define SEG_F_TRIS                 TRISCbits.TRISC6
#define SEG_F_LAT                  LATCbits.LATC6
#define SEG_F_PORT                 PORTCbits.RC6
#define SEG_F_WPU                  WPUCbits.WPUC6
#define SEG_F_OD                   ODCONCbits.ODCC6
#define SEG_F_ANS                  ANSELCbits.ANSELC6
#define SEG_F_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define SEG_F_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define SEG_F_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define SEG_F_GetValue()           PORTCbits.RC6
#define SEG_F_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define SEG_F_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define SEG_F_SetPullup()          do { WPUCbits.WPUC6 = 1; } while(0)
#define SEG_F_ResetPullup()        do { WPUCbits.WPUC6 = 0; } while(0)
#define SEG_F_SetPushPull()        do { ODCONCbits.ODCC6 = 0; } while(0)
#define SEG_F_SetOpenDrain()       do { ODCONCbits.ODCC6 = 1; } while(0)
#define SEG_F_SetAnalogMode()      do { ANSELCbits.ANSELC6 = 1; } while(0)
#define SEG_F_SetDigitalMode()     do { ANSELCbits.ANSELC6 = 0; } while(0)

// get/set RC7 aliases
#define SEG_B_TRIS                 TRISCbits.TRISC7
#define SEG_B_LAT                  LATCbits.LATC7
#define SEG_B_PORT                 PORTCbits.RC7
#define SEG_B_WPU                  WPUCbits.WPUC7
#define SEG_B_OD                   ODCONCbits.ODCC7
#define SEG_B_ANS                  ANSELCbits.ANSELC7
#define SEG_B_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define SEG_B_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define SEG_B_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define SEG_B_GetValue()           PORTCbits.RC7
#define SEG_B_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define SEG_B_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define SEG_B_SetPullup()          do { WPUCbits.WPUC7 = 1; } while(0)
#define SEG_B_ResetPullup()        do { WPUCbits.WPUC7 = 0; } while(0)
#define SEG_B_SetPushPull()        do { ODCONCbits.ODCC7 = 0; } while(0)
#define SEG_B_SetOpenDrain()       do { ODCONCbits.ODCC7 = 1; } while(0)
#define SEG_B_SetAnalogMode()      do { ANSELCbits.ANSELC7 = 1; } while(0)
#define SEG_B_SetDigitalMode()     do { ANSELCbits.ANSELC7 = 0; } while(0)

// get/set RF5 aliases
#define DIG_1_TRIS                 TRISFbits.TRISF5
#define DIG_1_LAT                  LATFbits.LATF5
#define DIG_1_PORT                 PORTFbits.RF5
#define DIG_1_WPU                  WPUFbits.WPUF5
#define DIG_1_OD                   ODCONFbits.ODCF5
#define DIG_1_ANS                  ANSELFbits.ANSELF5
#define DIG_1_SetHigh()            do { LATFbits.LATF5 = 1; } while(0)
#define DIG_1_SetLow()             do { LATFbits.LATF5 = 0; } while(0)
#define DIG_1_Toggle()             do { LATFbits.LATF5 = ~LATFbits.LATF5; } while(0)
#define DIG_1_GetValue()           PORTFbits.RF5
#define DIG_1_SetDigitalInput()    do { TRISFbits.TRISF5 = 1; } while(0)
#define DIG_1_SetDigitalOutput()   do { TRISFbits.TRISF5 = 0; } while(0)
#define DIG_1_SetPullup()          do { WPUFbits.WPUF5 = 1; } while(0)
#define DIG_1_ResetPullup()        do { WPUFbits.WPUF5 = 0; } while(0)
#define DIG_1_SetPushPull()        do { ODCONFbits.ODCF5 = 0; } while(0)
#define DIG_1_SetOpenDrain()       do { ODCONFbits.ODCF5 = 1; } while(0)
#define DIG_1_SetAnalogMode()      do { ANSELFbits.ANSELF5 = 1; } while(0)
#define DIG_1_SetDigitalMode()     do { ANSELFbits.ANSELF5 = 0; } while(0)

// get/set RF6 aliases
#define DIG_2_TRIS                 TRISFbits.TRISF6
#define DIG_2_LAT                  LATFbits.LATF6
#define DIG_2_PORT                 PORTFbits.RF6
#define DIG_2_WPU                  WPUFbits.WPUF6
#define DIG_2_OD                   ODCONFbits.ODCF6
#define DIG_2_ANS                  ANSELFbits.ANSELF6
#define DIG_2_SetHigh()            do { LATFbits.LATF6 = 1; } while(0)
#define DIG_2_SetLow()             do { LATFbits.LATF6 = 0; } while(0)
#define DIG_2_Toggle()             do { LATFbits.LATF6 = ~LATFbits.LATF6; } while(0)
#define DIG_2_GetValue()           PORTFbits.RF6
#define DIG_2_SetDigitalInput()    do { TRISFbits.TRISF6 = 1; } while(0)
#define DIG_2_SetDigitalOutput()   do { TRISFbits.TRISF6 = 0; } while(0)
#define DIG_2_SetPullup()          do { WPUFbits.WPUF6 = 1; } while(0)
#define DIG_2_ResetPullup()        do { WPUFbits.WPUF6 = 0; } while(0)
#define DIG_2_SetPushPull()        do { ODCONFbits.ODCF6 = 0; } while(0)
#define DIG_2_SetOpenDrain()       do { ODCONFbits.ODCF6 = 1; } while(0)
#define DIG_2_SetAnalogMode()      do { ANSELFbits.ANSELF6 = 1; } while(0)
#define DIG_2_SetDigitalMode()     do { ANSELFbits.ANSELF6 = 0; } while(0)

// get/set RF7 aliases
#define DIG_3_TRIS                 TRISFbits.TRISF7
#define DIG_3_LAT                  LATFbits.LATF7
#define DIG_3_PORT                 PORTFbits.RF7
#define DIG_3_WPU                  WPUFbits.WPUF7
#define DIG_3_OD                   ODCONFbits.ODCF7
#define DIG_3_ANS                  ANSELFbits.ANSELF7
#define DIG_3_SetHigh()            do { LATFbits.LATF7 = 1; } while(0)
#define DIG_3_SetLow()             do { LATFbits.LATF7 = 0; } while(0)
#define DIG_3_Toggle()             do { LATFbits.LATF7 = ~LATFbits.LATF7; } while(0)
#define DIG_3_GetValue()           PORTFbits.RF7
#define DIG_3_SetDigitalInput()    do { TRISFbits.TRISF7 = 1; } while(0)
#define DIG_3_SetDigitalOutput()   do { TRISFbits.TRISF7 = 0; } while(0)
#define DIG_3_SetPullup()          do { WPUFbits.WPUF7 = 1; } while(0)
#define DIG_3_ResetPullup()        do { WPUFbits.WPUF7 = 0; } while(0)
#define DIG_3_SetPushPull()        do { ODCONFbits.ODCF7 = 0; } while(0)
#define DIG_3_SetOpenDrain()       do { ODCONFbits.ODCF7 = 1; } while(0)
#define DIG_3_SetAnalogMode()      do { ANSELFbits.ANSELF7 = 1; } while(0)
#define DIG_3_SetDigitalMode()     do { ANSELFbits.ANSELF7 = 0; } while(0)

/**
 * @ingroup  pinsdriver
 * @brief GPIO and peripheral I/O initialization
 * @param none
 * @return none
 */
void PIN_MANAGER_Initialize (void);

/**
 * @ingroup  pinsdriver
 * @brief Interrupt on Change Handling routine
 * @param none
 * @return none
 */
void PIN_MANAGER_IOC(void);


#endif // PINS_H
/**
 End of File
*/