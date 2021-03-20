/************************************************************************************
 * arch/arm/src/stm32f0l0g0/hardware/stm32f09x_pinmap.h
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ************************************************************************************/

#ifndef __ARCH_ARM_SRC_STM32F0L0G0_HARDWARE_STM32F09X_PINMAP_H
#define __ARCH_ARM_SRC_STM32F0L0G0_HARDWARE_STM32F09X_PINMAP_H

/************************************************************************************
 * Included Files
 ************************************************************************************/

#include <nuttx/config.h>

#include "stm32_gpio.h"

/************************************************************************************
 * Pre-processor Definitions
 ************************************************************************************/
/* Alternate Pin Functions.
 *
 * Alternative pin selections are provided with a numeric suffix like _1, _2, etc.
 * Drivers, however, will use the pin selection without the numeric suffix.
 * Additional definitions are required in the board.h file.  For example, if
 * CAN1_RX connects vis PD0 on some board, then the following definition should
 * appear in the board.h header file for that board:
 *
 * #define GPIO_CAN1_RX GPIO_CAN1_RX_1
 *
 * The driver will then automatically configure PD0 as the CAN1 RX pin.
 */

/* WARNING!!! WARNING!!! WARNING!!! WARNING!!! WARNING!!! WARNING!!! WARNING!!!
 * Additional effort is required to select specific GPIO options such as frequency,
 * open-drain/push-pull, and pull-up/down!  Just the basics are defined for most
 * pins in this file.
 */

/* ADC 1 */

#define GPIO_ADC1_IN0            (GPIO_ANALOG | GPIO_PORTA | GPIO_PIN0)
#define GPIO_ADC1_IN1            (GPIO_ANALOG | GPIO_PORTA | GPIO_PIN1)
#define GPIO_ADC1_IN2            (GPIO_ANALOG | GPIO_PORTA | GPIO_PIN2)
#define GPIO_ADC1_IN3            (GPIO_ANALOG | GPIO_PORTA | GPIO_PIN3)
#define GPIO_ADC1_IN4            (GPIO_ANALOG | GPIO_PORTA | GPIO_PIN4)
#define GPIO_ADC1_IN5            (GPIO_ANALOG | GPIO_PORTA | GPIO_PIN5)
#define GPIO_ADC1_IN6            (GPIO_ANALOG | GPIO_PORTA | GPIO_PIN6)
#define GPIO_ADC1_IN7            (GPIO_ANALOG | GPIO_PORTA | GPIO_PIN7)
#define GPIO_ADC1_IN8            (GPIO_ANALOG | GPIO_PORTB | GPIO_PIN0)
#define GPIO_ADC1_IN9            (GPIO_ANALOG | GPIO_PORTB | GPIO_PIN1)
#define GPIO_ADC1_IN10           (GPIO_ANALOG | GPIO_PORTC | GPIO_PIN0)
#define GPIO_ADC1_IN11           (GPIO_ANALOG | GPIO_PORTC | GPIO_PIN1)
#define GPIO_ADC1_IN12           (GPIO_ANALOG | GPIO_PORTC | GPIO_PIN2)
#define GPIO_ADC1_IN13           (GPIO_ANALOG | GPIO_PORTC | GPIO_PIN3)
#define GPIO_ADC1_IN14           (GPIO_ANALOG | GPIO_PORTC | GPIO_PIN4)
#define GPIO_ADC1_IN15           (GPIO_ANALOG | GPIO_PORTC | GPIO_PIN5)

/* CAN 1 */

#define GPIO_CAN1_RX_1           (GPIO_ALT | GPIO_AF0 | GPIO_PORTD | GPIO_PIN0)
#define GPIO_CAN1_RX_2           (GPIO_ALT | GPIO_AF4 | GPIO_PORTA | GPIO_PIN11)
#define GPIO_CAN1_RX_3           (GPIO_ALT | GPIO_AF4 | GPIO_PORTB | GPIO_PIN8)
#define GPIO_CAN1_TX_1           (GPIO_ALT | GPIO_AF0 | GPIO_PORTD | GPIO_PIN1)
#define GPIO_CAN1_TX_3           (GPIO_ALT | GPIO_AF4 | GPIO_PORTA | GPIO_PIN12)
#define GPIO_CAN1_TX_4           (GPIO_ALT | GPIO_AF4 | GPIO_PORTB | GPIO_PIN9)

/* HDMI-CEC */

#define GPIO_CEC_1               (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN10)
#define GPIO_CEC_2               (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN8)
#define GPIO_CEC_3               (GPIO_ALT | GPIO_AF1 | GPIO_PORTA | GPIO_PIN5)

/* Analog Comparators */

#define GPIO_COMP1_OUT_1         (GPIO_ALT | GPIO_AF7 | GPIO_PORTA | GPIO_PIN0)
#define GPIO_COMP1_OUT_2         (GPIO_ALT | GPIO_AF7 | GPIO_PORTA | GPIO_PIN11)
#define GPIO_COMP1_OUT_3         (GPIO_ALT | GPIO_AF7 | GPIO_PORTA | GPIO_PIN6)

