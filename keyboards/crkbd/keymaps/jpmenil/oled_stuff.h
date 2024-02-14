#pragma once

#include "quantum.h"
#include <stdio.h>

void oled_driver_render_logo(void);
bool process_record_user_oled(uint16_t keycode, keyrecord_t *record);
extern uint32_t oled_timer;
