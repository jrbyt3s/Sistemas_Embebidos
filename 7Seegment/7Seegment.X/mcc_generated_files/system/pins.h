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

// get/set RC2 aliases
#define SEG_A_TRIS                 TRISCbits.TRISC2
#define SEG_A_LAT                  LATCbits.LATC2
#define SEG_A_PORT                 PORTCbits.RC2
#define SEG_A_WPU                  WPUCbits.WPUC2
#define SEG_A_OD                   ODCONCbits.ODCC2
#define SEG_A_ANS                  ANSELCbits.ANSELC2
#define SEG_A_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define SEG_A_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define SEG_A_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define SEG_A_GetValue()           PORTCbits.RC2
#define SEG_A_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define SEG_A_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define SEG_A_SetPullup()          do { WPUCbits.WPUC2 = 1; } while(0)
#define SEG_A_ResetPullup()        do { WPUCbits.WPUC2 = 0; } while(0)
#define SEG_A_SetPushPull()        do { ODCONCbits.ODCC2 = 0; } while(0)
#define SEG_A_SetOpenDrain()       do { ODCONCbits.ODCC2 = 1; } while(0)
#define SEG_A_SetAnalogMode()      do { ANSELCbits.ANSELC2 = 1; } while(0)
#define SEG_A_SetDigitalMode()     do { ANSELCbits.ANSELC2 = 0; } while(0)

// get/set RC3 aliases
#define SEG_B_TRIS                 TRISCbits.TRISC3
#define SEG_B_LAT                  LATCbits.LATC3
#define SEG_B_PORT                 PORTCbits.RC3
#define SEG_B_WPU                  WPUCbits.WPUC3
#define SEG_B_OD                   ODCONCbits.ODCC3
#define SEG_B_ANS                  ANSELCbits.ANSELC3
#define SEG_B_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define SEG_B_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define SEG_B_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define SEG_B_GetValue()           PORTCbits.RC3
#define SEG_B_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define SEG_B_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define SEG_B_SetPullup()          do { WPUCbits.WPUC3 = 1; } while(0)
#define SEG_B_ResetPullup()        do { WPUCbits.WPUC3 = 0; } while(0)
#define SEG_B_SetPushPull()        do { ODCONCbits.ODCC3 = 0; } while(0)
#define SEG_B_SetOpenDrain()       do { ODCONCbits.ODCC3 = 1; } while(0)
#define SEG_B_SetAnalogMode()      do { ANSELCbits.ANSELC3 = 1; } while(0)
#define SEG_B_SetDigitalMode()     do { ANSELCbits.ANSELC3 = 0; } while(0)

// get/set RD2 aliases
#define SEG_G_TRIS                 TRISDbits.TRISD2
#define SEG_G_LAT                  LATDbits.LATD2
#define SEG_G_PORT                 PORTDbits.RD2
#define SEG_G_WPU                  WPUDbits.WPUD2
#define SEG_G_OD                   ODCONDbits.ODCD2
#define SEG_G_ANS                  ANSELDbits.ANSELD2
#define SEG_G_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define SEG_G_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define SEG_G_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define SEG_G_GetValue()           PORTDbits.RD2
#define SEG_G_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define SEG_G_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define SEG_G_SetPullup()          do { WPUDbits.WPUD2 = 1; } while(0)
#define SEG_G_ResetPullup()        do { WPUDbits.WPUD2 = 0; } while(0)
#define SEG_G_SetPushPull()        do { ODCONDbits.ODCD2 = 0; } while(0)
#define SEG_G_SetOpenDrain()       do { ODCONDbits.ODCD2 = 1; } while(0)
#define SEG_G_SetAnalogMode()      do { ANSELDbits.ANSELD2 = 1; } while(0)
#define SEG_G_SetDigitalMode()     do { ANSELDbits.ANSELD2 = 0; } while(0)