#define GPIO_COMP2_OUT_1         (GPIO_ALT | GPIO_AF7 | GPIO_PORTA | GPIO_PIN12)
#define GPIO_COMP2_OUT_2         (GPIO_ALT | GPIO_AF7 | GPIO_PORTA | GPIO_PIN2)
#define GPIO_COMP2_OUT_3         (GPIO_ALT | GPIO_AF7 | GPIO_PORTA | GPIO_PIN7)

/* CRS */

#define GPIO_CRS_SYNC_1          (GPIO_ALT | GPIO_AF0 | GPIO_PORTD | GPIO_PIN15)
#define GPIO_CRS_SYNC_2          (GPIO_ALT | GPIO_AF0 | GPIO_PORTF | GPIO_PIN0)
#define GPIO_CRS_SYNC_3          (GPIO_ALT | GPIO_AF4 | GPIO_PORTA | GPIO_PIN8)

/* Events */

#define GPIO_EVENTOUT_1          (GPIO_ALT | GPIO_AF0 | GPIO_PORTA | GPIO_PIN1)
#define GPIO_EVENTOUT_2          (GPIO_ALT | GPIO_AF0 | GPIO_PORTA | GPIO_PIN11)
#define GPIO_EVENTOUT_3          (GPIO_ALT | GPIO_AF0 | GPIO_PORTA | GPIO_PIN12)
#define GPIO_EVENTOUT_4          (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN0)
#define GPIO_EVENTOUT_5          (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN11)
#define GPIO_EVENTOUT_6          (GPIO_ALT | GPIO_AF0 | GPIO_PORTC | GPIO_PIN0)
#define GPIO_EVENTOUT_7          (GPIO_ALT | GPIO_AF0 | GPIO_PORTC | GPIO_PIN1)
#define GPIO_EVENTOUT_8          (GPIO_ALT | GPIO_AF0 | GPIO_PORTC | GPIO_PIN2)
#define GPIO_EVENTOUT_9          (GPIO_ALT | GPIO_AF0 | GPIO_PORTC | GPIO_PIN3)
#define GPIO_EVENTOUT_10         (GPIO_ALT | GPIO_AF0 | GPIO_PORTC | GPIO_PIN4)
#define GPIO_EVENTOUT_11         (GPIO_ALT | GPIO_AF0 | GPIO_PORTF | GPIO_PIN2)
#define GPIO_EVENTOUT_12         (GPIO_ALT | GPIO_AF0 | GPIO_PORTF | GPIO_PIN3)
#define GPIO_EVENTOUT_13         (GPIO_ALT | GPIO_AF1 | GPIO_PORTB | GPIO_PIN12)
#define GPIO_EVENTOUT_14         (GPIO_ALT | GPIO_AF1 | GPIO_PORTB | GPIO_PIN3)
#define GPIO_EVENTOUT_15         (GPIO_ALT | GPIO_AF1 | GPIO_PORTE | GPIO_PIN0)
#define GPIO_EVENTOUT_16         (GPIO_ALT | GPIO_AF1 | GPIO_PORTE | GPIO_PIN1)
#define GPIO_EVENTOUT_17         (GPIO_ALT | GPIO_AF2 | GPIO_PORTB | GPIO_PIN4)
#define GPIO_EVENTOUT_18         (GPIO_ALT | GPIO_AF3 | GPIO_PORTA | GPIO_PIN15)
#define GPIO_EVENTOUT_19         (GPIO_ALT | GPIO_AF3 | GPIO_PORTA | GPIO_PIN8)
#define GPIO_EVENTOUT_20         (GPIO_ALT | GPIO_AF3 | GPIO_PORTB | GPIO_PIN9)
#define GPIO_EVENTOUT_21         (GPIO_ALT | GPIO_AF6 | GPIO_PORTA | GPIO_PIN6)
#define GPIO_EVENTOUT_22         (GPIO_ALT | GPIO_AF6 | GPIO_PORTA | GPIO_PIN7)

/* I2C */

#define GPIO_I2C1_SCL_1          (GPIO_ALT | GPIO_AF1 | GPIO_PORTB | GPIO_PIN6)
#define GPIO_I2C1_SCL_2          (GPIO_ALT | GPIO_AF1 | GPIO_PORTB | GPIO_PIN8)
#define GPIO_I2C1_SDA_1          (GPIO_ALT | GPIO_AF1 | GPIO_PORTB | GPIO_PIN7)
#define GPIO_I2C1_SDA_2          (GPIO_ALT | GPIO_AF1 | GPIO_PORTB | GPIO_PIN9)
#define GPIO_I2C1_SMBA           (GPIO_ALT | GPIO_AF3 | GPIO_PORTB | GPIO_PIN5)

#define GPIO_I2C2_SCL_1          (GPIO_ALT | GPIO_AF1 | GPIO_PORTB | GPIO_PIN10)
#define GPIO_I2C2_SCL_2          (GPIO_ALT | GPIO_AF5 | GPIO_PORTB | GPIO_PIN13)
#define GPIO_I2C2_SDA_1          (GPIO_ALT | GPIO_AF1 | GPIO_PORTB | GPIO_PIN11)
#define GPIO_I2C2_SDA_2          (GPIO_ALT | GPIO_AF5 | GPIO_PORTB | GPIO_PIN14)

/* I2S */

