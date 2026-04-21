#include "Vorlage_GPIO.h"

// Enable GPIO Module
void enableGPIOModule(int RCC_AHB2ENR_GPIO_Module)
{
    // Vervollständigen Sie den Code hier
}

/*
    set pin as input (0) or output (1)
    mode depends on IO
    input: no pull (0), pull-up (1) or pull-down (2)
    output: push-pull (0) or open-drain (1)
*/
void enablePin(uint32_t GPIOModule, int pinNumber, int IO, int mode)
{
    // Vervollständigen Sie den Code hier
}

// Read pin state
// 0 = low, 1 = high
int readPin(uint32_t GPIOModule, int pinNumber)
{
    // Vervollständigen Sie den Code hier
}

// Set pin state
// 0 = low, 1 = high
void setPin(uint32_t GPIOModule, int pinNumber, int level)
{
    // Vervollständigen Sie den Code hier
}