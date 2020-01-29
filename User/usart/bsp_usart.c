#include "bsp_usart.h"
#include <stdio.h>


 /**
  * @brief  USART GPIO 配置,工作参数配置
  * @param  无
  * @retval 无
  */
void USART_Config(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	USART_InitTypeDef USART_InitStructure;

	// 打开串口GPIO的时钟
	DEBUG_USART_GPIO_APBxClkCmd(DEBUG_USART_GPIO_CLK, ENABLE);
	
	// 打开串口外设的时钟
	DEBUG_USART_APBxClkCmd(DEBUG_USART_CLK, ENABLE);

	// 将USART Tx的GPIO配置为推挽复用模式
	GPIO_InitStructure.GPIO_Pin = DEBUG_USART_TX_GPIO_PIN;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEBUG_USART_TX_GPIO_PORT, &GPIO_InitStructure);

  // 将USART Rx的GPIO配置为浮空输入模式
	GPIO_InitStructure.GPIO_Pin = DEBUG_USART_RX_GPIO_PIN;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	GPIO_Init(DEBUG_USART_RX_GPIO_PORT, &GPIO_InitStructure);
	
	// 配置串口的工作参数
	// 配置波特率
	USART_InitStructure.USART_BaudRate = DEBUG_USART_BAUDRATE;
	// 配置 针数据字长
	USART_InitStructure.USART_WordLength = USART_WordLength_8b;
	// 配置停止位
	USART_InitStructure.USART_StopBits = USART_StopBits_1;
	// 配置校验位
	USART_InitStructure.USART_Parity = USART_Parity_No ;
	// 配置硬件流控制
	USART_InitStructure.USART_HardwareFlowControl = 
	USART_HardwareFlowControl_None;
	// 配置工作模式，收发一起
	USART_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;
	// 完成串口的初始化配置
	USART_Init(DEBUG_USARTx, &USART_InitStructure);
	
//	// 串口中断优先级配置
//	NVIC_Configuration();
//	
//	// 使能串口接收中断
//	USART_ITConfig(DEBUG_USARTx, USART_IT_RXNE, ENABLE);	
	
	// 使能串口
	USART_Cmd(DEBUG_USARTx, ENABLE);	    
}





//串口3
void USART3_Config(void)
{
	GPIO_InitTypeDef GPIO_InitStructure3;
	USART_InitTypeDef USART3_InitStructure;

	// 打开串口GPIO的时钟
	DEBUG_USART3_GPIO_APBxClkCmd(DEBUG_USART3_GPIO_CLK, ENABLE);
	
	// 打开串口外设的时钟
	DEBUG_USART3_APBxClkCmd(DEBUG_USART3_CLK, ENABLE);

	// 将USART Tx的GPIO配置为推挽复用模式
	GPIO_InitStructure3.GPIO_Pin = DEBUG_USART3_TX_GPIO_PIN;
	GPIO_InitStructure3.GPIO_Mode = GPIO_Mode_AF_PP;
	GPIO_InitStructure3.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEBUG_USART3_TX_GPIO_PORT, &GPIO_InitStructure3);

  // 将USART Rx的GPIO配置为浮空输入模式
	GPIO_InitStructure3.GPIO_Pin = DEBUG_USART3_RX_GPIO_PIN;
	GPIO_InitStructure3.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	GPIO_Init(DEBUG_USART3_RX_GPIO_PORT, &GPIO_InitStructure3);
	
	// 配置串口的工作参数
	// 配置波特率
	USART3_InitStructure.USART_BaudRate = DEBUG_USART_BAUDRATE;
	// 配置 针数据字长
	USART3_InitStructure.USART_WordLength = USART_WordLength_8b;
	// 配置停止位
	USART3_InitStructure.USART_StopBits = USART_StopBits_1;
	// 配置校验位
	USART3_InitStructure.USART_Parity = USART_Parity_No ;
	// 配置硬件流控制
	USART3_InitStructure.USART_HardwareFlowControl = 
	USART_HardwareFlowControl_None;
	// 配置工作模式，收发一起
	USART3_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;
	// 完成串口的初始化配置
	USART_Init(DEBUG_USART3, &USART3_InitStructure);
	
//	// 串口中断优先级配置
//	NVIC_Configuration();
//	
//	// 使能串口接收中断
//	USART_ITConfig(DEBUG_USARTx, USART_IT_RXNE, ENABLE);	
	
	// 使能串口
	USART_Cmd(DEBUG_USART3, ENABLE);	    
}


