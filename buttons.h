#pragma once

#include <stdint.h>
#include <stdbool.h>

#define DEBOUNCE_DELAY_MS 50

void BUTTONS_init();
/* call every 1ms or so */
void BUTTONS_task();
/* returns the current sate of a button (true = pressed) */
bool BUTTONS_get(uint8_t num);
/* checks if a button has been presed since the last time, returns true only
 * once per actual press event */
bool BUTTONS_has_clicked(uint8_t num);
