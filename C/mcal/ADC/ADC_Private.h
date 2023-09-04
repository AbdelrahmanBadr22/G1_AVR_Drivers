#ifndef MCAL_ADC_PRIVATE_H_
#define MCAL_ADC_PRIVATE_H_


#define ADMUX_REFS1 (7)
#define ADMUX_REFS0 (6)
#define ADMUX_ADLAR (5)
#define ADCSRA_ADIE (3)
#define ADCSRA_ADIF (4)
#define ADCSRA_ADSC (6)
#define ADCSRA_ADEN (7)

#define ADC_PRE_MASK (0b1111000)
#define ADC_CH_MASK (0b1110000)

#define ADC_PRESCALER_2    (1)
#define ADC_PRESCALER_4    (2)
#define ADC_PRESCALER_8    (3)
#define ADC_PRESCALER_16   (4)
#define ADC_PRESCALER_32   (5)
#define ADC_PRESCALER_64   (6)
#define ADC_PRESCALER_128  (7)

#endif