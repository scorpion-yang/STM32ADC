#ifndef __BSP_USART_H
#define __BSP_USART_H

#include "stm32f10x.h"


// ����3-USART3
#define  DEBUG_USART3                    USART3
#define  DEBUG_USART3_CLK                RCC_APB1Periph_USART3
#define  DEBUG_USART3_APBxClkCmd         RCC_APB1PeriphClockCmd
#define  DEBUG_USART3_BAUDRATE           115200

// USART GPIO ���ź궨��
#define  DEBUG_USART3_GPIO_CLK           (RCC_APB2Periph_GPIOB)
#define  DEBUG_USART3_GPIO_APBxClkCmd    RCC_APB2PeriphClockCmd
    
#define  DEBUG_USART3_TX_GPIO_PORT        GPIOB   
#define  DEBUG_USART3_TX_GPIO_PIN         GPIO_Pin_10
#define  DEBUG_USART3_RX_GPIO_PORT       GPIOB
#define  DEBUG_USART3_RX_GPIO_PIN        GPIO_Pin_11

#define  DEBUG_USART3_IRQ                USART3_IRQn
#define  DEBUG_USART3_IRQHandler         USART3_IRQHandler



//#define DEBUG_USART1  1
////#define DEBUG_USART2  0
////#define DEBUG_USART3  0
//#define DEBUG_USART4  0
//#define DEBUG_USART5  0


// ����1-USART1
#define  DEBUG_USARTx                   USART1
#define  DEBUG_USART_CLK                RCC_APB2Periph_USART1
#define  DEBUG_USART_APBxClkCmd         RCC_APB2PeriphClockCmd
#define  DEBUG_USART_BAUDRATE           115200

// USART GPIO ���ź궨��
#define  DEBUG_USART_GPIO_CLK           (RCC_APB2Periph_GPIOA)
#define  DEBUG_USART_GPIO_APBxClkCmd    RCC_APB2PeriphClockCmd
    
#define  DEBUG_USART_TX_GPIO_PORT       GPIOA   
#define  DEBUG_USART_TX_GPIO_PIN        GPIO_Pin_9
#define  DEBUG_USART_RX_GPIO_PORT       GPIOA
#define  DEBUG_USART_RX_GPIO_PIN        GPIO_Pin_10

#define  DEBUG_USART_IRQ                USART1_IRQn
#define  DEBUG_USART_IRQHandler         USART1_IRQHandler






// ����2-USART2
#define  DEBUG_USART2                   USART2
#define  DEBUG_USART2_CLK                RCC_APB1Periph_USART2
#define  DEBUG_USART2_APBxClkCmd         RCC_APB1PeriphClockCmd
#define  DEBUG_USART2_BAUDRATE           115200

// USART GPIO ���ź궨��
#define  DEBUG_USART2_GPIO_CLK           (RCC_APB2Periph_GPIOA)
#define  DEBUG_USART2_GPIO_APBxClkCmd    RCC_APB2PeriphClockCmd
    
#define  DEBUG_USART2_TX_GPIO_PORT       GPIOA   
#define  DEBUG_USART2_TX_GPIO_PIN        GPIO_Pin_2
#define  DEBUG_USART2_RX_GPIO_PORT       GPIOA
#define  DEBUG_USART2_RX_GPIO_PIN        GPIO_Pin_3

#define  DEBUG_USART2_IRQ                USART2_IRQn
#define  DEBUG_USART2_IRQHandler         USART2_IRQHandler







//#elif DEBUG_USART2
//// ����2-USART2
//#define  DEBUG_USARTx                   USART2
//#define  DEBUG_USART_CLK                RCC_APB1Periph_USART2
//#define  DEBUG_USART_APBxClkCmd         RCC_APB1PeriphClockCmd
//#define  DEBUG_USART_BAUDRATE           115200

//// USART GPIO ���ź궨��
//#define  DEBUG_USART_GPIO_CLK           (RCC_APB2Periph_GPIOA)
//#define  DEBUG_USART_GPIO_APBxClkCmd    RCC_APB2PeriphClockCmd
//    
//#define  DEBUG_USART_TX_GPIO_PORT         GPIOA   
//#define  DEBUG_USART_TX_GPIO_PIN          GPIO_Pin_2
//#define  DEBUG_USART_RX_GPIO_PORT       GPIOA
//#define  DEBUG_USART_RX_GPIO_PIN        GPIO_Pin_3

//#define  DEBUG_USART_IRQ                USART2_IRQn
//#define  DEBUG_USART_IRQHandler         USART2_IRQHandler


////#elif DEBUG_USART3
////// ����3-USART3
////#define  DEBUG_USARTx                   USART3
////#define  DEBUG_USART_CLK                RCC_APB1Periph_USART3
////#define  DEBUG_USART_APBxClkCmd         RCC_APB1PeriphClockCmd
////#define  DEBUG_USART_BAUDRATE           115200

