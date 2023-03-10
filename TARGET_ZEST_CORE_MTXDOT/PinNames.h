/*
 * Copyright (c) 2021, CATIE
 * SPDX-License-Identifier: Apache-2.0
 */

/* MBED TARGET LIST: ZEST_CORE_MTXDOT */

#ifndef MBED_PINNAMES_H
#define MBED_PINNAMES_H

#include "cmsis.h"
#include "PinNamesTypes.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef enum {
    ALT0  = 0x100,
} ALTx;

typedef enum {
    PA_0       = 0x00,
    PA_1       = 0x01,
    PA_2       = 0x02,
    PA_2_ALT0  = PA_2  | ALT0, // same pin used for alternate HW
    PA_3       = 0x03,
    PA_3_ALT0  = PA_3  | ALT0, // same pin used for alternate HW
    PA_4       = 0x04,
    PA_4_ALT0  = PA_4  | ALT0, // same pin used for alternate HW
    PA_5       = 0x05,
    PA_6       = 0x06,
    PA_6_ALT0  = PA_6  | ALT0, // same pin used for alternate HW
    PA_7       = 0x07,
    PA_7_ALT0  = PA_7  | ALT0, // same pin used for alternate HW
    PA_8       = 0x08,
    PA_9       = 0x09,
    PA_10      = 0x0A,
    PA_11      = 0x0B,
    PA_12      = 0x0C,
    PA_13      = 0x0D,
    PA_14      = 0x0E,
    PA_15      = 0x0F,
    PA_15_ALT0 = PA_15 | ALT0, // same pin used for alternate HW
    PB_0       = 0x10,
    PB_1       = 0x11,
    PB_2       = 0x12,
    PB_3       = 0x13,
    PB_3_ALT0  = PB_3  | ALT0, // same pin used for alternate HW
    PB_4       = 0x14,
    PB_4_ALT0  = PB_4  | ALT0, // same pin used for alternate HW
    PB_5       = 0x15,
    PB_5_ALT0  = PB_5  | ALT0, // same pin used for alternate HW
    PB_6       = 0x16,
    PB_7       = 0x17,
    PB_8       = 0x18,
    PB_8_ALT0  = PB_8  | ALT0, // same pin used for alternate HW
    PB_9       = 0x19,
    PB_9_ALT0  = PB_9  | ALT0, // same pin used for alternate HW
    PB_10      = 0x1A,
    PB_11      = 0x1B,
    PB_12      = 0x1C,
    PB_13      = 0x1D,
    PB_14      = 0x1E,
    PB_15      = 0x1F,
    PC_13      = 0x2D,
    PC_14      = 0x2E,
    PC_15      = 0x2F,
    PH_0       = 0x70,
    PH_1       = 0x71,

    /**** ADC internal channels ****/

    ADC_TEMP = 0xF0, // Internal pin virtual value
    ADC_VREF = 0xF1, // Internal pin virtual value

    // STDIO for console print
#ifdef MBED_CONF_TARGET_STDIO_UART_TX
    CONSOLE_TX = MBED_CONF_TARGET_STDIO_UART_TX,
#else
    CONSOLE_TX = PA_2,          // if R20 is mounted
#endif
#ifdef MBED_CONF_TARGET_STDIO_UART_RX
    CONSOLE_RX = MBED_CONF_TARGET_STDIO_UART_RX,
#else
    CONSOLE_RX = PA_3,          // if R21 is mounted
#endif

    /**** DEBUG pins ****/
    SYS_JTCK_SWCLK = PA_14,
    SYS_JTMS_SWDIO = PA_13,
    SYS_WKUP1 = PA_0,

    /**** Zest connector signal namings (J1) ****/
    I2C1_SCL    = PB_8,         // I2C1_SCL
    I2C1_SDA    = PB_9,         // I2C1_SDA
    UART1_RX    = PA_10,        // USART1_RX
    UART1_TX    = PA_9,         // USART1_TX
    SPI1_MOSI   = PB_15,        // SPI2_MOSI
    SPI1_MISO   = PB_14,        // SPI2_MISO
    SPI1_SCK    = PB_13,        // SPI2_SCK
    SPI1_CS     = PB_12,
    PWM1_OUT    = PB_0,
    WKUP        = PA_0,         // WKUP
    ADC_IN1     = PA_5,
    DAC_OUT1    = PA_4,
    DIO1        = PB_2,
    DIO2        = PA_11,        // if R15 is mounted
    DIO3        = PA_12,        // if R16 is mounted
    DIO4        = PA_2,         // if R22 is mounted
    DIO5        = PA_3,         // if R23 is mounted

    // LoRa
    LORA_RESET      = PA_1,
    LORA_MOSI       = PB_5,
    LORA_MISO       = PB_4,
    LORA_SCK        = PB_3,
    LORA_NSS        = PA_15,
    LORA_DIO0       = PA_6,
    LORA_DIO1       = PA_7,
    LORA_DIO2       = PA_8,
    LORA_DIO3       = PB_1,
    LORA_DIO4       = PC_13,

    // Secure Element
    SE_RESET        = PB_7,
    SE_CTRL         = PB_6,
    SE_IO           = PB_10,
    SE_CLK          = PB_11,

    // Not connected
    NC = (int)0xFFFFFFFF
} PinName;

// Standardized LED and button names
#define LED1     PA_11          // if R17 is mounted
#define BUTTON1  PA_12          // if R18 is mounted

#ifdef __cplusplus
}
#endif

#endif
