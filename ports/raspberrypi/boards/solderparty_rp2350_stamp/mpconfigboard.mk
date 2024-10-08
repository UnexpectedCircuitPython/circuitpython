USB_VID = 0x1209
USB_PID = 0xA183
USB_PRODUCT = "RP2350 Stamp"
USB_MANUFACTURER = "Solder Party"

CHIP_VARIANT = RP2350
CHIP_PACKAGE = A
CHIP_FAMILY = rp2

EXTERNAL_FLASH_DEVICES = "W25Q128JVxQ"

CIRCUITPY__EVE = 1
CIRCUITPY_ALARM = 0
CIRCUITPY_RGBMATRIX = 0
CIRCUITPY_PICODVI = 1

FROZEN_MPY_DIRS += $(TOP)/ports/raspberrypi/boards/solderparty_rp2040_stamp
FROZEN_MPY_DIRS += $(TOP)/frozen/Adafruit_CircuitPython_HID
FROZEN_MPY_DIRS += $(TOP)/frozen/Adafruit_CircuitPython_NeoPixel
FROZEN_MPY_DIRS += $(TOP)/frozen/Adafruit_CircuitPython_Register
