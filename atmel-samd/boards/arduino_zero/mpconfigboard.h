#define USB_REPL

#define MICROPY_HW_BOARD_NAME "Arduino Zero"
#define MICROPY_HW_MCU_NAME "samd21g18"

// #define MICROPY_HW_LED_MSC  PIN_PA17 // red
#define MICROPY_HW_LED_TX   PIN_PA27
#define MICROPY_HW_LED_RX   PIN_PB03

#define AUTORESET_DELAY_MS 500

#include "internal_flash.h"

#define BOARD_FLASH_SIZE (0x00040000 - 0x2000 - 0x010000)
