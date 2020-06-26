/* Copyright 2020 darryldh
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "ErgoLuxe.h"

const is31_led g_is31_leds[DRIVER_LED_TOTAL] = {

    /*
     *    ┌───┬───┬───┬───┬───┬───┬───┐       ┌───┬───┬───┬───┬───┬───┬───┐
     *    │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │   │       │   │ 6 │ 7 │ 8 │ 9 │ 0 │ - │
     * ┌──┴───┼───┼───┼───┼───┼───┼───┤       ├───┼───┼───┼───┼───┼───┼───┴──┐
     * │ Tab  │ Q │ W │ E │ R │ T │   │       │   │ Y │ U │ I │ O │ P │   \  │
     * ├──────┼───┼───┼───┼───┼───┤   │       │   ├───┼───┼───┼───┼───┼──────┤
     * │ Caps │ A │ S │ D │ F │ G ├───┤       ├───┤ H │ J │ K │ L │ ; │ Enter│
     * ├──────┼───┼───┼───┼───┼───┤ { │       │ } ├───┼───┼───┼───┼───┼──────┤
     * │Shift │ Z │ X │ C │ V │ B ├───┘       └───┤ N │ M │ , │ . │ / │ Shift│
     * └──┬───┼───┼───┼───┴───┼───┤               ├───┼───┴───┼───┼───┼───┬──┘
     *    │Ctl│GUI│Alt├───┬───┤Bsp├───┐       ┌───┤   ├───┬───┤   │   │   │
     *    └───┴───┴───┤ ← │ → ├───┤ + │       │ ' │SPC│ ↓ │ ↑ ├───┴───┴───┘
     *                └───┴───┤Del├───┘       └───┤   ├───┴───┘
     *                        └───┘               └───┘                             
     *
     *    ┌───┬───┬───┬───┬───┬───┬───┐       ┌───┬───┬────┬────┬────┬────┬────┐
     *    │1_1│1_2│1_3│1_4│1_5│1_6│1_7│       │1_8│1_9│1_10│1_11│1_12│1_13│1_14│
     * ┌──┴───┼───┼───┼───┼───┼───┼───┤       ├───┼───┼────┼────┼────┼────┼────┴──┐
     * │ 2_1  │2_2│2_3│2_4│2_5│2_6│2_7│       │2_8│2_9│2_10│2_11│2_12│2_13│2_14   │
     * ├──────┼───┼───┼───┼───┼───┤   │       │   ├───┼────┼────┼────┼────┼───────┤
     * │ 3_1  │3_2│3_3│3_4│3_5│3_6├───┤       ├───┤3_9│3_10│3_11│3_12│3_13│3_14   │
     * ├──────┼───┼───┼───┼───┼───┤3_7│       │3_8├───┼────┼────┼────┼────┼───────┤
     * │ 4_1  │4_2│4_3│4_4│4_5│4_6├───┘       └───┤4_9│4_10│4_11│4_12│4_13│4_14   │
     * └──┬───┼───┼───┼───┴───┼───┤               ├───┼────┴────┼────┼────┼────┬──┘
     *    │5_1│5_2│5_3├───┬───┤4_7├───┐       ┌───┤   ├────┬────┤5_12│5_13│5_14│
     *    └───┴───┴───┤5_4│5_5├───┤5_7│       │5_8│5_9│5_10│5_11├────┴────┴────┘
     *                └───┴───┤5_6├───┘       └───┤   ├────┴────┘
     *                        └───┘               └───┘                             
     *
     * Refer to IS31 manual for the LED address position (figure 8 on pg 11)
     *   driver
     *   |  LED address
     *   |  |          Layout Matrix position
     *   |  |          |      Keymap code
     *   |  |          |      |
     */
        {0, C1_1}, // k00 -> KC_ESC
        {0, C1_2}, // K01 -> KC_1
        {0, C1_3}, // K02 -> KC_2
        {0, C1_4}, // K03 -> KC_3
        {0, C1_5}, // K04 -> KC_4
        {0, C1_6}, // K05 -> KC_5
        {0, C1_7}, // K06 -> KC_???
}

// Optional override functions below.
// You can leave any or all of these undefined.
// These are only required if you want to perform custom actions.

/*
void matrix_init_kb(void) {
    // put your keyboard start-up code here
    // runs once when the firmware starts up

    matrix_init_user();
}

void matrix_scan_kb(void) {
    // put your looping keyboard code here
    // runs every cycle (a lot)

    matrix_scan_user();
}

bool process_record_kb(uint16_t keycode, keyrecord_t *record) {
    // put your per-action keyboard code here
    // runs for every action, just before processing by the firmware

    return process_record_user(keycode, record);
}

bool led_update_kb(led_t led_state) {
    // put your keyboard LED indicator (ex: Caps Lock LED) toggling code here

    return led_update_user(led_state);
}


*/


