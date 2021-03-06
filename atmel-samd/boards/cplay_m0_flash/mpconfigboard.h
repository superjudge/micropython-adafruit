#define USB_REPL

#define MICROPY_HW_BOARD_NAME "Adafruit Circuit Playground M0 (Experimental)"
#define MICROPY_HW_MCU_NAME "samd21g18"

//#define MICROPY_HW_LED_MSC  PIN_PA17

#define SPI_FLASH_BAUDRATE  (1000000)

// On-board flash
#define SPI_FLASH_MUX_SETTING SPI_SIGNAL_MUX_SETTING_E
#define SPI_FLASH_PAD0_PINMUX PINMUX_PA12D_SERCOM4_PAD0 // MISO
// Use default pinmux for the chip select since we manage it ourselves.
#define SPI_FLASH_PAD1_PINMUX PINMUX_DEFAULT // CS
#define SPI_FLASH_PAD2_PINMUX PINMUX_PB10D_SERCOM4_PAD2 // MOSI
#define SPI_FLASH_PAD3_PINMUX PINMUX_PB11D_SERCOM4_PAD3 // SCK
#define SPI_FLASH_CS          PIN_PB08
#define SPI_FLASH_SERCOM      SERCOM4

#define AUTORESET_DELAY_MS 500

#include "spi_flash.h"

#define BOARD_FLASH_SIZE (0x00040000 - 0x2000)
