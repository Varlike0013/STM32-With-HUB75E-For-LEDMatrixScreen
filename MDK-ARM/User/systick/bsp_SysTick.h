#ifndef __SYSTICK_H
#define __SYSTICK_H

#include "stm32h7xx.h"

#define NumOfTask 3

typedef uint32_t  u32;

extern int get_tick_count(unsigned long *count);
extern void SysTick_Init(void);
extern void Delay_us(__IO u32 nTime);
extern void TimingDelay_Decrement(void);
#define ST_Delay_ms(x) Delay_us(100*x)	 //��λms
#define ST_HAL_Delay(x)    Delay_us(100*x)	 //��λms

#endif /* __SYSTICK_H */