// get/set RD3 aliases
#define SEG_F_TRIS                 TRISDbits.TRISD3
#define SEG_F_LAT                  LATDbits.LATD3
#define SEG_F_PORT                 PORTDbits.RD3
#define SEG_F_WPU                  WPUDbits.WPUD3
#define SEG_F_OD                   ODCONDbits.ODCD3
#define SEG_F_ANS                  ANSELDbits.ANSELD3
#define SEG_F_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define SEG_F_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define SEG_F_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define SEG_F_GetValue()           PORTDbits.RD3
#define SEG_F_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define SEG_F_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define SEG_F_SetPullup()          do { WPUDbits.WPUD3 = 1; } while(0)
#define SEG_F_ResetPullup()        do { WPUDbits.WPUD3 = 0; } while(0)
#define SEG_F_SetPushPull()        do { ODCONDbits.ODCD3 = 0; } while(0)
#define SEG_F_SetOpenDrain()       do { ODCONDbits.ODCD3 = 1; } while(0)
#define SEG_F_SetAnalogMode()      do { ANSELDbits.ANSELD3 = 1; } while(0)
#define SEG_F_SetDigitalMode()     do { ANSELDbits.ANSELD3 = 0; } while(0)

// get/set RF2 aliases
#define DIG_1_TRIS                 TRISFbits.TRISF2
#define DIG_1_LAT                  LATFbits.LATF2
#define DIG_1_PORT                 PORTFbits.RF2
#define DIG_1_WPU                  WPUFbits.WPUF2
#define DIG_1_OD                   ODCONFbits.ODCF2
#define DIG_1_ANS                  ANSELFbits.ANSELF2
#define DIG_1_SetHigh()            do { LATFbits.LATF2 = 1; } while(0)
#define DIG_1_SetLow()             do { LATFbits.LATF2 = 0; } while(0)
#define DIG_1_Toggle()             do { LATFbits.LATF2 = ~LATFbits.LATF2; } while(0)
#define DIG_1_GetValue()           PORTFbits.RF2
#define DIG_1_SetDigitalInput()    do { TRISFbits.TRISF2 = 1; } while(0)
#define DIG_1_SetDigitalOutput()   do { TRISFbits.TRISF2 = 0; } while(0)
#define DIG_1_SetPullup()          do { WPUFbits.WPUF2 = 1; } while(0)
#define DIG_1_ResetPullup()        do { WPUFbits.WPUF2 = 0; } while(0)
#define DIG_1_SetPushPull()        do { ODCONFbits.ODCF2 = 0; } while(0)
#define DIG_1_SetOpenDrain()       do { ODCONFbits.ODCF2 = 1; } while(0)
#define DIG_1_SetAnalogMode()      do { ANSELFbits.ANSELF2 = 1; } while(0)
#define DIG_1_SetDigitalMode()     do { ANSELFbits.ANSELF2 = 0; } while(0)

// get/set RF3 aliases
#define DIG_2_TRIS                 TRISFbits.TRISF3
#define DIG_2_LAT                  LATFbits.LATF3
#define DIG_2_PORT                 PORTFbits.RF3
#define DIG_2_WPU                  WPUFbits.WPUF3
#define DIG_2_OD                   ODCONFbits.ODCF3
#define DIG_2_ANS                  ANSELFbits.ANSELF3
#define DIG_2_SetHigh()            do { LATFbits.LATF3 = 1; } while(0)
#define DIG_2_SetLow()             do { LATFbits.LATF3 = 0; } while(0)
#define DIG_2_Toggle()             do { LATFbits.LATF3 = ~LATFbits.LATF3; } while(0)
#define DIG_2_GetValue()           PORTFbits.RF3
#define DIG_2_SetDigitalInput()    do { TRISFbits.TRISF3 = 1; } while(0)
#define DIG_2_SetDigitalOutput()   do { TRISFbits.TRISF3 = 0; } while(0)
#define DIG_2_SetPullup()          do { WPUFbits.WPUF3 = 1; } while(0)
#define DIG_2_ResetPullup()        do { WPUFbits.WPUF3 = 0; } while(0)
#define DIG_2_SetPushPull()        do { ODCONFbits.ODCF3 = 0; } while(0)
#define DIG_2_SetOpenDrain()       do { ODCONFbits.ODCF3 = 1; } while(0)
#define DIG_2_SetAnalogMode()      do { ANSELFbits.ANSELF3 = 1; } while(0)
#define DIG_2_SetDigitalMode()     do { ANSELFbits.ANSELF3 = 0; } while(0)

