#include "SWM1800.h"


void SetupPorts()
{
//     PWM_InitStructure  PWM_initStruct;	
//     ADC_InitStructure ADC_initStruct;
    
	GPIO_Init(GPIOC, PIN2, 0, 1, 0, 0);			//���룬����ʹ�ܣ���KEY
	GPIO_Init(GPIOB, PIN1, 1, 0, 0, 0);			//����� ��LED
    GPIOB->DATA |= (0x01 << PIN1);  //����ߵ�ƽ���ر�LED
    GPIO_Init(GPIOE, PIN0, 1, 0, 0, 0);			//����� 
    GPIO_Init(GPIOE, PIN3, 0, 1, 0, 0);			//���룬��IPM��������ź�����

	PORT_Init(PORTB, PIN4, FUNMUX_PWM2B_OUT, 0);//FUNMUX_PWM1B_OUT, 0);//
	PORT_Init(PORTB, PIN5, FUNMUX_PWM2A_OUT, 0);//FUNMUX_PWM1A_OUT, 0);//
    PORT_Init(PORTB, PIN6, FUNMUX_PWM1B_OUT, 0);//FUNMUX_PWM2B_OUT, 0);//
	PORT_Init(PORTB, PIN7, FUNMUX_PWM0B_OUT, 0);	
    PORT_Init(PORTB, PIN8, FUNMUX_PWM1A_OUT, 0);//FUNMUX_PWM2A_OUT, 0);//
	PORT_Init(PORTB, PIN9, FUNMUX_PWM0A_OUT, 0);	
     
	PORT_Init(PORTE, PIN4,  PORTE_PIN4_ADC_CH0, 0);	//PE.4  => ADC.CH0
	PORT_Init(PORTA, PIN15, PORTA_PIN15_ADC_CH1, 0);//PA.15 => ADC.CH1
	PORT_Init(PORTA, PIN14, PORTA_PIN14_ADC_CH2, 0);//PA.14 => ADC.CH2
	PORT_Init(PORTA, PIN13, PORTA_PIN13_ADC_CH3, 0);//PA.13 => ADC.CH3
	PORT_Init(PORTA, PIN12, PORTA_PIN12_ADC_CH4, 0);//PA.12 => ADC.CH4
}

