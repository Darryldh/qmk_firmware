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
#include QMK_KEYBOARD_H

// Defines names for use in layer keycodes and the keymap
enum layer_names {
    _BASE,
    _FN
};

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    QMKBEST = SAFE_RANGE,
    QMKURL
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Base layer*/
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
     */
    [_BASE] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_LEFT,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LEFT,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_LBRC,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_KP_PLUS,
        KC_LCTL, KC_LGUI, KC_LALT, KC_LEFT, KC_RGHT, KC_BSPC, KC_DEL,

        KC_LEFT,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_LEFT,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_RBRC,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
                    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_QUOTE,   KC_SPC,  KC_DOWN, KC_UP,   KC_LEFT,  KC_LEFT,  KC_LEFT
    ),

    /* Function layer */
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
     */

    [_FN] = LAYOUT(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_LEFT,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LEFT,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_LBRC,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_KP_PLUS,
        KC_LCTL, KC_LGUI, KC_LALT, KC_LEFT, KC_RGHT, KC_BSPC, KC_DEL,

        KC_LEFT,     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,
        KC_LEFT,     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
        KC_RBRC,     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
                     KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
        KC_QUOTE,    KC_SPC,  KC_DOWN, KC_UP,   KC_LEFT,  KC_LEFT,  KC_LEFT
    )
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case QMKBEST:
            if (record->event.pressed) {
                // when keycode QMKBEST is pressed
                SEND_STRING("QMK is the best thing ever!");
            } else {
                // when keycode QMKBEST is released
            }
            break;
        case QMKURL:
            if (record->event.pressed) {
                // when keycode QMKURL is pressed
                SEND_STRING("https://qmk.fm/\n");
            } else {
                // when keycode QMKURL is released
            }
            break;
    }
    return true;
}

#ifdef OLED_DRIVER_ENABLE
void oled_task_user(void) {
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case _BASE:
            oled_write_P(PSTR("Default\n"), false);
            break;
        case _FN:
            oled_write_P(PSTR("FN\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
            oled_write_ln_P(PSTR("Undefined"), false);
    }

    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (!is_keyboard_master()) {
        return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
    }

    return rotation;
}

void oled_task_user(void) {
    if (is_keyboard_master()) {
        render_status();  // Renders the current keyboard state (layer, lock, caps, scroll, etc)
    } else {
        render_logo();  // Renders a static logo
        oled_scroll_left();  // Turns on scrolling
    }
}
#endif

static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, 0x88, 0x89, 0x8A, 0x8B, 0x8C, 0x8D, 0x8E, 0x8F, 0x90, 0x91, 0x92, 0x93, 0x94,
        0xA0, 0xA1, 0xA2, 0xA3, 0xA4, 0xA5, 0xA6, 0xA7, 0xA8, 0xA9, 0xAA, 0xAB, 0xAC, 0xAD, 0xAE, 0xAF, 0xB0, 0xB1, 0xB2, 0xB3, 0xB4,
        0xC0, 0xC1, 0xC2, 0xC3, 0xC4, 0xC5, 0xC6, 0xC7, 0xC8, 0xC9, 0xCA, 0xCB, 0xCC, 0xCD, 0xCE, 0xCF, 0xD0, 0xD1, 0xD2, 0xD3, 0xD4, 0x00
    };

    //oled_write_P(qmk_logo, false);
}



/*
void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool led_update_user(led_t led_state) {
    return true;
}
*/
