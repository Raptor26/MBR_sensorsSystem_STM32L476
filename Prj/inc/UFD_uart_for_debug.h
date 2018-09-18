/**
 * @file   	UFD_uart_for_debug.h
 * @author
 * @version
 * @date 	18 сент. 2018 г.
 * @brief
 */


#ifndef UFD_UART_FOR_DEBUG_H_
#define UFD_UART_FOR_DEBUG_H_


/*#### |Begin| --> Секция - "Include" ########################################*/
/*==== |Begin| --> Секция - "C libraries" ====================================*/
#include "stdio.h"
#include "stdint.h"
/*==== |End  | <-- Секция - "C libraries" ====================================*/

/*==== |Begin| --> Секция - "MK peripheral libraries" ========================*/
#include "stm32l4xx.h"
#include "stm32l4xx_hal.h"
#include "stm32l4xx_ll_usart.h"
/*==== |End  | <-- Секция - "MK peripheral libraries" ========================*/

/*==== |Begin| --> Секция - "Extern libraries" ===============================*/
/*==== |End  | <-- Секция - "Extern libraries" ===============================*/
/*#### |End  | <-- Секция - "Include" ########################################*/


/*#### |Begin| --> Секция - "Определение констант" ###########################*/
/*#### |End  | <-- Секция - "Определение констант" ###########################*/


/*#### |Begin| --> Секция - "Определение типов" ##############################*/
/*#### |End  | <-- Секция - "Определение типов" ##############################*/


/*#### |Begin| --> Секция - "Определение глобальных переменных" ##############*/
/*#### |End  | <-- Секция - "Определение глобальных переменных" ##############*/


/*#### |Begin| --> Секция - "Прототипы глобальных функций" ###################*/
extern void
UFD_Init_All_USART2_TxRx_DMA1_Channel7_IO_Ports(
	uint32_t baudrate);

extern void
UFD_StartForceDMATransmit(
	uint32_t *pMemSource,
	uint16_t cnt);

extern void
UFD_StartDMATransmit(
	uint32_t *pMemSource,
	uint16_t cnt);
/*#### |End  | <-- Секция - "Прототипы глобальных функций" ###################*/


/*#### |Begin| --> Секция - "Определение макросов" ###########################*/
/*#### |End  | <-- Секция - "Определение макросов" ###########################*/

#endif	/* UFD_UART_FOR_DEBUG_H_ */

/*############################################################################*/
/*################################ END OF FILE ###############################*/
/*############################################################################*/