/*
 * hw_config.h
 *
 *  Created on: May 17, 2015
 *      Author: david_s5
 */

#ifndef HW_CONFIG_H_
#define HW_CONFIG_H_

/****************************************************************************
 * TARGET_HW_PX4_FMU_V1
 ****************************************************************************/

# define APP_LOAD_ADDRESS               0x08001000
# define APP_SIZE_MAX                   0xf000
# define BOOTLOADER_DELAY               200
# define BOARD_PIO
# define INTERFACE_USB                	0
# define INTERFACE_USART                1
# define USBDEVICESTRING                ""
# define USBPRODUCTID                   -1

# define OSC_FREQ                       24

# define BOARD_PIN_LED_ACTIVITY         GPIO14
# define BOARD_PIN_LED_BOOTLOADER       GPIO15
# define BOARD_PORT_LEDS                GPIOB
# define BOARD_CLOCK_LEDS_REGISTER      RCC_APB2ENR
# define BOARD_CLOCK_LEDS               RCC_APB2ENR_IOPBEN
# define BOARD_LED_ON                   gpio_clear
# define BOARD_LED_OFF                  gpio_set

# define BOARD_USART                    USART2
# define BOARD_USART_CLOCK_REGISTER     RCC_APB1ENR
# define BOARD_USART_CLOCK_BIT          RCC_APB1ENR_USART2EN

# define BOARD_PORT_USART               GPIOA
# define BOARD_PIN_TX                   GPIO_USART2_TX
# define BOARD_PIN_RX                   GPIO_USART2_RX
# define BOARD_USART_PIN_CLOCK_REGISTER RCC_APB2ENR
# define BOARD_USART_PIN_CLOCK_BIT      RCC_APB2ENR_IOPAEN

# define BOARD_FORCE_BL_PIN             GPIO5
# define BOARD_FORCE_BL_PORT            GPIOB
# define BOARD_FORCE_BL_CLOCK_REGISTER  RCC_APB2ENR
# define BOARD_FORCE_BL_CLOCK_BIT       RCC_APB2ENR_IOPBEN
# define BOARD_FORCE_BL_PULL            GPIO_CNF_INPUT_PULL_UPDOWN // depend on external pull
# define BOARD_FORCE_BL_VALUE           BOARD_FORCE_BL_PIN

# define BOARD_FLASH_SECTORS            60
# define BOARD_TYPE                     10
# define FLASH_SECTOR_SIZE              0x400


#endif /* HW_CONFIG_H_ */
