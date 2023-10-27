#include "../../../common/Types.h"
#include "../../../common/test.h"
#include "../../../common/Utils.h"
#include "../../../common/Config.h"
#include "../../../common/Registes.h"
#include "../../../mcal/GPIO/GPIOPrivate.h"
#include "../../../mcal/GPIO/GPIO.h"



int main()
{
    GPIO_SetPinDirection(kPORTA, kPIN0, kOutput);
    print_str("DDRA_REG: ");
    print_num(DDRA_REG);
    print_str("\n");

    GPIO_SetPinDirection(kPORTA, kPIN1, kInput);
    print_str("DDRA_REG: ");
    print_num(DDRA_REG);
    print_str("\n");

    GPIO_SetPinDirection(kPORTA, kPIN2, kOutput);
    print_str("DDRA_REG: ");
    print_num(DDRA_REG);
    print_str("\n");

    GPIO_SetPinDirection(kPORTA, kPIN3, kInput);
    print_str("DDRA_REG: ");
    print_num(DDRA_REG);
    print_str("\n");

    GPIO_SetPinDirection(kPORTA, kPIN4, kOutput);
    print_str("DDRA_REG: ");
    print_num(DDRA_REG);
    print_str("\n");

    GPIO_SetPinDirection(kPORTA, kPIN5, kInput);
    print_str("DDRA_REG: ");
    print_num(DDRA_REG);
    print_str("\n");

    GPIO_SetPinDirection(kPORTA, kPIN6, kInput);
    print_str("DDRA_REG: ");
    print_num(DDRA_REG);
    print_str("\n");

    GPIO_SetPinDirection(kPORTA, kPIN7, kOutput);
    print_str("DDRA_REG: ");
    print_num(DDRA_REG);
    print_str("\n");
    
    GPIO_SetPinValue(kPORTA,kPIN0,kHigh);
    print_str("PORTA_REG: ");
    print_num(PORTA_REG);
    print_str("\n");
        
    GPIO_SetPinValue(kPORTA,kPIN1,kLow);
    print_str("PORTA_REG: ");
    print_num(PORTA_REG);
    print_str("\n");
        
    GPIO_SetPinValue(kPORTA,kPIN2,kHigh);
    print_str("PORTA_REG: ");
    print_num(PORTA_REG);
    print_str("\n");
        
    GPIO_SetPinValue(kPORTA,kPIN3,kLow);
    print_str("PORTA_REG: ");
    print_num(PORTA_REG);
    print_str("\n");
        
    GPIO_SetPinValue(kPORTA,kPIN4,kLow);
    print_str("PORTA_REG: ");
    print_num(PORTA_REG);
    print_str("\n");
        
        
    GPIO_SetPinValue(kPORTA,kPIN5,kHigh);
    print_str("PORTA_REG: ");
    print_num(PORTA_REG);
    print_str("\n");
        
        
    GPIO_SetPinValue(kPORTA,kPIN6,kLow);
    print_str("PORTA_REG: ");
    print_num(PORTA_REG);
    print_str("\n");
        
    GPIO_SetPinValue(kPORTA,kPIN7,kHigh);
    print_str("PORTA_REG: ");
    print_num(PORTA_REG);
    print_str("\n");
        
    GPIO_SetPortDirection(kPORTB,kOutput_PORT);
    print_str("DDRB_REG: ");
    print_num(DDRB_REG);
    print_str("\n");
    
    GPIO_SetPortDirection(kPORTC,kInput_PORT);
    print_str("DDRC_REG: ");
    print_num(DDRC_REG);
    print_str("\n");
    
    GPIO_SetPortValue(kPORTB,kOutput_PORT);
    print_str("PORTB_REG: ");
    print_num(PORTB_REG);
    print_str("\n");
    
    GPIO_SetPortValue(kPORTB,kInput_PORT);
    print_str("PORTB_REG: ");
    print_num(PORTB_REG);
    print_str("\n");
    
    GPIO_SetPinPullup(kPORTC,kPIN0);
    print_str("PORTC_REG: ");
    print_num(PORTC_REG);
    print_str("\n");
    
    GPIO_SetLowNibbleValue(kPORTB,0x00001111);
    print_str("PORTB_REG: ");
    print_num(PORTB_REG);
    print_str("\n");
    
    GPIO_SetLowNibbleValue(kPORTB,0x00000000);
    print_str("PORTB_REG: ");
    print_num(PORTB_REG);
    print_str("\n");
    
    GPIO_SetHighNibbleValue(kPORTB,0x11110000);
    print_str("PORTB_REG: ");
    print_num(PORTB_REG);
    print_str("\n");
    
    GPIO_SetHighNibbleValue(kPORTB,0x00000000);
    print_str("PORTB_REG: ");
    print_num(PORTB_REG);
    print_str("\n");
    
    GPIO_SetHighNibbleDirection(kPORTB,0x00000000);
    print_str("DDRB_REG: ");
    print_num(DDRB_REG);
    print_str("\n");
    
    GPIO_SetHighNibbleDirection(kPORTB,0x11110000);
    print_str("DDRB_REG: ");
    print_num(DDRB_REG);
    print_str("\n");
    
    GPIO_SetLowNibbleDirection(kPORTB,0x00000000);  
    print_str("DDRB_REG: ");
    print_num(DDRB_REG);
    print_str("\n");  
    
    GPIO_SetLowNibbleDirection(kPORTB,0x00001111);  
    print_str("DDRB_REG: ");
    print_num(DDRB_REG);
    print_str("\n"); 
    
    
}
