# jpmenil's crkbd

## DFU
[See drashna's post on reddit](https://www.reddit.com/r/olkb/comments/8sxgzb/replace_pro_micro_bootloader_with_qmk_dfu/)

This one have been done through the help of an [Arduino Uno](https://schou.dk/linux/arduino/isp/).
```
$ avrdude -c avrisp -p atmega32u4 -P /dev/ttyACM0 -U flash:w:"crkbd_rev1_common_jpmenil_production.hex" -U lfuse:w:0x5E:m -U hfuse:w:0xD9:m -U efuse:w:0xC3:m -U lock:w:0x3F:m -b 19200
```

## Flashing
```
$ make crkbd/rev1/common:jpmenil:dfu
```
