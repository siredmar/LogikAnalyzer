#include "Gpio_Lcfg.h"

#include "Gpio.h"

const Gpio_ConfigType Gpio_InitialConfiguration_s =
{
        {
                /* PORT B */
                {
                        GPIO_TRUE,
                        GPIO_CHANNEL_PB0,
                        GPIO_INPUT,
                        GPIO_PIN_INITIAL_HIGH
                },
                {
                        GPIO_FALSE,
                        GPIO_CHANNEL_PB1,
                        GPIO_INPUT,
                        GPIO_PIN_INITIAL_HIGH
                },
                {
                        GPIO_TRUE,
                        GPIO_CHANNEL_PB2,
                        GPIO_INPUT,
                        GPIO_PIN_INITIAL_HIGH
                },
                {
                        GPIO_TRUE,
                        GPIO_CHANNEL_PB3,
                        GPIO_INPUT,
                        GPIO_PIN_INITIAL_HIGH
                },
                {
                        GPIO_TRUE,
                        GPIO_CHANNEL_PB4,
                        GPIO_INPUT,
                        GPIO_PIN_INITIAL_HIGH
                },
                {
                        GPIO_TRUE,
                        GPIO_CHANNEL_PB5,
                        GPIO_INPUT,
                        GPIO_PIN_INITIAL_LOW
                },
                {
                        GPIO_TRUE,
                        GPIO_CHANNEL_PB6,
                        GPIO_INPUT,
                        GPIO_PIN_INITIAL_HIGH
                },
                {
                        GPIO_TRUE,
                        GPIO_CHANNEL_PB7,
                        GPIO_INPUT,
                        GPIO_PIN_INITIAL_HIGH
                },

                /* PORT C */
                {
                        GPIO_FALSE,
                        GPIO_CHANNEL_PC0,
                        GPIO_INPUT,
                        GPIO_PIN_INITIAL_HIGH
                },
                {
                        GPIO_FALSE,
                        GPIO_CHANNEL_PC1,
                        GPIO_OUTPUT,
                        GPIO_PIN_INITIAL_HIGH
                },
                {
                        GPIO_FALSE,
                        GPIO_CHANNEL_PC2,
                        GPIO_OUTPUT,
                        GPIO_PIN_INITIAL_HIGH
                },
                {
                        GPIO_FALSE,
                        GPIO_CHANNEL_PC3,
                        GPIO_OUTPUT,
                        GPIO_PIN_INITIAL_HIGH
                },
                {
                        GPIO_FALSE,
                        GPIO_CHANNEL_PC4,
                        GPIO_OUTPUT,
                        GPIO_PIN_INITIAL_HIGH
                },
                {
                        GPIO_FALSE,
                        GPIO_CHANNEL_PC5,
                        GPIO_INPUT,
                        GPIO_PIN_INITIAL_HIGH
                },
                {
                        GPIO_FALSE,
                        GPIO_CHANNEL_PC6,
                        GPIO_INPUT,
                        GPIO_PIN_INITIAL_HIGH
                },

                /* PORT D */
                {
                        /* UART RX */
                        GPIO_FALSE,
                        GPIO_CHANNEL_PD0,
                        GPIO_INPUT,
                        GPIO_PIN_INITIAL_HIGH
                },
                {
                        /* UART TX */
                        GPIO_FALSE,
                        GPIO_CHANNEL_PD1,
                        GPIO_INPUT,
                        GPIO_PIN_INITIAL_HIGH
                },
                {
                        GPIO_FALSE,
                        GPIO_CHANNEL_PD2,
                        GPIO_OUTPUT,
                        GPIO_PIN_INITIAL_HIGH
                },
                {
                        GPIO_FALSE,
                        GPIO_CHANNEL_PD3,
                        GPIO_OUTPUT,
                        GPIO_PIN_INITIAL_HIGH
                },
                {
                        GPIO_FALSE,
                        GPIO_CHANNEL_PD4,
                        GPIO_OUTPUT,
                        GPIO_PIN_INITIAL_HIGH
                },
                {
                        GPIO_FALSE,
                        GPIO_CHANNEL_PD5,
                        GPIO_OUTPUT,
                        GPIO_PIN_INITIAL_HIGH
                },
                {       /* Caliper DAT Pin */
                        GPIO_TRUE,
                        GPIO_CHANNEL_PD6,
                        GPIO_INPUT,
                        GPIO_PIN_INITIAL_HIGH
                },
                {       /* Caliper CLK Pin */
                        GPIO_TRUE,
                        GPIO_CHANNEL_PD7,
                        GPIO_INPUT,
                        GPIO_PIN_INITIAL_HIGH
                }
        }
};





const void *Gpio_GetLcfgData(void)
{
    return ((const void *) &Gpio_InitialConfiguration_s);
}
