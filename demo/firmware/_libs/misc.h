/// @file misc.h
/// @brief 
/// @author Zhang Hao, stavrosatic@gmail.com
/// @version R1.5
/// @date 2017-10-13
#ifndef _MISC_H
#define _MISC_H

#include <stdint.h>
#include <stdbool.h>

#include "stm32f0xx.h"
//#include "config.h"

#define sbi(x, y) (x)->BSRR = (y)
#define cbi(x, y) (x)->BRR = (y)
#define _BV(x) (1UL << (x))
#define bit_is_set(x, y) GPIO_ReadInputDataBit((x), (y))
#define bit_is_clear(x, y) !GPIO_ReadInputDataBit((x), (y))
#define _dbg() uprintf(USART2, "%d %s\n", __LINE__, __FILE__)

typedef int32_t s32;
typedef int16_t s16;
typedef int8_t s8;
typedef const int32_t sc32;     /*!< Read Only */
typedef const int16_t sc16;     /*!< Read Only */
typedef const int8_t sc8;       /*!< Read Only */
typedef volatile int32_t vs32;
typedef volatile int16_t vs16;
typedef volatile int8_t vs8;
typedef volatile const int32_t vsc32;   /*!< Read Only */
typedef volatile const int16_t vsc16;   /*!< Read Only */
typedef volatile const int8_t vsc8; /*!< Read Only */
typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t u8;
typedef const uint32_t uc32;    /*!< Read Only */
typedef const uint16_t uc16;    /*!< Read Only */
typedef const uint8_t uc8;      /*!< Read Only */
typedef volatile uint32_t vu32;
typedef volatile uint16_t vu16;
typedef volatile uint8_t vu8;
typedef volatile const uint32_t vuc32;  /*!< Read Only */
typedef volatile const uint16_t vuc16;  /*!< Read Only */
typedef volatile const uint8_t vuc8;    /*!< Read Only */

typedef int64_t s64;
typedef const int64_t sc64;
typedef volatile int64_t vs64;
typedef volatile const int64_t vsc64;
typedef uint64_t u64;
typedef const uint64_t uc64;
typedef volatile uint64_t vu64;
typedef volatile const uint64_t vuc64;

u8 ByteReverse(u8 byte);
void _delay_us(vu32 n);
void _delay_ms_loop(vu32 n);
void _delay_ms_systick(vu32 n);
void _delay_nms_mm(void);

#define _delay_ms _delay_ms_systick

#endif
