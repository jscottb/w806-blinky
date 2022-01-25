// Copy this in place of main.c for the blinky code.
#include <stdio.h>
#include "wm_hal.h"

static void setup(void);

int main (void)
{
    uint32_t data_en;

    // Do our setup.
    setup ( );
    
    data_en = READ_REG(GPIOB->DATA_B_EN);
    SET_BIT(GPIOB->DATA_B_EN, GPIO_PIN_0);
    // This is equivalent to loop ()...
    while (true) {   
        // Set and reset GPIO_PIN_0 with PORT registers 
        // Using the macros provided.
        SET_BIT(GPIOB->DATA, GPIO_PIN_0);
        WRITE_REG(GPIOB->DATA_B_EN, data_en);  
        CLEAR_BIT(GPIOB->DATA, GPIO_PIN_0);
        WRITE_REG(GPIOB->DATA_B_EN, data_en);   
    }
    
    return 0;
}

static void setup (void)
{
    GPIO_InitTypeDef GPIO_InitStruct = {0};
    
    // Set and Configure the system clock
    SystemClock_Config (CPU_CLK_240M);

    // This function is used to init the HAL Library.
    // It must be called before any other HAL_ functions
    HAL_Init(); 

    GPIO_InitStruct.Pin = GPIO_PIN_0;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    HAL_GPIO_Init (GPIOB, &GPIO_InitStruct);
}