#define GPIO_I2S1_CK_1           (GPIO_ALT | GPIO_AF0 | GPIO_PORTA | GPIO_PIN5)
#define GPIO_I2S1_CK_2           (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN3)
#define GPIO_I2S1_CK_3           (GPIO_ALT | GPIO_AF1 | GPIO_PORTE | GPIO_PIN13)
#define GPIO_I2S1_MCK_1          (GPIO_ALT | GPIO_AF0 | GPIO_PORTA | GPIO_PIN6)
#define GPIO_I2S1_MCK_2          (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN4)
#define GPIO_I2S1_MCK_3          (GPIO_ALT | GPIO_AF1 | GPIO_PORTE | GPIO_PIN14)
#define GPIO_I2S1_SD_1           (GPIO_ALT | GPIO_AF0 | GPIO_PORTA | GPIO_PIN7)
#define GPIO_I2S1_SD_2           (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN5)
#define GPIO_I2S1_SD_3           (GPIO_ALT | GPIO_AF1 | GPIO_PORTE | GPIO_PIN15)
#define GPIO_I2S1_WS_1           (GPIO_ALT | GPIO_AF0 | GPIO_PORTA | GPIO_PIN15)
#define GPIO_I2S1_WS_2           (GPIO_ALT | GPIO_AF0 | GPIO_PORTA | GPIO_PIN4)
#define GPIO_I2S1_WS_3           (GPIO_ALT | GPIO_AF1 | GPIO_PORTE | GPIO_PIN12)

#define GPIO_I2S2_CK_1           (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN13)
#define GPIO_I2S2_CK_2           (GPIO_ALT | GPIO_AF1 | GPIO_PORTD | GPIO_PIN1)
#define GPIO_I2S2_CK_3           (GPIO_ALT | GPIO_AF5 | GPIO_PORTB | GPIO_PIN10)
#define GPIO_I2S2_MCK_1          (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN14)
#define GPIO_I2S2_MCK_2          (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN2)
#define GPIO_I2S2_MCK_3          (GPIO_ALT | GPIO_AF1 | GPIO_PORTD | GPIO_PIN3)
#define GPIO_I2S2_SD_1           (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN15)
#define GPIO_I2S2_SD_2           (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN3)
#define GPIO_I2S2_SD_3           (GPIO_ALT | GPIO_AF1 | GPIO_PORTD | GPIO_PIN4)
#define GPIO_I2S2_WS_1           (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN12)
#define GPIO_I2S2_WS_2           (GPIO_ALT | GPIO_AF1 | GPIO_PORTD | GPIO_PIN0)
#define GPIO_I2S2_WS_3           (GPIO_ALT | GPIO_AF5 | GPIO_PORTB | GPIO_PIN9)

/* IR */

#define GPIO_IR_OUT_1            (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN9)
#define GPIO_IR_OUT_2            (GPIO_ALT | GPIO_AF1 | GPIO_PORTA | GPIO_PIN13)

/* Clock output */

#define GPIO_MCO                 (GPIO_ALT | GPIO_AF0 | GPIO_PORTA | GPIO_PIN8)

/* SPI */

#define GPIO_SPI1_MISO_1         (GPIO_ALT | GPIO_AF0 | GPIO_PORTA | GPIO_PIN6)
#define GPIO_SPI1_MISO_2         (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN4)
#define GPIO_SPI1_MISO_3         (GPIO_ALT | GPIO_AF1 | GPIO_PORTE | GPIO_PIN14)
#define GPIO_SPI1_MOSI_1         (GPIO_ALT | GPIO_AF0 | GPIO_PORTA | GPIO_PIN7)
#define GPIO_SPI1_MOSI_2         (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN5)
#define GPIO_SPI1_MOSI_3         (GPIO_ALT | GPIO_AF1 | GPIO_PORTE | GPIO_PIN15)
#define GPIO_SPI1_NSS_1          (GPIO_ALT | GPIO_AF0 | GPIO_PORTA | GPIO_PIN15)
#define GPIO_SPI1_NSS_2          (GPIO_ALT | GPIO_AF0 | GPIO_PORTA | GPIO_PIN4)
#define GPIO_SPI1_NSS_3          (GPIO_ALT | GPIO_AF1 | GPIO_PORTE | GPIO_PIN12)
#define GPIO_SPI1_SCK_1          (GPIO_ALT | GPIO_AF0 | GPIO_PORTA | GPIO_PIN5)
#define GPIO_SPI1_SCK_2          (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN3)
#define GPIO_SPI1_SCK_3          (GPIO_ALT | GPIO_AF1 | GPIO_PORTE | GPIO_PIN13)

#define GPIO_SPI2_MISO_1         (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN14)
#define GPIO_SPI2_MISO_2         (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN2)
#define GPIO_SPI2_MISO_3         (GPIO_ALT | GPIO_AF1 | GPIO_PORTD | GPIO_PIN3)
#define GPIO_SPI2_MOSI_1         (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN15)
#define GPIO_SPI2_MOSI_2         (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN3)
#define GPIO_SPI2_MOSI_3         (GPIO_ALT | GPIO_AF1 | GPIO_PORTD | GPIO_PIN4)
#define GPIO_SPI2_NSS_1          (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN12)
#define GPIO_SPI2_NSS_2          (GPIO_ALT | GPIO_AF1 | GPIO_PORTD | GPIO_PIN0)
#define GPIO_SPI2_NSS_3          (GPIO_ALT | GPIO_AF5 | GPIO_PORTB | GPIO_PIN9)
#define GPIO_SPI2_SCK_1          (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN13)
#define GPIO_SPI2_SCK_2          (GPIO_ALT | GPIO_AF1 | GPIO_PORTD | GPIO_PIN1)
#define GPIO_SPI2_SCK_3          (GPIO_ALT | GPIO_AF5 | GPIO_PORTB | GPIO_PIN10)

