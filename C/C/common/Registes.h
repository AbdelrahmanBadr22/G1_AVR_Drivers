#ifndef REGISTERS_H
#define REGISTERS_H

#if MCU_TYPE == _AVR
    #define SREG         *((volatile uint8_t *)0x5F)
    #define DDRA_REG     *((volatile uint8_t *)0x3A)
    #define DDRB_REG     *((volatile uint8_t *)0x37)
    #define DDRD_REG     *((volatile uint8_t *)0x31)
    #define DDRC_REG     *((volatile uint8_t *)0x34)
    #define PINA_REG     *((volatile uint8_t *)0x39)
    #define PINB_REG     *((volatile uint8_t *)0x36)
    #define PINC_REG     *((volatile uint8_t *)0x33)
    #define PIND_REG     *((volatile uint8_t *)0x30)
    #define PORTA_REG    *((volatile uint8_t *)0x3B)
    #define PORTB_REG    *((volatile uint8_t *)0x38)
    #define PORTC_REG    *((volatile uint8_t *)0x35)
    #define PORTD_REG    *((volatile uint8_t *)0x32)
    #define SREG_REG     *((volatile uint8_t* )0x5F)
    #define GICR_REG     *((volatile uint8_t *)0X5B)
    #define GIFR_REG     *((volatile uint8_t *)0X5A)
    #define MCUCR_REG    *((volatile uint8_t *)0X55)
    #define MCUCSR_REG   *((volatile uint8_t *)0X54)
    #define ADCSRA_REG   *((volatile uint8_t *)0X26)
    #define ADMUX_REG    *((volatile uint8_t *)0X27)
    #define ADCH_REG     *((volatile uint8_t *)0X25)
    #define ADCL_REG     *((volatile uint8_t *)0X24)
    #define SFIOR_REG    *((volatile uint8_t *)0X50)
    #define ADC_DATA_REG *((volatile uint16  *)0X24)
    #define OCR0         *((volatile uint8_t *)0X5C)
    #define TIMSK        *((volatile uint8_t *)0X59)
    #define TIFR         *((volatile uint8_t *)0X58)
    #define TCCR0        *((volatile uint8_t *)0X53)
    #define TCNT0        *((volatile uint8_t *)0X52)

    #define TCCR1A       *((volatile uint8_t *)0X4F)
    #define TCCR1B       *((volatile uint8_t *)0X4E)
    #define TCNT1H       *((volatile uint8_t *)0X4D)
    #define TCNT1L       *((volatile uint8_t *)0X4C)
    #define TCNT1        *((volatile uint16  *)0X4C)
    #define OCR1AH       *((volatile uint8_t *)0X4B)
    #define OCR1AL       *((volatile uint8_t *)0X4A)
    #define OCR1A        *((volatile uint16  *)0X4A)
    #define OCR1BH       *((volatile uint8_t *)0X49)
    #define OCR1BL       *((volatile uint8_t *)0X48)
    #define OCR1B        *((volatile uint16  *)0X48)
    #define ICR1BH       *(volatile uint8_t *)(0X47)
    #define ICR1BL       *(volatile uint8_t *)(0X46)
    #define ICR1         *(volatile uint16  *)(0X46)

    #define TCCR2        *((volatile uint8_t *)0X45)
    #define TCNT2        *((volatile uint8_t *)0X44)
    #define OCR2         *((volatile uint8_t *)0X43)

    #define TCCR1A       *((volatile uint8_t *)0X4F)
    #define TCCR1B       *((volatile uint8_t *)0X4E)
    #define TCNT1H       *((volatile uint8_t *)0X4D)
    #define TCNT1L       *((volatile uint8_t *)0X4C)
    #define TCNT1        *((volatile uint16  *)0X4C)
    #define OCR1AH       *((volatile uint8_t *)0X4B)
    #define OCR1AL       *((volatile uint8_t *)0X4A)
    #define OCR1A        *((volatile uint16  *)0X4A)
    #define OCR1BH       *((volatile uint8_t *)0X49)
    #define OCR1BL       *((volatile uint8_t *)0X48)
    #define OCR1B        *((volatile uint16  *)0X48)

    #define TCCR2        *((volatile uint8_t *)0X45)
    #define TCNT2        *((volatile uint8_t *)0X44)
    #define OCR2         *((volatile uint8_t *)0X43)
    
    #define UCSRA_REG   *((volatile uint8_t *)0X2B)
    #define UCSRB_REG   *((volatile uint8_t *)0X2A)
    #define UCSRC_REG   *((volatile uint8_t *)0X40)
    #define UBRRL_REG   *((volatile uint8_t *)0X29)
    #define UBRRH_REG   *((volatile uint8_t *)0X40)
    #define UDR_REG     *((volatile uint8_t *)0X2C)

    #define SPDR        *((volatile uint8_t *)0X2F)/* SPI Data Register */
    #define SPCR        *((volatile uint8_t *)0X2D)/* SPI Control Register */
    #define SPSR        *((volatile uint8_t *)0X2E)/* SPI Status Register */

    #define TWCR       *((volatile uint8_t *)0x56) /* TWI Control Register */
    #define TWDR       *((volatile uint8_t *)0x23) /* TWI Data Register */
    #define TWAR       *((volatile uint8_t *)0x22) /* TWI Address Register */
    #define TWSR       *((volatile uint8_t *)0x21) /* TWI Status Register */
    #define TWBR       *((volatile uint8_t *)0x20) /* TWI Bit Rate Register */

