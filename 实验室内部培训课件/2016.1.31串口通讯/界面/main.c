/*******************************************************************************
* 文件名 : main.c

* 版本     作者            日期            说明
* V1.0                     2015/01/29     初始版本

* 描述   : MCU:stc89c52      晶振:    MHz
* 作用   ： 使用串口实现二级界面 
*******************************************************************************/

#include "uart.h"
#include "mmi.h"

/*******************************************************************************
* 功能描述 : 主函数
* 输入参数 : 无
* 返回参数 : 无
* 函数详解 : 程序入口    
*******************************************************************************/
void main(void)
{
	UartInit();
	Init_UI();
	while(1)
	{
	 	KeyProcess(RemapKey());
	}

}