/* SWD */

#define GPIO_SWCLK               (GPIO_ALT | GPIO_AF0 | GPIO_PORTA | GPIO_PIN14)
#define GPIO_SWDIO               (GPIO_ALT | GPIO_AF0 | GPIO_PORTA | GPIO_PIN13)

/* Timers */

#define GPIO_TIM1_BKIN_1         (GPIO_ALT | GPIO_AF0 | GPIO_PORTE | GPIO_PIN15)
#define GPIO_TIM1_BKIN_2         (GPIO_ALT | GPIO_AF2 | GPIO_PORTA | GPIO_PIN6)
#define GPIO_TIM1_BKIN_3         (GPIO_ALT | GPIO_AF2 | GPIO_PORTB | GPIO_PIN12)
#define GPIO_TIM1_CH1_1          (GPIO_ALT | GPIO_AF0 | GPIO_PORTE | GPIO_PIN9)
#define GPIO_TIM1_CH1_2          (GPIO_ALT | GPIO_AF2 | GPIO_PORTA | GPIO_PIN8)
#define GPIO_TIM1_CH1N_1         (GPIO_ALT | GPIO_AF0 | GPIO_PORTE | GPIO_PIN8)
#define GPIO_TIM1_CH1N_2         (GPIO_ALT | GPIO_AF2 | GPIO_PORTA | GPIO_PIN7)
#define GPIO_TIM1_CH1N_3         (GPIO_ALT | GPIO_AF2 | GPIO_PORTB | GPIO_PIN13)
#define GPIO_TIM1_CH2_1          (GPIO_ALT | GPIO_AF0 | GPIO_PORTE | GPIO_PIN11)
#define GPIO_TIM1_CH2_2          (GPIO_ALT | GPIO_AF2 | GPIO_PORTA | GPIO_PIN9)
#define GPIO_TIM1_CH2N_1         (GPIO_ALT | GPIO_AF0 | GPIO_PORTE | GPIO_PIN10)
#define GPIO_TIM1_CH2N_2         (GPIO_ALT | GPIO_AF2 | GPIO_PORTB | GPIO_PIN0)
#define GPIO_TIM1_CH2N_3         (GPIO_ALT | GPIO_AF2 | GPIO_PORTB | GPIO_PIN14)
#define GPIO_TIM1_CH3_1          (GPIO_ALT | GPIO_AF0 | GPIO_PORTE | GPIO_PIN13)
#define GPIO_TIM1_CH3_2          (GPIO_ALT | GPIO_AF2 | GPIO_PORTA | GPIO_PIN10)
#define GPIO_TIM1_CH3N_1         (GPIO_ALT | GPIO_AF0 | GPIO_PORTE | GPIO_PIN12)
#define GPIO_TIM1_CH3N_2         (GPIO_ALT | GPIO_AF2 | GPIO_PORTB | GPIO_PIN1)
#define GPIO_TIM1_CH3N_3         (GPIO_ALT | GPIO_AF2 | GPIO_PORTB | GPIO_PIN15)
#define GPIO_TIM1_CH4_1          (GPIO_ALT | GPIO_AF0 | GPIO_PORTE | GPIO_PIN14)
#define GPIO_TIM1_CH4_2          (GPIO_ALT | GPIO_AF2 | GPIO_PORTA | GPIO_PIN11)
#define GPIO_TIM1_ETR_1          (GPIO_ALT | GPIO_AF0 | GPIO_PORTE | GPIO_PIN7)
#define GPIO_TIM1_ETR_2          (GPIO_ALT | GPIO_AF2 | GPIO_PORTA | GPIO_PIN12)

#define GPIO_TIM2_CH1_ETR_1      (GPIO_ALT | GPIO_AF2 | GPIO_PORTA | GPIO_PIN0)
#define GPIO_TIM2_CH1_ETR_2      (GPIO_ALT | GPIO_AF2 | GPIO_PORTA | GPIO_PIN15)
#define GPIO_TIM2_CH1_ETR_3      (GPIO_ALT | GPIO_AF2 | GPIO_PORTA | GPIO_PIN5)
#define GPIO_TIM2_CH2_1          (GPIO_ALT | GPIO_AF2 | GPIO_PORTA | GPIO_PIN1)
#define GPIO_TIM2_CH2_2          (GPIO_ALT | GPIO_AF2 | GPIO_PORTB | GPIO_PIN3)
#define GPIO_TIM2_CH3_1          (GPIO_ALT | GPIO_AF2 | GPIO_PORTA | GPIO_PIN2)
#define GPIO_TIM2_CH3_2          (GPIO_ALT | GPIO_AF2 | GPIO_PORTB | GPIO_PIN10)
#define GPIO_TIM2_CH4_1          (GPIO_ALT | GPIO_AF2 | GPIO_PORTA | GPIO_PIN3)
#define GPIO_TIM2_CH4_2          (GPIO_ALT | GPIO_AF2 | GPIO_PORTB | GPIO_PIN11)

