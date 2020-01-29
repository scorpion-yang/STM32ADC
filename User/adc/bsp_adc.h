#ifndef __ADC_H
#define __ADC_H


#include "stm32f10x.h"


/********************ADC1输入通道（引脚）配置**************************/
#define    ADC_APBxClock_FUN             RCC_APB2PeriphClockCmd
#define    ADC_CLK                       RCC_APB2Periph_ADC1

#define    ADC_GPIO_APBxClock_FUN        RCC_APB2PeriphClockCmd
#define    ADC_GPIO_CLK                  RCC_APB2Periph_GPIOC  
#define    ADC_PORT                      GPIOC



// 转换通道个数
#define    NOFCHANEL										 5



#define    ADC_PIN2                      GPIO_Pin_0
#define    ADC_CHANNEL2                  ADC_Channel_10

#define    ADC_PIN3                      GPIO_Pin_1
#define    ADC_CHANNEL3                  ADC_Channel_11

#define    ADC_PIN4                      GPIO_Pin_2
#define    ADC_CHANNEL4                  ADC_Channel_12

#define    ADC_PIN5                      GPIO_Pin_3
#define    ADC_CHANNEL5                  ADC_Channel_13

#define    ADC_PIN6                      GPIO_Pin_4
#define    ADC_CHANNEL6                  ADC_Channel_14



#define    ADC_x                         ADC1
#define    ADC_DMA_CHANNEL               DMA1_Channel1
#define    ADC_DMA_CLK                   RCC_AHBPeriph_DMA1



void               ADCx_Init                               (void);


#endif /* __ADC_H */