// get/set RF4 aliases
#define SEG_E_TRIS                 TRISFbits.TRISF4
#define SEG_E_LAT                  LATFbits.LATF4
#define SEG_E_PORT                 PORTFbits.RF4
#define SEG_E_WPU                  WPUFbits.WPUF4
#define SEG_E_OD                   ODCONFbits.ODCF4
#define SEG_E_ANS                  ANSELFbits.ANSELF4
#define SEG_E_SetHigh()            do { LATFbits.LATF4 = 1; } while(0)
#define SEG_E_SetLow()             do { LATFbits.LATF4 = 0; } while(0)
#define SEG_E_Toggle()             do { LATFbits.LATF4 = ~LATFbits.LATF4; } while(0)
#define SEG_E_GetValue()           PORTFbits.RF4
#define SEG_E_SetDigitalInput()    do { TRISFbits.TRISF4 = 1; } while(0)
#define SEG_E_SetDigitalOutput()   do { TRISFbits.TRISF4 = 0; } while(0)
#define SEG_E_SetPullup()          do { WPUFbits.WPUF4 = 1; } while(0)
#define SEG_E_ResetPullup()        do { WPUFbits.WPUF4 = 0; } while(0)
#define SEG_E_SetPushPull()        do { ODCONFbits.ODCF4 = 0; } while(0)
#define SEG_E_SetOpenDrain()       do { ODCONFbits.ODCF4 = 1; } while(0)
#define SEG_E_SetAnalogMode()      do { ANSELFbits.ANSELF4 = 1; } while(0)
#define SEG_E_SetDigitalMode()     do { ANSELFbits.ANSELF4 = 0; } while(0)

// get/set RF5 aliases
#define SEG_D_TRIS                 TRISFbits.TRISF5
#define SEG_D_LAT                  LATFbits.LATF5
#define SEG_D_PORT                 PORTFbits.RF5
#define SEG_D_WPU                  WPUFbits.WPUF5
#define SEG_D_OD                   ODCONFbits.ODCF5
#define SEG_D_ANS                  ANSELFbits.ANSELF5
#define SEG_D_SetHigh()            do { LATFbits.LATF5 = 1; } while(0)
#define SEG_D_SetLow()             do { LATFbits.LATF5 = 0; } while(0)
#define SEG_D_Toggle()             do { LATFbits.LATF5 = ~LATFbits.LATF5; } while(0)
#define SEG_D_GetValue()           PORTFbits.RF5
#define SEG_D_SetDigitalInput()    do { TRISFbits.TRISF5 = 1; } while(0)
#define SEG_D_SetDigitalOutput()   do { TRISFbits.TRISF5 = 0; } while(0)
#define SEG_D_SetPullup()          do { WPUFbits.WPUF5 = 1; } while(0)
#define SEG_D_ResetPullup()        do { WPUFbits.WPUF5 = 0; } while(0)
#define SEG_D_SetPushPull()        do { ODCONFbits.ODCF5 = 0; } while(0)
#define SEG_D_SetOpenDrain()       do { ODCONFbits.ODCF5 = 1; } while(0)
#define SEG_D_SetAnalogMode()      do { ANSELFbits.ANSELF5 = 1; } while(0)
#define SEG_D_SetDigitalMode()     do { ANSELFbits.ANSELF5 = 0; } while(0)

// get/set RF6 aliases
#define SEG_C_TRIS                 TRISFbits.TRISF6
#define SEG_C_LAT                  LATFbits.LATF6
#define SEG_C_PORT                 PORTFbits.RF6
#define SEG_C_WPU                  WPUFbits.WPUF6
#define SEG_C_OD                   ODCONFbits.ODCF6
#define SEG_C_ANS                  ANSELFbits.ANSELF6
#define SEG_C_SetHigh()            do { LATFbits.LATF6 = 1; } while(0)
#define SEG_C_SetLow()             do { LATFbits.LATF6 = 0; } while(0)
#define SEG_C_Toggle()             do { LATFbits.LATF6 = ~LATFbits.LATF6; } while(0)
#define SEG_C_GetValue()           PORTFbits.RF6
#define SEG_C_SetDigitalInput()    do { TRISFbits.TRISF6 = 1; } while(0)
#define SEG_C_SetDigitalOutput()   do { TRISFbits.TRISF6 = 0; } while(0)
#define SEG_C_SetPullup()          do { WPUFbits.WPUF6 = 1; } while(0)
#define SEG_C_ResetPullup()        do { WPUFbits.WPUF6 = 0; } while(0)
#define SEG_C_SetPushPull()        do { ODCONFbits.ODCF6 = 0; } while(0)
#define SEG_C_SetOpenDrain()       do { ODCONFbits.ODCF6 = 1; } while(0)
#define SEG_C_SetAnalogMode()      do { ANSELFbits.ANSELF6 = 1; } while(0)
#define SEG_C_SetDigitalMode()     do { ANSELFbits.ANSELF6 = 0; } while(0)

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