#define GPIO_TIM3_CH1_1          (GPIO_ALT | GPIO_AF0 | GPIO_PORTC | GPIO_PIN6)
#define GPIO_TIM3_CH1_2          (GPIO_ALT | GPIO_AF0 | GPIO_PORTE | GPIO_PIN3)
#define GPIO_TIM3_CH1_3          (GPIO_ALT | GPIO_AF1 | GPIO_PORTA | GPIO_PIN6)
#define GPIO_TIM3_CH1_4          (GPIO_ALT | GPIO_AF1 | GPIO_PORTB | GPIO_PIN4)
#define GPIO_TIM3_CH2_1          (GPIO_ALT | GPIO_AF0 | GPIO_PORTC | GPIO_PIN7)
#define GPIO_TIM3_CH2_2          (GPIO_ALT | GPIO_AF0 | GPIO_PORTE | GPIO_PIN4)
#define GPIO_TIM3_CH2_3          (GPIO_ALT | GPIO_AF1 | GPIO_PORTA | GPIO_PIN7)
#define GPIO_TIM3_CH2_4          (GPIO_ALT | GPIO_AF1 | GPIO_PORTB | GPIO_PIN5)
#define GPIO_TIM3_CH3_1          (GPIO_ALT | GPIO_AF0 | GPIO_PORTC | GPIO_PIN8)
#define GPIO_TIM3_CH3_2          (GPIO_ALT | GPIO_AF0 | GPIO_PORTE | GPIO_PIN5)
#define GPIO_TIM3_CH3_3          (GPIO_ALT | GPIO_AF1 | GPIO_PORTB | GPIO_PIN0)
#define GPIO_TIM3_CH4_1          (GPIO_ALT | GPIO_AF0 | GPIO_PORTC | GPIO_PIN9)
#define GPIO_TIM3_CH4_2          (GPIO_ALT | GPIO_AF0 | GPIO_PORTE | GPIO_PIN6)
#define GPIO_TIM3_CH4_3          (GPIO_ALT | GPIO_AF1 | GPIO_PORTB | GPIO_PIN1)
#define GPIO_TIM3_ETR_1          (GPIO_ALT | GPIO_AF0 | GPIO_PORTD | GPIO_PIN2)
#define GPIO_TIM3_ETR_2          (GPIO_ALT | GPIO_AF0 | GPIO_PORTE | GPIO_PIN2)

#define GPIO_TIM14_CH1_1         (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN1)
#define GPIO_TIM14_CH1_2         (GPIO_ALT | GPIO_AF4 | GPIO_PORTA | GPIO_PIN4)
#define GPIO_TIM14_CH1_3         (GPIO_ALT | GPIO_AF4 | GPIO_PORTA | GPIO_PIN7)

#define GPIO_TIM15_BKIN_1        (GPIO_ALT | GPIO_AF0 | GPIO_PORTA | GPIO_PIN9)
#define GPIO_TIM15_BKIN_2        (GPIO_ALT | GPIO_AF5 | GPIO_PORTB | GPIO_PIN12)
#define GPIO_TIM15_CH1_1         (GPIO_ALT | GPIO_AF0 | GPIO_PORTA | GPIO_PIN2)
#define GPIO_TIM15_CH1_2         (GPIO_ALT | GPIO_AF0 | GPIO_PORTF | GPIO_PIN9)
#define GPIO_TIM15_CH1_3         (GPIO_ALT | GPIO_AF1 | GPIO_PORTB | GPIO_PIN14)
#define GPIO_TIM15_CH1N_1        (GPIO_ALT | GPIO_AF3 | GPIO_PORTB | GPIO_PIN15)
#define GPIO_TIM15_CH1N_2        (GPIO_ALT | GPIO_AF5 | GPIO_PORTA | GPIO_PIN1)
#define GPIO_TIM15_CH2_1         (GPIO_ALT | GPIO_AF0 | GPIO_PORTA | GPIO_PIN3)
#define GPIO_TIM15_CH2_2         (GPIO_ALT | GPIO_AF0 | GPIO_PORTF | GPIO_PIN10)
#define GPIO_TIM15_CH2_3         (GPIO_ALT | GPIO_AF1 | GPIO_PORTB | GPIO_PIN15)

#define GPIO_TIM16_BKIN          (GPIO_ALT | GPIO_AF2 | GPIO_PORTB | GPIO_PIN5)
#define GPIO_TIM16_CH1_1         (GPIO_ALT | GPIO_AF0 | GPIO_PORTE | GPIO_PIN0)
#define GPIO_TIM16_CH1_2         (GPIO_ALT | GPIO_AF2 | GPIO_PORTB | GPIO_PIN8)
#define GPIO_TIM16_CH1_3         (GPIO_ALT | GPIO_AF5 | GPIO_PORTA | GPIO_PIN6)
#define GPIO_TIM16_CH1N          (GPIO_ALT | GPIO_AF2 | GPIO_PORTB | GPIO_PIN6)

