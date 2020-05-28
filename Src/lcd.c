#include "lcd.h"
//-----------------------------------------------------------//
void delay(void)
{
	for(int i = 0; i < 1000; i++){
		;
	}
}
//-----------------------------------------------------------//
//RS = 1 Transmit data
void LCD_Write4Data(uint8_t dt)
{
	if(((dt >> 3)&0x1)==1){d7_set;} else d7_reset;
	if(((dt >> 2)&0x1)==1){d6_set;} else d6_reset;
	if(((dt >> 1)&0x1)==1){d5_set;} else d5_reset;
	if((dt&0x1)==1){d4_set;} else d4_reset;
}
void LCD_WriteData(uint8_t dt)
{
	if(((dt >> 7)&0x1)==1){d7_set;} else d7_reset;
	if(((dt >> 6)&0x1)==1){d6_set;} else d6_reset;
	if(((dt >> 5)&0x1)==1){d5_set;} else d5_reset;
	if(((dt >> 4)&0x1)==1){d4_set;} else d4_reset;
	if(((dt >> 3)&0x1)==1){d3_set;} else d3_reset;
	if(((dt >> 2)&0x1)==1){d2_set;} else d2_reset;
	if(((dt >> 1)&0x1)==1){d1_set;} else d1_reset;
	if(((dt)&0x1)==1){d0_set;} else d0_reset;
}
//-----------------------------------------------------------//
//RS = 0 Transmit command
void LCD_Command(uint8_t dt)
{
	rs0;
	LCD_WriteData(dt);
	e1;
	delay();
	e0;
}
//-----------------------------------------------------------//
void LCD_Data(uint8_t dt)
{
	rs1;
	LCD_WriteData(dt>>4);
	e1;
	delay();
	e0;
	LCD_WriteData(dt);
	e1;
	delay();
	e0;
	
}
//-----------------------------------------------------------//
void LCD_ini()
{
	HAL_Delay(50);
	LCD_Command(0x38);
	HAL_Delay(5);
	LCD_Command(0xE);
	HAL_Delay(5);
}
//-----------------------------------------------------------//
