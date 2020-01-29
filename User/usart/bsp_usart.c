#include "bsp_usart.h"
#include <stdio.h>


 /**
  * @brief  USART GPIO ����,������������
  * @param  ��
  * @retval ��
  */
void USART_Config(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	USART_InitTypeDef USART_InitStructure;

	// �򿪴���GPIO��ʱ��
	DEBUG_USART_GPIO_APBxClkCmd(DEBUG_USART_GPIO_CLK, ENABLE);
	
	// �򿪴��������ʱ��
	DEBUG_USART_APBxClkCmd(DEBUG_USART_CLK, ENABLE);

	// ��USART Tx��GPIO����Ϊ���츴��ģʽ
	GPIO_InitStructure.GPIO_Pin = DEBUG_USART_TX_GPIO_PIN;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEBUG_USART_TX_GPIO_PORT, &GPIO_InitStructure);

  // ��USART Rx��GPIO����Ϊ��������ģʽ
	GPIO_InitStructure.GPIO_Pin = DEBUG_USART_RX_GPIO_PIN;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	GPIO_Init(DEBUG_USART_RX_GPIO_PORT, &GPIO_InitStructure);
	
	// ���ô��ڵĹ�������
	// ���ò�����
	USART_InitStructure.USART_BaudRate = DEBUG_USART_BAUDRATE;
	// ���� �������ֳ�
	USART_InitStructure.USART_WordLength = USART_WordLength_8b;
	// ����ֹͣλ
	USART_InitStructure.USART_StopBits = USART_StopBits_1;
	// ����У��λ
	USART_InitStructure.USART_Parity = USART_Parity_No ;
	// ����Ӳ��������
	USART_InitStructure.USART_HardwareFlowControl = 
	USART_HardwareFlowControl_None;
	// ���ù���ģʽ���շ�һ��
	USART_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;
	// ��ɴ��ڵĳ�ʼ������
	USART_Init(DEBUG_USARTx, &USART_InitStructure);
	
//	// �����ж����ȼ�����
//	NVIC_Configuration();
//	
//	// ʹ�ܴ��ڽ����ж�
//	USART_ITConfig(DEBUG_USARTx, USART_IT_RXNE, ENABLE);	
	
	// ʹ�ܴ���
	USART_Cmd(DEBUG_USARTx, ENABLE);	    
}





//����3
void USART3_Config(void)
{
	GPIO_InitTypeDef GPIO_InitStructure3;
	USART_InitTypeDef USART3_InitStructure;

	// �򿪴���GPIO��ʱ��
	DEBUG_USART3_GPIO_APBxClkCmd(DEBUG_USART3_GPIO_CLK, ENABLE);
	
	// �򿪴��������ʱ��
	DEBUG_USART3_APBxClkCmd(DEBUG_USART3_CLK, ENABLE);

	// ��USART Tx��GPIO����Ϊ���츴��ģʽ
	GPIO_InitStructure3.GPIO_Pin = DEBUG_USART3_TX_GPIO_PIN;
	GPIO_InitStructure3.GPIO_Mode = GPIO_Mode_AF_PP;
	GPIO_InitStructure3.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEBUG_USART3_TX_GPIO_PORT, &GPIO_InitStructure3);

  // ��USART Rx��GPIO����Ϊ��������ģʽ
	GPIO_InitStructure3.GPIO_Pin = DEBUG_USART3_RX_GPIO_PIN;
	GPIO_InitStructure3.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	GPIO_Init(DEBUG_USART3_RX_GPIO_PORT, &GPIO_InitStructure3);
	
	// ���ô��ڵĹ�������
	// ���ò�����
	USART3_InitStructure.USART_BaudRate = DEBUG_USART_BAUDRATE;
	// ���� �������ֳ�
	USART3_InitStructure.USART_WordLength = USART_WordLength_8b;
	// ����ֹͣλ
	USART3_InitStructure.USART_StopBits = USART_StopBits_1;
	// ����У��λ
	USART3_InitStructure.USART_Parity = USART_Parity_No ;
	// ����Ӳ��������
	USART3_InitStructure.USART_HardwareFlowControl = 
	USART_HardwareFlowControl_None;
	// ���ù���ģʽ���շ�һ��
	USART3_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;
	// ��ɴ��ڵĳ�ʼ������
	USART_Init(DEBUG_USART3, &USART3_InitStructure);
	
