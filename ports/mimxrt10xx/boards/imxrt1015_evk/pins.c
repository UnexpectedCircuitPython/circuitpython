// This file is part of the CircuitPython project: https://circuitpython.org
//
// SPDX-FileCopyrightText: Copyright (c) 2019 Scott Shawcroft for Adafruit Industries
// SPDX-FileCopyrightText: Copyright (c) 2019 Artur Pacholec
//
// SPDX-License-Identifier: MIT

#include "shared-bindings/board/__init__.h"

#include "supervisor/board.h"

static const mp_rom_map_elem_t board_module_globals_table[] = {
    CIRCUITPYTHON_BOARD_DICT_STANDARD_ITEMS

    { MP_OBJ_NEW_QSTR(MP_QSTR_D0), MP_ROM_PTR(&pin_GPIO_EMC_33) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_RX), MP_ROM_PTR(&pin_GPIO_EMC_33) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_D1), MP_ROM_PTR(&pin_GPIO_EMC_32) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_TX), MP_ROM_PTR(&pin_GPIO_EMC_32) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_D2), MP_ROM_PTR(&pin_GPIO_EMC_20) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_D3), MP_ROM_PTR(&pin_GPIO_EMC_26) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_D4), MP_ROM_PTR(&pin_GPIO_EMC_34) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_D5), MP_ROM_PTR(&pin_GPIO_EMC_27) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_D6), MP_ROM_PTR(&pin_GPIO_AD_B1_11) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_D7), MP_ROM_PTR(&pin_GPIO_AD_B0_15) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_D8), MP_ROM_PTR(&pin_GPIO_EMC_21) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_D9), MP_ROM_PTR(&pin_GPIO_EMC_22) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_D10), MP_ROM_PTR(&pin_GPIO_AD_B0_11) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_D11), MP_ROM_PTR(&pin_GPIO_AD_B0_12) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_MOSI), MP_ROM_PTR(&pin_GPIO_AD_B0_12) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_D12), MP_ROM_PTR(&pin_GPIO_AD_B0_13) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_MISO), MP_ROM_PTR(&pin_GPIO_AD_B0_13) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_D13), MP_ROM_PTR(&pin_GPIO_AD_B0_10) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SCK), MP_ROM_PTR(&pin_GPIO_AD_B0_10) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_D14), MP_ROM_PTR(&pin_GPIO_AD_B1_15) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_D15), MP_ROM_PTR(&pin_GPIO_AD_B1_14) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_A0), MP_ROM_PTR(&pin_GPIO_AD_B1_13) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_A1), MP_ROM_PTR(&pin_GPIO_AD_B0_14) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_A2), MP_ROM_PTR(&pin_GPIO_AD_B1_12) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_A3), MP_ROM_PTR(&pin_GPIO_AD_B1_10) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_A4), MP_ROM_PTR(&pin_GPIO_AD_B1_15) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SDA), MP_ROM_PTR(&pin_GPIO_AD_B1_15) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_A5), MP_ROM_PTR(&pin_GPIO_AD_B1_14) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_SCL), MP_ROM_PTR(&pin_GPIO_AD_B1_14) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_USER_LED), MP_ROM_PTR(&pin_GPIO_SD_B1_00) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_LED), MP_ROM_PTR(&pin_GPIO_SD_B1_00) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_LED1), MP_ROM_PTR(&pin_GPIO_SD_B1_00) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_LED2), MP_ROM_PTR(&pin_GPIO_SD_B1_01) },
    { MP_OBJ_NEW_QSTR(MP_QSTR_LED3), MP_ROM_PTR(&pin_GPIO_SD_B1_02) },

    { MP_OBJ_NEW_QSTR(MP_QSTR_USER_SW), MP_ROM_PTR(&pin_GPIO_EMC_09) },

    // Audio Interface
    { MP_ROM_QSTR(MP_QSTR_AUDIO_INT), MP_ROM_PTR(&pin_GPIO_EMC_08) },
    { MP_ROM_QSTR(MP_QSTR_AUDIO_SYNC), MP_ROM_PTR(&pin_GPIO_EMC_27) },
    { MP_ROM_QSTR(MP_QSTR_AUDIO_BCLK), MP_ROM_PTR(&pin_GPIO_EMC_26) },
    { MP_ROM_QSTR(MP_QSTR_AUDIO_RXD), MP_ROM_PTR(&pin_GPIO_EMC_21) },
    { MP_ROM_QSTR(MP_QSTR_AUDIO_TXD), MP_ROM_PTR(&pin_GPIO_EMC_25) },
    { MP_ROM_QSTR(MP_QSTR_AUDIO_MCLK), MP_ROM_PTR(&pin_GPIO_EMC_20) },

    // SPDIF
    { MP_ROM_QSTR(MP_QSTR_SPDIF_IN), MP_ROM_PTR(&pin_GPIO_EMC_05) },
    { MP_ROM_QSTR(MP_QSTR_SPDIF_OUT), MP_ROM_PTR(&pin_GPIO_EMC_04) },

    // J29 UART LPUART4
    { MP_ROM_QSTR(MP_QSTR_J29_TX), MP_ROM_PTR(&pin_GPIO_EMC_32) },
    { MP_ROM_QSTR(MP_QSTR_J29_RX), MP_ROM_PTR(&pin_GPIO_EMC_33) },

    // J30 UART LPUART3
    { MP_ROM_QSTR(MP_QSTR_J30_TX), MP_ROM_PTR(&pin_GPIO_EMC_06) },
    { MP_ROM_QSTR(MP_QSTR_J30_RX), MP_ROM_PTR(&pin_GPIO_EMC_07) },

    // Freelink UART
    { MP_ROM_QSTR(MP_QSTR_FREELINK_TX), MP_ROM_PTR(&pin_GPIO_AD_B0_06) },
    { MP_ROM_QSTR(MP_QSTR_FREELINK_RX), MP_ROM_PTR(&pin_GPIO_AD_B0_07) },

    { MP_ROM_QSTR(MP_QSTR_I2C), MP_ROM_PTR(&board_i2c_obj) },
    { MP_ROM_QSTR(MP_QSTR_SPI), MP_ROM_PTR(&board_spi_obj) },
    { MP_ROM_QSTR(MP_QSTR_UART), MP_ROM_PTR(&board_uart_obj) },
};
MP_DEFINE_CONST_DICT(board_module_globals, board_module_globals_table);