#define GPIO_TIM17_BKIN_1        (GPIO_ALT | GPIO_AF0 | GPIO_PORTA | GPIO_PIN10)
#define GPIO_TIM17_BKIN_2        (GPIO_ALT | GPIO_AF5 | GPIO_PORTB | GPIO_PIN4)
#define GPIO_TIM17_CH1_1         (GPIO_ALT | GPIO_AF0 | GPIO_PORTE | GPIO_PIN1)
#define GPIO_TIM17_CH1_2         (GPIO_ALT | GPIO_AF2 | GPIO_PORTB | GPIO_PIN9)
#define GPIO_TIM17_CH1_3         (GPIO_ALT | GPIO_AF5 | GPIO_PORTA | GPIO_PIN7)
#define GPIO_TIM17_CH1N          (GPIO_ALT | GPIO_AF2 | GPIO_PORTB | GPIO_PIN7)

/* TSC */

#define GPIO_TSC_G1_IO1          (GPIO_ALT | GPIO_AF3 | GPIO_PORTA | GPIO_PIN0)
#define GPIO_TSC_G1_IO2          (GPIO_ALT | GPIO_AF3 | GPIO_PORTA | GPIO_PIN1)
#define GPIO_TSC_G1_IO3          (GPIO_ALT | GPIO_AF3 | GPIO_PORTA | GPIO_PIN2)
#define GPIO_TSC_G1_IO4          (GPIO_ALT | GPIO_AF3 | GPIO_PORTA | GPIO_PIN3)
#define GPIO_TSC_G2_IO1          (GPIO_ALT | GPIO_AF3 | GPIO_PORTA | GPIO_PIN4)
#define GPIO_TSC_G2_IO2          (GPIO_ALT | GPIO_AF3 | GPIO_PORTA | GPIO_PIN5)
#define GPIO_TSC_G2_IO3          (GPIO_ALT | GPIO_AF3 | GPIO_PORTA | GPIO_PIN6)
#define GPIO_TSC_G2_IO4          (GPIO_ALT | GPIO_AF3 | GPIO_PORTA | GPIO_PIN7)
#define GPIO_TSC_G3_IO1          (GPIO_ALT | GPIO_AF0 | GPIO_PORTC | GPIO_PIN5)
#define GPIO_TSC_G3_IO2          (GPIO_ALT | GPIO_AF3 | GPIO_PORTB | GPIO_PIN0)
#define GPIO_TSC_G3_IO3          (GPIO_ALT | GPIO_AF3 | GPIO_PORTB | GPIO_PIN1)
#define GPIO_TSC_G3_IO4          (GPIO_ALT | GPIO_AF3 | GPIO_PORTB | GPIO_PIN2)
#define GPIO_TSC_G4_IO1          (GPIO_ALT | GPIO_AF3 | GPIO_PORTA | GPIO_PIN9)
#define GPIO_TSC_G4_IO2          (GPIO_ALT | GPIO_AF3 | GPIO_PORTA | GPIO_PIN10)
#define GPIO_TSC_G4_IO3          (GPIO_ALT | GPIO_AF3 | GPIO_PORTA | GPIO_PIN11)
#define GPIO_TSC_G4_IO4          (GPIO_ALT | GPIO_AF3 | GPIO_PORTA | GPIO_PIN12)
#define GPIO_TSC_G5_IO1          (GPIO_ALT | GPIO_AF3 | GPIO_PORTB | GPIO_PIN3)
#define GPIO_TSC_G5_IO2          (GPIO_ALT | GPIO_AF3 | GPIO_PORTB | GPIO_PIN4)
#define GPIO_TSC_G5_IO3          (GPIO_ALT | GPIO_AF3 | GPIO_PORTB | GPIO_PIN6)
#define GPIO_TSC_G5_IO4          (GPIO_ALT | GPIO_AF3 | GPIO_PORTB | GPIO_PIN7)
#define GPIO_TSC_G6_IO1          (GPIO_ALT | GPIO_AF3 | GPIO_PORTB | GPIO_PIN11)
#define GPIO_TSC_G6_IO2          (GPIO_ALT | GPIO_AF3 | GPIO_PORTB | GPIO_PIN12)
#define GPIO_TSC_G6_IO3          (GPIO_ALT | GPIO_AF3 | GPIO_PORTB | GPIO_PIN13)
#define GPIO_TSC_G6_IO4          (GPIO_ALT | GPIO_AF3 | GPIO_PORTB | GPIO_PIN14)
#define GPIO_TSC_G7_IO1          (GPIO_ALT | GPIO_AF1 | GPIO_PORTE | GPIO_PIN2)
#define GPIO_TSC_G7_IO2          (GPIO_ALT | GPIO_AF1 | GPIO_PORTE | GPIO_PIN3)
#define GPIO_TSC_G7_IO3          (GPIO_ALT | GPIO_AF1 | GPIO_PORTE | GPIO_PIN4)
#define GPIO_TSC_G7_IO4          (GPIO_ALT | GPIO_AF1 | GPIO_PORTE | GPIO_PIN5)
#define GPIO_TSC_G8_IO1          (GPIO_ALT | GPIO_AF1 | GPIO_PORTD | GPIO_PIN12)
#define GPIO_TSC_G8_IO2          (GPIO_ALT | GPIO_AF1 | GPIO_PORTD | GPIO_PIN13)
#define GPIO_TSC_G8_IO3          (GPIO_ALT | GPIO_AF1 | GPIO_PORTD | GPIO_PIN14)
#define GPIO_TSC_G8_IO4          (GPIO_ALT | GPIO_AF1 | GPIO_PORTD | GPIO_PIN15)
#define GPIO_TSC_SYNC_1          (GPIO_ALT | GPIO_AF3 | GPIO_PORTB | GPIO_PIN10)
#define GPIO_TSC_SYNC_2          (GPIO_ALT | GPIO_AF3 | GPIO_PORTB | GPIO_PIN8)

