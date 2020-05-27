#include "sys.h"
#include "usart.h"
#include "delay.h"
#include "led.h"
#include "lcd.h"

/*********************************************************************************
			  ___   _     _____  _____  _   _  _____  _____  _   __
			 / _ \ | |   |_   _||  ___|| \ | ||_   _||  ___|| | / /
			/ /_\ \| |     | |  | |__  |  \| |  | |  | |__  | |/ /
			|  _  || |     | |  |  __| | . ` |  | |  |  __| |    \
			| | | || |_____| |_ | |___ | |\  |  | |  | |___ | |\  \
			\_| |_/\_____/\___/ \____/ \_| \_/  \_/  \____/ \_| \_/

 *	******************************************************************************
 *	����ԭ�� Pandora STM32L475 IoT������	ʵ��10
 *	TFTLCD��ʾʵ��		HAL��汾
 *	����֧�֣�www.openedv.com
 *	�Ա����̣�http://openedv.taobao.com
 *	��ע΢�Ź���ƽ̨΢�źţ�"����ԭ��"����ѻ�ȡSTM32���ϡ�
 *	������������ӿƼ����޹�˾
 *	���ߣ�����ԭ�� @ALIENTEK
 *	******************************************************************************/

int main(void)
{
    u8 color = 0;

    HAL_Init();
    SystemClock_Config();	//��ʼ��ϵͳʱ��Ϊ80M
    delay_init(80); 		//��ʼ����ʱ����    80Mϵͳʱ��
    uart_init(115200);		//��ʼ�����ڣ�������Ϊ115200

    LED_Init();				//��ʼ��LED
    LCD_Init();				//��ʼ��LCD

    while(1)
    {
//        switch(color % 12)
//        {
//            case 0:
//                LCD_Clear(WHITE);
//                break;
//            case 1:
//                LCD_Clear(BLACK);
//                break;
//            case 2:
//                LCD_Clear(BLUE);
//                break;
//            case 3:
//                LCD_Clear(RED);
//                break;
//            case 4:
//                LCD_Clear(MAGENTA);
//                break;
//            case 5:
//                LCD_Clear(GREEN);
//                break;
//            case 6:
//                LCD_Clear(CYAN);
//                break;
//            case 7:
//                LCD_Clear(YELLOW);
//                break;
//            case 8:
//                LCD_Clear(BRRED);
//                break;
//            case 9:
//                LCD_Clear(GRAY);
//                break;
//            case 10:
//                LCD_Clear(LGRAY);
//                break;
//            case 11:
//                LCD_Clear(BROWN);
//                break;
//            default :
//                color = 0;
//                break;
//        }

        Display_ALIENTEK_LOGO(0, 0);
//        POINT_COLOR = RED;
//        BACK_COLOR = WHITE;
//        LCD_ShowString(0, 100, 240, 32, 32, "Pandora STM32L4");
//        LCD_ShowString(0, 140, 240, 24, 24, "TFTLCD TEST 240*240");

//        POINT_COLOR = RED;
//        BACK_COLOR = YELLOW;
//        LCD_ShowString(0, 170, 240, 16, 16, "ATOM@ALIENTEK");
//        LCD_ShowString(0, 200, 240, 12, 12, "2018/10/28");
//        color++;
        LED_B_TogglePin;
        delay_ms(1000);
    }
}