#elif MCU_TYPE == _PIC
    #define ADRESH_REG   *((volatile uint8_t *)0xFC4)
    #define ADRESL_REG   *((volatile uint8_t *)0xFC3)
    #define ADC_DATA_REG *((volatile uint16 *)0XFC3)
    #define ADCON0_REG   *((volatile uint8_t *)0xFC2)
    #define ADCON1_REG   *((volatile uint8_t *)0xFC1)
    #define ADCON2_REG   *((volatile uint8_t *)0xFC0)
    #define TRISA_REG    *((volatile uint8_t *)0xF92)
    #define TRISB_REG    *((volatile uint8_t *)0xF93)
    #define TRISC_REG    *((volatile uint8_t *)0xF94)
    #define TRISD_REG    *((volatile uint8_t *)0xF95)
    #define TRISE_REG    *((volatile uint8_t *)0xF96)
    #define PORTA_REG    *((volatile uint8_t *)0xF80)
    #define PORTB_REG    *((volatile uint8_t *)0xF81)
    #define PORTC_REG    *((volatile uint8_t *)0xF82)
    #define PORTD_REG    *((volatile uint8_t *)0xF83)
    #define PORTE_REG    *((volatile uint8_t *)0xF84)
    #define LATA_REG     *((volatile uint8_t *)0xF89)
    #define LATB_REG     *((volatile uint8_t *)0xF8A)
    #define LATC_REG     *((volatile uint8_t *)0xF8B)
    #define LATD_REG     *((volatile uint8_t *)0xF8C)
    #define LATE_REG     *((volatile uint8_t *)0xF8D)
    #define RCON_REG     *((volatile uint8_t *)0xFD0)
    #define INTCON_REG   *((volatile uint8_t *)0xFF2)
    #define INTCON2_REG  *((volatile uint8_t *)0xFF1)
    #define INTCON3_REG  *((volatile uint8_t *)0xFF0)
    #define PIE1_REG     *((volatile uint8_t *)0xF9D)
    #define PIR1_REG     *((volatile uint8_t *)0xF9E)
    #define ADC_DATA_REG *((volatile uint16 *)0XFC3)
    #define TRISA_REG   *((volatile uint8_t *)0xF92)
    #define TRISB_REG   *((volatile uint8_t *)0xF93)
    #define TRISC_REG   *((volatile uint8_t *)0xF94)
    #define TRISD_REG   *((volatile uint8_t *)0xF95)
    #define TRISE_REG   *((volatile uint8_t *)0xF96)
    #define PORTA_REG   *((volatile uint8_t *)0xF80)
    #define PORTB_REG   *((volatile uint8_t *)0xF81)
    #define PORTC_REG   *((volatile uint8_t *)0xF82)
    #define PORTD_REG   *((volatile uint8_t *)0xF83)
    #define PORTE_REG   *((volatile uint8_t *)0xF84)
    #define LATA_REG    *((volatile uint8_t *)0xF89)
    #define LATB_REG    *((volatile uint8_t *)0xF8A)
    #define LATC_REG    *((volatile uint8_t *)0xF8B)
    #define LATD_REG    *((volatile uint8_t *)0xF8C)
    #define LATE_REG    *((volatile uint8_t *)0xF8D)
    #define SPBRGH_REG  *((volatile uint8_t *)0xFB0)
    #define RCREG_REG   *((volatile uint8_t *)0xFAE)
    #define TXREG_REG   *((volatile uint8_t *)0xFAD)
    #define TXSTA_REG   *((volatile uint8_t *)0xFAC)
    #define RCSTA_REG   *((volatile uint8_t *)0xFAB)
    #define TRISC_REG   *((volatile uint8_t *)0xF94)
    #define PIR1_REG    *((volatile uint8_t *)0xF9E)
    #define BAUDCTL_REG *((volatile uint8_t *)0xFB8)
    #define SSPSTAT_REG *((volatile uint8_t *)0xFC7)
    #define SSPCON1_REG *((volatile uint8_t *)0xFC6)
    #define SSPBUF_REG  *((volatile uint8_t *)0xFC9)
#endif  // MCU_TYPE

#endif //_REGISTERS_H_