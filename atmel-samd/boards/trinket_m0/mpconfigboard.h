#define USB_REPL

#define MICROPY_HW_BOARD_NAME "Adafruit Trinket M0 (Experimental)"
#define MICROPY_HW_MCU_NAME "samd21e18"

#define MICROPY_HW_APA102  &pin_PA03

#define AUTORESET_DELAY_MS 500

#include "internal_flash.h"

#define BOARD_FLASH_SIZE (0x00040000 - 0x2000 - 0x010000)
