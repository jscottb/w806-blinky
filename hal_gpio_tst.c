// Copy this in place of main.c for the blinky code.
#include <stdio.h>
#include "wm_hal.h"

static void setup(void);

int main (void)
{
    // Do our setup.
    setup ( );
    
    // This is equivalent to loop ()...
    while (true) {      
       HAL_GPIO_WritePin (GPIOB, GPIO_PIN_0, 1);
       HAL_GPIO_WritePin (GPIOB, GPIO_PIN_0, 0);
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

    __HAL_RCC_GPIO_CLK_ENABLE ( );

    GPIO_InitStruct.Pin = GPIO_PIN_0;
    GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    HAL_GPIO_Init (GPIOB, &GPIO_InitStruct);
}



