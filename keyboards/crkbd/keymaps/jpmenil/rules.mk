BOOTLOADER         = qmk-dfu
EXTRAKEY_ENABLE    = yes
LTO_ENABLE         = yes
MOUSEKEY_ENABLE    = no
NKRO_ENABLE        = yes
OLED_DRIVER_ENABLE = yes
RGBLIGHT_ENABLE    = no
RGB_MATRIX_ENABLE  = yes
WPM_ENABLE         = yes

ifeq ($(strip $(OLED_DRIVER_ENABLE)), yes)
    SRC += oled_stuff.c
endif
