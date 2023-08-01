#include <REGX52.H>
#include "LCD1602.H"

void main(){
	LCD_Init();
	LCD_ShowChar(1,1,'A');
	LCD_ShowString(1,3,"hello world");
	LCD_ShowNum(2,1,56,2);

}