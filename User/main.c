#include "stm32f10x.h"
#include "bsp_usart.h"
#include "bsp_adc.h"
#include "bsp_SysTick.h"
#include <stdio.h>
#include <string.h>



void Delay(__IO uint32_t nCount)
{
  for(; nCount != 0; nCount--);
} 
 

extern __IO uint16_t ADC_ConvertedValue[NOFCHANEL];
char * pStr1;
char * pStr2;
char * pStr3;
char * pStr4;
char * pStr5;
char * pStr6;

float ADC_ConvertedValueLocal[NOFCHANEL];  


int main(void)
{	

  USART_Config();
	
	ADCx_Init();
	
	
//	double ave[5]= {101.28966428 , 19.86794333 , 22.87905355 , 21.56706346 , 90.76890708};
//	double sta[5]= {33.83858036 , 7.12443079 , 7.79323216 , 18.85726884 , 51.21347471};
//	double l1_weight[7][5] = {{ 0.2940, -1.2477,  0.4921,  0.3503,  0.8394},
//														{-1.7012, -0.2436,  1.1702,  0.2470, -0.4134},
//														{-0.9265, -0.8531, -2.3974,  0.4107, -2.2628},
//														{-1.8505, -1.5651,  2.0628,  0.1233,  0.2138},
//														{ 0.5710,  2.9373,  0.0549, -0.9779, -2.1817},
//														{ 2.5369, -0.5616,  0.6672,  0.0891,  1.2968},
//														{-0.0743, -0.1891, -1.4792, -0.2163,  1.5193}};
//	double l1_bias[7]= {0.6750, 1.4746, 1.0579, 1.8631, 1.6745, 2.2803, 0.8982};
//	double l2_weight[10][7] = {{ 0.8993,  0.3323, -0.7869,  1.6229, -1.2017,  1.5720, -0.4949},
//														 { 0.5545, -0.5035,  0.7128, -1.2215, -1.1830,  1.9798,  0.7311},
//        										 { 0.6937, -0.5028,  0.1131,  0.0450, -0.3906,  0.8678,  1.7608},
//        										 { 0.4022, -0.5947,  1.8575, -1.1261,  1.3481,  0.1971, -0.4933},
//        										 {-1.2195,  0.4424,  2.4054,  0.2580,  0.3044, -1.7434, -0.6676},
//       								 		   {-0.3190,  0.9257, -0.2717,  0.4280,  1.7534, -0.7346, -0.0814},
//      										   { 0.3109,  1.2668,  0.6900,  1.0198, -0.2218, -0.3819,  0.9084},
//      										   { 0.4245,  1.0274, -0.4727,  2.2417, -0.9642, -1.0256, -0.4666},
//       										   {-0.1037,  0.9075, -0.8478,  0.3508,  0.7955,  1.5593, -0.2318},
//       										   {-1.0504, -1.1329, -0.5913, -1.1985,  2.2889,  0.6093, -0.3260}};
//	double l2_bias[10] = { 0.0701,  0.0866,  0.9378,  0.1424, -0.4774, -0.3320,  0.4078, -0.5205,0.4723, -0.1940};
//	double data[5] = { 0.0,0.0,0.0,0.0,0.0 }, resault[7] = { 0.0,0.0,0.0,0.0,0.0,0.0,0.0 };
//	double a[10] = { 0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0 };
//	double max;
//	int x = 0;
//	double r[5];
  while (1)
	{	
    
		  ADC_ConvertedValueLocal[0] =(float) ADC_ConvertedValue[0]/4096*3.3;
			ADC_ConvertedValueLocal[1] =(float) ADC_ConvertedValue[1]/4096*3.3;
			ADC_ConvertedValueLocal[2] =(float) ADC_ConvertedValue[2]/4096*3.3;
			ADC_ConvertedValueLocal[3] =(float) ADC_ConvertedValue[3]/4096*3.3;
			ADC_ConvertedValueLocal[4] =(float) ADC_ConvertedValue[4]/4096*3.3;
		
			ADC_ConvertedValueLocal[0]=22*ADC_ConvertedValueLocal[0]/(3.3-ADC_ConvertedValueLocal[0]);
			ADC_ConvertedValueLocal[1]=22*ADC_ConvertedValueLocal[1]/(3.3-ADC_ConvertedValueLocal[1]);
			ADC_ConvertedValueLocal[2]=22*ADC_ConvertedValueLocal[2]/(3.3-ADC_ConvertedValueLocal[2]);
			ADC_ConvertedValueLocal[3]=22*ADC_ConvertedValueLocal[3]/(3.3-ADC_ConvertedValueLocal[3]);
			ADC_ConvertedValueLocal[4]=22*ADC_ConvertedValueLocal[4]/(3.3-ADC_ConvertedValueLocal[4]);
		
////*******************************************************************************
//		for (int t = 0; t < 5; t++)
//	{
//		r[t]=ADC_ConvertedValueLocal[t];
//		data[t] = (ADC_ConvertedValueLocal[t] - ave[t]) / sta[t];
//	}
//	
//	for (int n = 0; n <= 6; n++)
//	{
//		for (int q = 0; q <= 4; q++)
//		{
//			resault[n] =resault[n]+ data[q] * l1_weight[n][q];
//		}
//		resault[n] = resault[n] + l1_bias[n];
//	}
//	
//	for (int i = 0; i <= 9; i++)
//	{
//		for (int u = 0; u <= 6; u++)
//		{
//			a[i] = a[i] + l2_weight[i][u] * resault[u];
//		}
//		a[i] += l2_bias[i];
//	}
//	
//	max = a[0];
//	x = 1;
//	for (int j = 0; j < 10; j++)
//	{
//	  //printf("%f\n",a[j]);
//		if (max < a[j])
//		{
//			max = a[j];
//			x = j+1;
//		}
//	 }
	
	 
//*************************************************************************
			printf("%f,%f,%f,%f,%f\n", ADC_ConvertedValueLocal[0],ADC_ConvertedValueLocal[1],ADC_ConvertedValueLocal[2],ADC_ConvertedValueLocal[3],ADC_ConvertedValueLocal[4]);
			Delay(0xFFFFF);
	}
   
}

