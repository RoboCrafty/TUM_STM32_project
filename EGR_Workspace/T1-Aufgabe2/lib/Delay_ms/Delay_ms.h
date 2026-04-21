#ifndef DELAY_MS_H
#define DELAY_MS_H

#include "stdint.h"

// using TIM6
// max duration in ms: 65.536 (16 bit)

void delay_ms(uint32_t milliseconds);

#endif