/* USARTs */

#define GPIO_USART1_CK           (GPIO_ALT | GPIO_AF1 | GPIO_PORTA | GPIO_PIN8)
#define GPIO_USART1_CTS          (GPIO_ALT | GPIO_AF1 | GPIO_PORTA | GPIO_PIN11)
#define GPIO_USART1_RTS          (GPIO_ALT | GPIO_AF1 | GPIO_PORTA | GPIO_PIN12)
#define GPIO_USART1_RX_1         (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN7)
#define GPIO_USART1_RX_2         (GPIO_ALT | GPIO_AF1 | GPIO_PORTA | GPIO_PIN10)
#define GPIO_USART1_TX_1         (GPIO_ALT | GPIO_AF0 | GPIO_PORTB | GPIO_PIN6)
#define GPIO_USART1_TX_2         (GPIO_ALT | GPIO_AF1 | GPIO_PORTA | GPIO_PIN9)

#define GPIO_USART2_CK_1         (GPIO_ALT | GPIO_AF0 | GPIO_PORTD | GPIO_PIN7)
#define GPIO_USART2_CK_2         (GPIO_ALT | GPIO_AF1 | GPIO_PORTA | GPIO_PIN4)
#define GPIO_USART2_CTS_1        (GPIO_ALT | GPIO_AF0 | GPIO_PORTD | GPIO_PIN3)
#define GPIO_USART2_CTS_2        (GPIO_ALT | GPIO_AF1 | GPIO_PORTA | GPIO_PIN0)
#define GPIO_USART2_RTS_1        (GPIO_ALT | GPIO_AF0 | GPIO_PORTD | GPIO_PIN4)
#define GPIO_USART2_RTS_2        (GPIO_ALT | GPIO_AF1 | GPIO_PORTA | GPIO_PIN1)
#define GPIO_USART2_RX_1         (GPIO_ALT | GPIO_AF0 | GPIO_PORTD | GPIO_PIN6)
#define GPIO_USART2_RX_2         (GPIO_ALT | GPIO_AF1 | GPIO_PORTA | GPIO_PIN15)
#define GPIO_USART2_RX_3         (GPIO_ALT | GPIO_AF1 | GPIO_PORTA | GPIO_PIN3)
#define GPIO_USART2_TX_1         (GPIO_ALT | GPIO_AF0 | GPIO_PORTD | GPIO_PIN5)
#define GPIO_USART2_TX_2         (GPIO_ALT | GPIO_AF1 | GPIO_PORTA | GPIO_PIN14)
#define GPIO_USART2_TX_3         (GPIO_ALT | GPIO_AF1 | GPIO_PORTA | GPIO_PIN2)

#define GPIO_USART3_CK_1         (GPIO_ALT | GPIO_AF0 | GPIO_PORTD | GPIO_PIN10)
#define GPIO_USART3_CK_2         (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN12)
#define GPIO_USART3_CK_3         (GPIO_ALT | GPIO_AF4 | GPIO_PORTB | GPIO_PIN0)
#define GPIO_USART3_CK_4         (GPIO_ALT | GPIO_AF4 | GPIO_PORTB | GPIO_PIN12)
#define GPIO_USART3_CTS_1        (GPIO_ALT | GPIO_AF0 | GPIO_PORTD | GPIO_PIN11)
#define GPIO_USART3_CTS_2        (GPIO_ALT | GPIO_AF4 | GPIO_PORTA | GPIO_PIN6)
#define GPIO_USART3_CTS_3        (GPIO_ALT | GPIO_AF4 | GPIO_PORTB | GPIO_PIN13)
#define GPIO_USART3_RTS_1        (GPIO_ALT | GPIO_AF0 | GPIO_PORTD | GPIO_PIN12)
#define GPIO_USART3_RTS_2        (GPIO_ALT | GPIO_AF1 | GPIO_PORTD | GPIO_PIN2)
#define GPIO_USART3_RTS_3        (GPIO_ALT | GPIO_AF4 | GPIO_PORTB | GPIO_PIN1)
#define GPIO_USART3_RTS_4        (GPIO_ALT | GPIO_AF4 | GPIO_PORTB | GPIO_PIN14)
#define GPIO_USART3_RX_1         (GPIO_ALT | GPIO_AF0 | GPIO_PORTD | GPIO_PIN9)
#define GPIO_USART3_RX_2         (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN11)
#define GPIO_USART3_RX_3         (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN5)
#define GPIO_USART3_RX_4         (GPIO_ALT | GPIO_AF4 | GPIO_PORTB | GPIO_PIN11)
#define GPIO_USART3_TX_1         (GPIO_ALT | GPIO_AF0 | GPIO_PORTD | GPIO_PIN8)
#define GPIO_USART3_TX_2         (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN10)
#define GPIO_USART3_TX_3         (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN4)
#define GPIO_USART3_TX_4         (GPIO_ALT | GPIO_AF4 | GPIO_PORTB | GPIO_PIN10)