////// USART GPIO ���ź궨��
////#define  DEBUG_USART_GPIO_CLK           (RCC_APB2Periph_GPIOB)
////#define  DEBUG_USART_GPIO_APBxClkCmd    RCC_APB2PeriphClockCmd
////    
////#define  DEBUG_USART_TX_GPIO_PORT         GPIOB   
////#define  DEBUG_USART_TX_GPIO_PIN          GPIO_Pin_10
////#define  DEBUG_USART_RX_GPIO_PORT       GPIOB
////#define  DEBUG_USART_RX_GPIO_PIN        GPIO_Pin_11

////#define  DEBUG_USART_IRQ                USART3_IRQn
////#define  DEBUG_USART_IRQHandler         USART3_IRQHandler


//#elif DEBUG_USART4
//// ����4-UART4
//#define  DEBUG_USARTx                   UART4
//#define  DEBUG_USART_CLK                RCC_APB1Periph_UART4
//#define  DEBUG_USART_APBxClkCmd         RCC_APB1PeriphClockCmd
//#define  DEBUG_USART_BAUDRATE           115200

//// USART GPIO ���ź궨��
//#define  DEBUG_USART_GPIO_CLK           (RCC_APB2Periph_GPIOC)
//#define  DEBUG_USART_GPIO_APBxClkCmd    RCC_APB2PeriphClockCmd
//    
//#define  DEBUG_USART_TX_GPIO_PORT         GPIOC   
//#define  DEBUG_USART_TX_GPIO_PIN          GPIO_Pin_10
//#define  DEBUG_USART_RX_GPIO_PORT       GPIOC
//#define  DEBUG_USART_RX_GPIO_PIN        GPIO_Pin_11

//#define  DEBUG_USART_IRQ                UART4_IRQn
//#define  DEBUG_USART_IRQHandler         UART4_IRQHandler


//#elif DEBUG_USART5
//// ����5-UART5
//#define  DEBUG_USARTx                   UART5
//#define  DEBUG_USART_CLK                RCC_APB1Periph_UART5
//#define  DEBUG_USART_APBxClkCmd         RCC_APB1PeriphClockCmd
//#define  DEBUG_USART_BAUDRATE           115200

//// USART GPIO ���ź궨��
//#define  DEBUG_USART_GPIO_CLK           (RCC_APB2Periph_GPIOC|RCC_APB2Periph_GPIOD)
//#define  DEBUG_USART_GPIO_APBxClkCmd    RCC_APB2PeriphClockCmd
//    
//#define  DEBUG_USART_TX_GPIO_PORT         GPIOC   
//#define  DEBUG_USART_TX_GPIO_PIN          GPIO_Pin_12
//#define  DEBUG_USART_RX_GPIO_PORT       GPIOD
//#define  DEBUG_USART_RX_GPIO_PIN        GPIO_Pin_2

//#define  DEBUG_USART_IRQ                UART5_IRQn
//#define  DEBUG_USART_IRQHandler         UART5_IRQHandler


static void NVIC_Configuration(void);
void SendHalfArry(USART_TypeDef* USARTx,uint8_t *array,uint8_t n);
void SendHalfWord(USART_TypeDef* USARTx,uint16_t Data);
void Usart_CendByte(USART_TypeDef* USARTx,uint8_t data);
void USART_Config(void);
void USART_SendStr(USART_TypeDef* USARTx,uint8_t *str);
void USART3_Config(void);
void USART2_Config(void);

#endif /*__BSP_USART_H*/















































//#ifndef __USART_H
//#define	__USART_H


//#include "stm32f10x.h"
//#include <stdio.h>

///** 
//  * ���ں궨�壬��ͬ�Ĵ��ڹ��ص����ߺ�IO��һ������ֲʱ��Ҫ�޸��⼸����
//  */
//	
//// ����1-USART1
//#define  DEBUG_USARTx                   USART1
//#define  DEBUG_USART_CLK                RCC_APB2Periph_USART1
//#define  DEBUG_USART_APBxClkCmd         RCC_APB2PeriphClockCmd
//#define  DEBUG_USART_BAUDRATE           115200

//// USART GPIO ���ź궨��
//#define  DEBUG_USART_GPIO_CLK           (RCC_APB2Periph_GPIOA)
//#define  DEBUG_USART_GPIO_APBxClkCmd    RCC_APB2PeriphClockCmd
//    
//#define  DEBUG_USART_TX_GPIO_PORT         GPIOA   
//#define  DEBUG_USART_TX_GPIO_PIN          GPIO_Pin_9
//#define  DEBUG_USART_RX_GPIO_PORT       GPIOA
//#define  DEBUG_USART_RX_GPIO_PIN        GPIO_Pin_10