//	// �����ж����ȼ�����
//	NVIC_Configuration();
//	
//	// ʹ�ܴ��ڽ����ж�
//	USART_ITConfig(DEBUG_USARTx, USART_IT_RXNE, ENABLE);	
	
	// ʹ�ܴ���
	USART_Cmd(DEBUG_USART3, ENABLE);	    
}


void USART2_Config(void)
{
	GPIO_InitTypeDef GPIO_InitStructure2;
	USART_InitTypeDef USART2_InitStructure;

	// �򿪴���GPIO��ʱ��
	DEBUG_USART2_GPIO_APBxClkCmd(DEBUG_USART2_GPIO_CLK, ENABLE);
	
	// �򿪴��������ʱ��
	DEBUG_USART2_APBxClkCmd(DEBUG_USART2_CLK, ENABLE);

	// ��USART Tx��GPIO����Ϊ���츴��ģʽ
	GPIO_InitStructure2.GPIO_Pin = DEBUG_USART2_TX_GPIO_PIN;
	GPIO_InitStructure2.GPIO_Mode = GPIO_Mode_AF_PP;
	GPIO_InitStructure2.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(DEBUG_USART2_TX_GPIO_PORT, &GPIO_InitStructure2);

  // ��USART Rx��GPIO����Ϊ��������ģʽ
	GPIO_InitStructure2.GPIO_Pin = DEBUG_USART2_RX_GPIO_PIN;
	GPIO_InitStructure2.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	GPIO_Init(DEBUG_USART2_RX_GPIO_PORT, &GPIO_InitStructure2);
	
	// ���ô��ڵĹ�������
	// ���ò�����
	USART2_InitStructure.USART_BaudRate = DEBUG_USART_BAUDRATE;
	// ���� �������ֳ�
	USART2_InitStructure.USART_WordLength = USART_WordLength_8b;
	// ����ֹͣλ
	USART2_InitStructure.USART_StopBits = USART_StopBits_1;
	// ����У��λ
	USART2_InitStructure.USART_Parity = USART_Parity_No ;
	// ����Ӳ��������
	USART2_InitStructure.USART_HardwareFlowControl = 
	USART_HardwareFlowControl_None;
	// ���ù���ģʽ���շ�һ��
	USART2_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;
	// ��ɴ��ڵĳ�ʼ������
	USART_Init(DEBUG_USART2, &USART2_InitStructure);
	
//	// �����ж����ȼ�����
//	NVIC_Configuration();
//	
//	// ʹ�ܴ��ڽ����ж�
//	USART_ITConfig(DEBUG_USARTx, USART_IT_RXNE, ENABLE);	
	
	// ʹ�ܴ���
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

///�ض���c�⺯��printf�����ڣ��ض�����ʹ��printf����

int fputc(int ch, FILE *f)
{
		/* ����һ���ֽ����ݵ����� */
		USART_SendData(DEBUG_USARTx, (uint8_t) ch);
		
		/* �ȴ�������� */
		while (USART_GetFlagStatus(DEBUG_USARTx, USART_FLAG_TXE) == RESET);		
	
		return (ch);
}

///�ض���c�⺯��scanf�����ڣ���д����ʹ��scanf��getchar�Ⱥ���
int fgetc(FILE *f)
{
		/* �ȴ������������� */
		while (USART_GetFlagStatus(DEBUG_USARTx, USART_FLAG_RXNE) == RESET);

		return (int)USART_ReceiveData(DEBUG_USARTx);
}