#define GPIO_USART4_CK           (GPIO_ALT | GPIO_AF0 | GPIO_PORTC | GPIO_PIN12)
#define GPIO_USART4_CTS          (GPIO_ALT | GPIO_AF4 | GPIO_PORTB | GPIO_PIN7)
#define GPIO_USART4_RTS          (GPIO_ALT | GPIO_AF4 | GPIO_PORTA | GPIO_PIN15)
#define GPIO_USART4_RX_1         (GPIO_ALT | GPIO_AF0 | GPIO_PORTC | GPIO_PIN11)
#define GPIO_USART4_RX_2         (GPIO_ALT | GPIO_AF4 | GPIO_PORTA | GPIO_PIN1)
#define GPIO_USART4_TX_1         (GPIO_ALT | GPIO_AF0 | GPIO_PORTC | GPIO_PIN10)
#define GPIO_USART4_TX_2         (GPIO_ALT | GPIO_AF4 | GPIO_PORTA | GPIO_PIN0)

#define GPIO_USART5_CK_RST_1     (GPIO_ALT | GPIO_AF4 | GPIO_PORTB | GPIO_PIN5)
#define GPIO_USART5_CK_RST_2     (GPIO_ALT | GPIO_AF1 | GPIO_PORTE | GPIO_PIN7)
#define GPIO_USART5_RX_1         (GPIO_ALT | GPIO_AF4 | GPIO_PORTB | GPIO_PIN4)
#define GPIO_USART5_RX_2         (GPIO_ALT | GPIO_AF2 | GPIO_PORTD | GPIO_PIN2)
#define GPIO_USART5_RX_3         (GPIO_ALT | GPIO_AF1 | GPIO_PORTE | GPIO_PIN11)
#define GPIO_USART5_TX_1         (GPIO_ALT | GPIO_AF4 | GPIO_PORTB | GPIO_PIN3)
#define GPIO_USART5_TX_2         (GPIO_ALT | GPIO_AF2 | GPIO_PORTC | GPIO_PIN12)
#define GPIO_USART5_TX_3         (GPIO_ALT | GPIO_AF1 | GPIO_PORTE | GPIO_PIN10)

#define GPIO_USART6_TX_1         (GPIO_ALT | GPIO_AF5 | GPIO_PORTA | GPIO_PIN4)
#define GPIO_USART6_RX_1         (GPIO_ALT | GPIO_AF5 | GPIO_PORTA | GPIO_PIN5)
#define GPIO_USART6_TX_2         (GPIO_ALT | GPIO_AF2 | GPIO_PORTC | GPIO_PIN0)
#define GPIO_USART6_RX_2         (GPIO_ALT | GPIO_AF2 | GPIO_PORTC | GPIO_PIN1)
#define GPIO_USART6_TX_3         (GPIO_ALT | GPIO_AF1 | GPIO_PORTF | GPIO_PIN9)
#define GPIO_USART6_RX_3         (GPIO_ALT | GPIO_AF1 | GPIO_PORTF | GPIO_PIN10)
#define GPIO_USART6_CK_RST       (GPIO_ALT | GPIO_AF2 | GPIO_PORTF | GPIO_PIN3)

#define GPIO_USART7_TX_1         (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN0)
#define GPIO_USART7_RX_1         (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN1)
#define GPIO_USART7_TX_2         (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN6)
#define GPIO_USART7_RX_2         (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN7)
#define GPIO_USART7_TX_3         (GPIO_ALT | GPIO_AF1 | GPIO_PORTF | GPIO_PIN2)
#define GPIO_USART7_RX_3         (GPIO_ALT | GPIO_AF1 | GPIO_PORTF | GPIO_PIN3)
#define GPIO_USART7_CK_RST_1     (GPIO_ALT | GPIO_AF2 | GPIO_PORTD | GPIO_PIN15)
#define GPIO_USART7_CK_RST_2     (GPIO_ALT | GPIO_AF2 | GPIO_PORTF | GPIO_PIN2)

#define GPIO_USART8_TX_1         (GPIO_ALT | GPIO_AF2 | GPIO_PORTC | GPIO_PIN2)
#define GPIO_USART8_RX_1         (GPIO_ALT | GPIO_AF2 | GPIO_PORTC | GPIO_PIN3)
#define GPIO_USART8_TX_2         (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN8)
#define GPIO_USART8_RX_2         (GPIO_ALT | GPIO_AF1 | GPIO_PORTC | GPIO_PIN9)
#define GPIO_USART8_TX_3         (GPIO_ALT | GPIO_AF0 | GPIO_PORTD | GPIO_PIN8)
#define GPIO_USART8_RX_3         (GPIO_ALT | GPIO_AF0 | GPIO_PORTD | GPIO_PIN13)
#define GPIO_USART8_CK_RST       (GPIO_ALT | GPIO_AF2 | GPIO_PORTD | GPIO_PIN14)

#endif /* __ARCH_ARM_SRC_STM32F0L0G0_HARDWARE_STM32F09X_PINMAP_H */