//#define  DEBUG_USART_IRQ                USART1_IRQn
//#define  DEBUG_USART_IRQHandler         USART1_IRQHandler


//// ����2-USART2
////#define  DEBUG_USARTx                   USART2
////#define  DEBUG_USART_CLK                RCC_APB1Periph_USART2
////#define  DEBUG_USART_APBxClkCmd         RCC_APB1PeriphClockCmd
////#define  DEBUG_USART_BAUDRATE           115200

////// USART GPIO ���ź궨��
////#define  DEBUG_USART_GPIO_CLK           (RCC_APB2Periph_GPIOA)
////#define  DEBUG_USART_GPIO_APBxClkCmd    RCC_APB2PeriphClockCmd
////    
////#define  DEBUG_USART_TX_GPIO_PORT         GPIOA   
////#define  DEBUG_USART_TX_GPIO_PIN          GPIO_Pin_2
////#define  DEBUG_USART_RX_GPIO_PORT       GPIOA
////#define  DEBUG_USART_RX_GPIO_PIN        GPIO_Pin_3

////#define  DEBUG_USART_IRQ                USART2_IRQn
////#define  DEBUG_USART_IRQHandler         USART2_IRQHandler

////// ����3-USART3
////#define  DEBUG_USARTx                   USART3
////#define  DEBUG_USART_CLK                RCC_APB1Periph_USART3
////#define  DEBUG_USART_APBxClkCmd         RCC_APB1PeriphClockCmd
////#define  DEBUG_USART_BAUDRATE           115200

////// USART GPIO ���ź궨��
////#define  DEBUG_USART_GPIO_CLK           (RCC_APB2Periph_GPIOB)
////#define  DEBUG_USART_GPIO_APBxClkCmd    RCC_APB2PeriphClockCmd
////    
////#define  DEBUG_USART_TX_GPIO_PORT         GPIOB   
////#define  DEBUG_USART_TX_GPIO_PIN          GPIO_Pin_10
////#define  DEBUG_USART_RX_GPIO_PORT       GPIOB
////#define  DEBUG_USART_RX_GPIO_PIN        GPIO_Pin_11

////#define  DEBUG_USART_IRQ                USART3_IRQn
////#define  DEBUG_USART_IRQHandler         USART3_IRQHandler

//// ����4-UART4
////#define  DEBUG_USARTx                   UART4
////#define  DEBUG_USART_CLK                RCC_APB1Periph_UART4
////#define  DEBUG_USART_APBxClkCmd         RCC_APB1PeriphClockCmd
////#define  DEBUG_USART_BAUDRATE           115200

////// USART GPIO ���ź궨��
////#define  DEBUG_USART_GPIO_CLK           (RCC_APB2Periph_GPIOC)
////#define  DEBUG_USART_GPIO_APBxClkCmd    RCC_APB2PeriphClockCmd
////    
////#define  DEBUG_USART_TX_GPIO_PORT         GPIOC   
////#define  DEBUG_USART_TX_GPIO_PIN          GPIO_Pin_10
////#define  DEBUG_USART_RX_GPIO_PORT       GPIOC
////#define  DEBUG_USART_RX_GPIO_PIN        GPIO_Pin_11

////#define  DEBUG_USART_IRQ                UART4_IRQn
////#define  DEBUG_USART_IRQHandler         UART4_IRQHandler


//// ����5-UART5
////#define  DEBUG_USARTx                   UART5
////#define  DEBUG_USART_CLK                RCC_APB1Periph_UART5
////#define  DEBUG_USART_APBxClkCmd         RCC_APB1PeriphClockCmd
////#define  DEBUG_USART_BAUDRATE           115200

////// USART GPIO ���ź궨��
////#define  DEBUG_USART_GPIO_CLK           (RCC_APB2Periph_GPIOC|RCC_APB2Periph_GPIOD)
////#define  DEBUG_USART_GPIO_APBxClkCmd    RCC_APB2PeriphClockCmd
////    
////#define  DEBUG_USART_TX_GPIO_PORT         GPIOC   
////#define  DEBUG_USART_TX_GPIO_PIN          GPIO_Pin_12
////#define  DEBUG_USART_RX_GPIO_PORT       GPIOD
////#define  DEBUG_USART_RX_GPIO_PIN        GPIO_Pin_2

////#define  DEBUG_USART_IRQ                UART5_IRQn
////#define  DEBUG_USART_IRQHandler         UART5_IRQHandler


//void USART_Config(void);
//void Usart_SendByte( USART_TypeDef * pUSARTx, uint8_t ch);
//void Usart_SendString( USART_TypeDef * pUSARTx, char *str);
//void Usart_SendHalfWord( USART_TypeDef * pUSARTx, uint16_t ch);

//#endif /* __USART_H */
