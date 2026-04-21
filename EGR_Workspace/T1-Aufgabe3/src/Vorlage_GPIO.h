#ifndef VORLAGE_GPIO_H
#define VORLAGE_GPIO_H

#include "stdint.h"

// Vervollständigen Sie die benötigten Adressen und Offsets
#define EGR_RCC_AHB2ENR_OFFSET // Adresse
#define EGR_RCC_BASE           // Adresse
#define EGR_RCC_AHB2ENR_GPIOA  // Adresse
#define EGR_RCC_AHB2ENR_GPIOB  // Adresse
#define EGR_RCC_AHB2ENR_GPIOC  // Adresse
#define EGR_RCC_AHB2ENR_GPIOD  // Adresse
#define EGR_RCC_AHB2ENR_GPIOE  // Adresse
#define EGR_RCC_AHB2ENR_GPIOF  // Adresse
#define EGR_RCC_AHB2ENR_GPIOG  // Adresse

#define EGR_GPIOA_BASE // Adresse
#define EGR_GPIOB_BASE // Adresse
#define EGR_GPIOC_BASE // Adresse
#define EGR_GPIOD_BASE // Adresse
#define EGR_GPIOE_BASE // Adresse
#define EGR_GPIOF_BASE // Adresse
#define EGR_GPIOG_BASE // Adresse

#define EGR_GPIO_MODER_OFFSET   // Offset
#define EGR_GPIO_OTYPER_OFFSET  // Offset
#define EGR_GPIO_OSPEEDR_OFFSET // Offset
#define EGR_GPIO_PUPDR_OFFSET   // Offset
#define EGR_GPIO_IDR_OFFSET     // Offset
#define EGR_GPIO_ODR_OFFSET     // Offset

#define EGR_GPIO_INPUT     // Nummer
#define EGR_GPIO_OUTPUT    // Nummer
#define EGR_GPIO_ANALOG    // Nummer
#define EGR_GPIO_NOPULL    // Nummer
#define EGR_GPIO_PULLUP    // Nummer
#define EGR_GPIO_PULLDOWN  // Nummer
#define EGR_GPIO_PUSHPULL  // Nummer
#define EGR_GPIO_OPENDRAIN // Nummer

// Diese Funktionen werden in der zugehörigen C-Datei implementiert
void enableGPIOModule(int RCC_AHB2ENR_GPIO_Module);
void enablePin(uint32_t GPIOModule, int pinNumber, int IO, int mode);
int readPin(uint32_t GPIOModule, int pinNumber);
void setPin(uint32_t GPIOModule, int pinNumber, int level);

#endif