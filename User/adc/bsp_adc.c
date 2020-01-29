#include "bsp_adc.h"

__IO uint16_t ADC_ConvertedValue[NOFCHANEL]={0,0,0,0,0};

static void ADCx_GPIO_Config(void)
{
	GPIO_InitTypeDef GPIO_InitStructure;
	
	// 打开 ADC IO端口时钟
	ADC_GPIO_APBxClock_FUN ( ADC_GPIO_CLK, ENABLE );
	
	// 配置 ADC IO 引脚模式
	GPIO_InitStructure.GPIO_Pin = 		ADC_PIN2|
																		ADC_PIN3|
																		ADC_PIN4|
																		ADC_PIN5|
																		ADC_PIN6;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AIN;
	
	// 初始化 ADC IO
	GPIO_Init(ADC_PORT, &GPIO_InitStructure);				
}

static void ADCx_Mode_Config(void)
{
	
	
	DMA_InitTypeDef DMA_InitStructure;
	// 打开DMA时钟
	RCC_AHBPeriphClockCmd(RCC_AHBPeriph_DMA1, ENABLE);
	
	// 打开ADC时钟
	ADC_APBxClock_FUN ( ADC_CLK, ENABLE );
	
	// 复位DMA控制器
	DMA_DeInit(ADC_DMA_CHANNEL);
	
	// 配置 DMA 初始化结构体
	// 外设基址为：ADC 数据寄存器地址
	DMA_InitStructure.DMA_PeripheralBaseAddr = ( uint32_t ) ( & ( ADC_x->DR ) );
	
	// 存储器地址，实际上就是一个内部SRAM的变量
	DMA_InitStructure.DMA_MemoryBaseAddr = (uint32_t)&ADC_ConvertedValue;
	
	// 数据源来自外设
	DMA_InitStructure.DMA_DIR = DMA_DIR_PeripheralSRC;
	
	// 缓冲区大小为1，缓冲区的大小应该等于存储器的大小
	DMA_InitStructure.DMA_BufferSize = NOFCHANEL;
	
	// 外设寄存器只有一个，地址不用递增
	DMA_InitStructure.DMA_PeripheralInc = DMA_PeripheralInc_Disable;

	// 存储器地址固定
	DMA_InitStructure.DMA_MemoryInc = DMA_MemoryInc_Enable; 
	
	// 外设数据大小为半字，即两个字节
	DMA_InitStructure.DMA_PeripheralDataSize = DMA_PeripheralDataSize_HalfWord;
	
	// 存储器数据大小也为半字，跟外设数据大小相同
	DMA_InitStructure.DMA_MemoryDataSize = DMA_MemoryDataSize_HalfWord;
	
	// 循环传输模式
	DMA_InitStructure.DMA_Mode = DMA_Mode_Circular;	

	// DMA 传输通道优先级为高，当使用一个DMA通道时，优先级设置不影响
	DMA_InitStructure.DMA_Priority = DMA_Priority_High;
	
	// 禁止存储器到存储器模式，因为是从外设到存储器
	DMA_InitStructure.DMA_M2M = DMA_M2M_Disable;
	
	// 初始化DMA
	DMA_Init(ADC_DMA_CHANNEL, &DMA_InitStructure);
	
	// 使能 DMA 通道
	DMA_Cmd(ADC_DMA_CHANNEL , ENABLE);
	
	
	
	ADC_InitTypeDef ADC_InitStruct;
	
	// 打开ADC时钟
	ADC_APBxClock_FUN ( ADC_CLK, ENABLE );
  ADC_InitStruct.ADC_Mode=ADC_Mode_Independent ;
	ADC_InitStruct.ADC_ScanConvMode=ENABLE;
	ADC_InitStruct.ADC_ContinuousConvMode=ENABLE;
	ADC_InitStruct.ADC_ExternalTrigConv=ADC_ExternalTrigConv_None ;
	ADC_InitStruct.ADC_DataAlign=ADC_DataAlign_Right; 
	ADC_InitStruct.ADC_NbrOfChannel=NOFCHANEL;
	
	ADC_Init(ADC_x, &ADC_InitStruct);
	
	RCC_ADCCLKConfig(RCC_PCLK2_Div8);
	
	ADC_RegularChannelConfig(ADC_x, ADC_CHANNEL2, 1, ADC_SampleTime_55Cycles5);
	ADC_RegularChannelConfig(ADC_x, ADC_CHANNEL3, 2, ADC_SampleTime_55Cycles5);
	ADC_RegularChannelConfig(ADC_x, ADC_CHANNEL4, 3, ADC_SampleTime_55Cycles5);
	ADC_RegularChannelConfig(ADC_x, ADC_CHANNEL5, 4, ADC_SampleTime_55Cycles5);
	ADC_RegularChannelConfig(ADC_x, ADC_CHANNEL6, 5, ADC_SampleTime_55Cycles5);
	
	// 使能ADC DMA 请求
	ADC_DMACmd(ADC_x, ENABLE);
	
	ADC_ITConfig(ADC_x, ADC_IT_EOC, ENABLE);
	
	ADC_Cmd(ADC_x, ENABLE);
	
	ADC_StartCalibration(ADC_x);
	
	while(ADC_GetCalibrationStatus(ADC_x));
	
	ADC_SoftwareStartConvCmd(ADC_x, ENABLE);
}



void ADCx_Init(void)
{

	ADCx_GPIO_Config();
	ADCx_Mode_Config();

}