void USART2_Config(void)
{
	GPIO_InitTypeDef GPIO_InitStructure2;
	USART_InitTypeDef USART2_InitStructure;

	// 打开串口GPIO的时钟
	DEBUG_USART2_GPIO_APBxClkCmd(DEBUG_USART2_GPIO_CLK, ENABLE);
	
	// 打开串口外设的时钟
	DEBUG_USART2_APBxClkCmd(DEBUG_USART2_CLK, ENABLE);

	// 将USART Tx的GPIO配置为推挽复用模式
	GPIO_InitStructure2.GPIO_Pin = DEBUG_USART2_TX_GPIO_PIN;
	GPIO_InitStructure2.GPIO_Mode = GPIO_Mode_AF_PP;
	GPIO_InitStructure2.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEBUG_USART2_TX_GPIO_PORT, &GPIO_InitStructure2);

  // 将USART Rx的GPIO配置为浮空输入模式
	GPIO_InitStructure2.GPIO_Pin = DEBUG_USART2_RX_GPIO_PIN;
	GPIO_InitStructure2.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	GPIO_Init(DEBUG_USART2_RX_GPIO_PORT, &GPIO_InitStructure2);
	
	// 配置串口的工作参数
	// 配置波特率
	USART2_InitStructure.USART_BaudRate = DEBUG_USART_BAUDRATE;
	// 配置 针数据字长
	USART2_InitStructure.USART_WordLength = USART_WordLength_8b;
	// 配置停止位
	USART2_InitStructure.USART_StopBits = USART_StopBits_1;
	// 配置校验位
	USART2_InitStructure.USART_Parity = USART_Parity_No ;
	// 配置硬件流控制
	USART2_InitStructure.USART_HardwareFlowControl = 
	USART_HardwareFlowControl_None;
	// 配置工作模式，收发一起
	USART2_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;
	// 完成串口的初始化配置
	USART_Init(DEBUG_USART2, &USART2_InitStructure);
	
//	// 串口中断优先级配置
//	NVIC_Configuration();
//	
//	// 使能串口接收中断
//	USART_ITConfig(DEBUG_USARTx, USART_IT_RXNE, ENABLE);	
	
	// 使能串口
	USART_Cmd(DEBUG_USART2, ENABLE);	    
}







void Usart_CendByte(USART_TypeDef* USARTx,uint8_t data)
{
	USART_SendData(USARTx, data);
	while(USART_GetFlagStatus(USARTx, USART_FLAG_TXE)==RESET);
		

}
uint8_t  data_H , data_L ;
void SendHalfWord(USART_TypeDef* USARTx,uint16_t Data)
{
	uint8_t
	data_L  =  Data &0xff; 
	data_H  = (Data &0xFF00)>>8;
	
	
	USART_SendData(USARTx, data_H);
	while(USART_GetFlagStatus(USARTx, USART_FLAG_TXE)==RESET);
		
	USART_SendData(USARTx, data_L);
	while(USART_GetFlagStatus(USARTx, USART_FLAG_TXE)==RESET);
	
		

}
uint16_t i;

void SendHalfArry(USART_TypeDef* USARTx,uint8_t *array,uint8_t n)
{
	for(i=0;i<n;i++)
	{
		USART_SendData(USARTx, *array);
		while(USART_GetFlagStatus(USARTx, USART_FLAG_TXE)==RESET);
		array+=1;
	}
}

void USART_SendStr(USART_TypeDef* USARTx,uint8_t *str)
{
	uint8_t i=0;
	do 
		{
			USART_SendData(USARTx, *(str+i));
			i++;
		}while(*str+i != '\0');
	while(USART_GetFlagStatus(USARTx, USART_FLAG_TXE)==RESET);
}

///重定向c库函数printf到串口，重定向后可使用printf函数

int fputc(int ch, FILE *f)
{
		/* 发送一个字节数据到串口 */
		USART_SendData(DEBUG_USARTx, (uint8_t) ch);
		
		/* 等待发送完毕 */
		while (USART_GetFlagStatus(DEBUG_USARTx, USART_FLAG_TXE) == RESET);		
	
		return (ch);
}

///重定向c库函数scanf到串口，重写向后可使用scanf、getchar等函数
int fgetc(FILE *f)
{
		/* 等待串口输入数据 */
		while (USART_GetFlagStatus(DEBUG_USARTx, USART_FLAG_RXNE) == RESET);

		return (int)USART_ReceiveData(DEBUG_USARTx);
}




