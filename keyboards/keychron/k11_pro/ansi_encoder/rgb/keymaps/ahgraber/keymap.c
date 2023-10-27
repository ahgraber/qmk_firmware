/* Copyright 2023 @ Keychron (https://www.keychron.com)
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
#include "rgb_matrix_map.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // mac
    [0] = LAYOUT_69_ansi(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_MUTE,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_DEL,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,           KC_HOME,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,
        KC_LCTL, KC_LALT, KC_LCMD,          KC_SPC,           MO(2),   MO(3),            KC_SPC,           KC_RCMD,          KC_LEFT, KC_DOWN, KC_RGHT
    ),

    // win
    [1] = LAYOUT_69_ansi(
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_MUTE,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_DEL,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,             KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,           KC_HOME,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,
        KC_LCTL, KC_LALT, KC_LCTL,          KC_SPC,           MO(2),   MO(3),            KC_SPC,           KC_RGUI,          KC_LEFT, KC_DOWN, KC_RGHT
    ),

    // meta
    [2] = LAYOUT_69_ansi(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______,          KC_MUTE,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          KC_VOLU,
        _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,          KC_VOLD,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______,          _______,          _______, _______,          _______,          _______,          _______, _______, _______
    ),

    // meta
    [3] = LAYOUT_69_ansi(
        KC_ESC,  TO(0),   TO(1),   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          EE_CLR,
        _______, _______, _______, _______, _______, _______,          _______, _______, _______, _______, _______, _______, _______,          _______,
        _______,          _______, _______, _______, _______, _______, _______, NK_TOGG, _______, _______, _______, _______, _______, _______,
        _______, _______, QK_BOOT,          _______,          _______, _______,          _______,          QK_BOOT,          _______, _______, _______
    ),

};

// Define key overrides
const key_override_t mac_esc_override = ko_make_with_layers(MOD_MASK_GUI, KC_GRV, KC_ESC, 1);  // Cmd + GRV = ESC
const key_override_t win_esc_override = ko_make_with_layers(MOD_MASK_CTRL, KC_GRV, KC_ESC, 2);  // Ctrl + GRV = ESC
const key_override_t **key_overrides = (const key_override_t *[]){
    &mac_esc_override,
    &win_esc_override,
    NULL
};

#ifdef ENCODER_ENABLE
    bool encoder_update_user(uint8_t index, bool clockwise) {
        if (clockwise) {
        tap_code(KC_MS_WH_UP);
        } else {
        tap_code(KC_MS_WH_DOWN);
        }
        //return true; //set to return false to counteract enabled encoder in pro.c
        return false;
    }
#endif // ENCODER_ENABLE

// #if defined(ENCODER_MAP_ENABLE)
// const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
//     [0] = { ENCODER_CCW_CW(KC_MS_WH_DOWN, KC_MS_WH_UP)},
//     [1] = { ENCODER_CCW_CW(KC_MS_WH_DOWN, KC_MS_WH_UP)},
//     [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
//     [3] = { ENCODER_CCW_CW(_______, _______)},
// };
// #endif // ENCODER_MAP_ENABLE

#ifdef RGB_MATRIX_ENABLE

    static void set_alpha_color(uint8_t r, uint8_t g, uint8_t b) {
        for (int i = 0; i < 26; i++) {
            rgb_matrix_set_color(LED_LIST_ALPHA[i], r, g, b);
        }
    }

    static void set_numrow_color(uint8_t r, uint8_t g, uint8_t b) {
        for (int i = 0; i < 13; i++) {
            rgb_matrix_set_color(LED_LIST_NUMROW[i], r, g, b);
        }
    }

    // static void set_arrows_color(uint8_t r, uint8_t g, uint8_t b) {
    //     for (int i = 0; i < 4; i++) {
    //         rgb_matrix_set_color(LED_LIST_ARROWS[i], r, g, b);
    //     }
    // }

    static void set_wasd_color(uint8_t r, uint8_t g, uint8_t b) {
        for (int i = 0; i < 4; i++) {
            rgb_matrix_set_color(LED_LIST_WASD[i], r, g, b);
        }
    }

    // ref: https://www.reddit.com/r/glorious/comments/okrbjg/peeps_qmk_and_via_rgb_guide_only_for_ansi/
    bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
        rgb_matrix_set_color_all(RGB_OFF); // Default startup colour

        // CapsLock RGB setup
        if (host_keyboard_led_state().caps_lock) {
            rgb_matrix_set_color(LED_CAPS, 225, 0, 0);
            set_alpha_color(225,0,0);
        }

        // special per layer handling
        switch(get_highest_layer(layer_state)){
            case 0: // mac
                rgb_matrix_set_color(LED_1, 255, 225, 0); // layer ID
                break;

            case 1:  // windows / gaming
                rgb_matrix_set_color(LED_2, 255, 225, 0); // layer ID
                set_wasd_color(255, 225, 0);
                break;

            case 2:  // meta 1 (f_row)
                // set numrow red
                set_numrow_color(255, 0, 0);
                break;

            case 3:  // meta 2
                // set toggle indicators to red
                rgb_matrix_set_color(LED_1, 225, 0, 0); // 1,
                rgb_matrix_set_color(LED_2, 225, 0, 0); // 2,
                // set eeprom_reset to green
                rgb_matrix_set_color(LED_DEL, 0, 255, 10); // DEL
                // set reset options to blue
                rgb_matrix_set_color(60, 0, 0, 255); // L CMD / L CTRL / 60
                rgb_matrix_set_color(65, 0, 0, 255); // R CMD / RGUI / 65
                // set nkro to yellow
                rgb_matrix_set_color(LED_N, 255, 225, 0); // N / 51
                break;

            default:
                // do nothing
                break;

            break;
        }
        return false;
    }

#endif // RGB_MATRIX_ENABLE
