/* Copyright 2021 Glorious, LLC <salman@pcgamingrace.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H
#include "rgb_matrix_map.h"
#include "lib/lib8tion/lib8tion.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// DEFAULT KEYS
//      ESC      F1       F2       F3       F4       F5       F6       F7       F8       F9       F10      F11      F12	     Prt           Rotary(Mute)
//      ~        1        2        3        4        5        6        7        8        9        0         -       (=)	     BackSpc           Del
//      Tab      Q        W        E        R        T        Y        U        I        O        P        [        ]        \                 PgUp
//      Caps     A        S        D        F        G        H        J        K        L        ;        "                 Enter             PgDn
//      Sh_L              Z        X        C        V        B        N        M        ,        .        ?                 Sh_R     Up       End
//      Ct_L     Win_L    Alt_L                               SPACE                               Alt_R    FN       Ct_R     Left     Down     Right


    // Layer 0: Windows base layer (standard bottom row).
    // Fn+1 returns here; Fn+2 switches to the Mac layer.
    //
    // To put the keyboard in bootloader mode, use FN+DEL. If you accidentally put it into bootloader, you can just unplug the USB cable and
    // it'll be back to normal when you plug it back in.
    //
    // Press Fn+N to toggle between 6KRO and NKRO (persisted to EEPROM), in case a KVM or BIOS misbehaves with NKRO.
    [0] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,           KC_MUTE,
        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,          KC_PGUP,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,          KC_PGDN,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,           KC_HOME,
        KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT, KC_UP,   KC_END,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, MO(2),   KC_RCTL, KC_LEFT, KC_DOWN, KC_RGHT
    ),

    // Layer 1: Mac base layer — only the bottom row differs (Ctrl / Option / Command).
    [1] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
        KC_LCTL, KC_LALT, KC_LGUI,                            _______,                            KC_RGUI, MO(2),   KC_RALT, _______, _______, _______
    ),

    // Layer 2: Fn layer — Fn+1/Fn+2 pick the Windows/Mac base, Fn+Del enters the bootloader,
    // Fn+Esc resets EEPROM, Fn+minus/plus (or Fn+Up/Down) adjust RGB brightness.
    [2] = LAYOUT(
        EE_CLR,  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, QK_BOOT,          _______,
        _______, TO(0),   TO(1),   _______, _______, _______, _______, _______, _______, _______, _______, RM_VALD, RM_VALU, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, RM_VALU, _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, RM_VALD, _______
    ),

    // blank, to prevent VIA visual bugs
    [3] = LAYOUT(
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______,          _______,
        _______,          _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,          _______, _______, _______,
        _______, _______, _______,                            _______,                            _______, _______, _______, _______, _______, _______
    ),

};
// clang-format on

#ifdef ENCODER_ENABLE
    bool encoder_update_user(uint8_t index, bool clockwise) {
        if (clockwise) {
        tap_code(KC_VOLU);
        } else {
        tap_code(KC_VOLD);
        }
        //return true; //set to return false to counteract enabled encoder in pro.c
        return false;
    }
#endif // ENCODER_ENABLE


#ifdef RGB_MATRIX_ENABLE

    // Theme colors (r, g, b). RGB_GOLD comes from quantum/color.h (0xFF, 0xD9, 0x00).
    #define RGB_GRASS  0x4C, 0xBB, 0x17 // layer indicator — swap for RGB_FOREST to compare
    #define RGB_FOREST 0x22, 0x8B, 0x22

    // Side strips have no cyan switch housing in front of them, so they get true
    // mint instead of the warmed-up global color (see config.h). Hue 80 is a touch
    // less blue than classic mint #98FF98 (hue 85).
    #define SIDE_MINT_HUE 80
    #define SIDE_MINT_SAT 125

    static void set_alpha_color(uint8_t r, uint8_t g, uint8_t b) {
        for (int i = 0; i < 26; i++) {
            rgb_matrix_set_color(LED_LIST_ALPHA[i], r, g, b);
        }
    }

    static void set_sidelights_color(uint8_t r, uint8_t g, uint8_t b) {
        for (int i = 0; i < 8; i++) {
            rgb_matrix_set_color(LED_LIST_SIDE_LEFT[i], r, g, b);
            rgb_matrix_set_color(LED_LIST_SIDE_RIGHT[i], r, g, b);
        }
    }

    // ref: https://www.reddit.com/r/glorious/comments/okrbjg/peeps_qmk_and_via_rgb_guide_only_for_ansi/
    bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
        // No set_color_all() here: the mint-green breathing effect (defaults in
        // config.h) stays visible underneath these indicator overrides.

        // Side strips: true mint, breathing in phase with the global effect
        // (same time/value math as quantum/rgb_matrix/animations/breathing_anim.h).
        if (rgb_matrix_get_mode() == RGB_MATRIX_BREATHING) {
            uint8_t time = scale16by8(g_rgb_timer, qadd8(rgb_matrix_config.speed / 4, 1));
            uint8_t val  = scale8(abs8(sin8(time / 2) - 128) * 2, rgb_matrix_config.hsv.v);
            rgb_t mint   = hsv_to_rgb((hsv_t){SIDE_MINT_HUE, SIDE_MINT_SAT, val});
            set_sidelights_color(mint.r, mint.g, mint.b);
        }

        // CapsLock: alphas + side strips go gold
        if (host_keyboard_led_state().caps_lock) {
            rgb_matrix_set_color(LED_CAPS, RGB_GOLD);
            set_sidelights_color(RGB_GOLD);
            set_alpha_color(RGB_GOLD);
        }

        // special per layer handling
        switch(get_highest_layer(layer_state)){
            case 1: // mac layer: light the "2" key
                rgb_matrix_set_color(LED_2, RGB_GRASS);
                break;

            case 2: // fn/meta layer
                // set layer options to gold
                rgb_matrix_set_color(LED_1, RGB_GOLD);
                rgb_matrix_set_color(LED_2, RGB_GOLD);
                // set eeprom_reset to green
                rgb_matrix_set_color(LED_ESC, 0, 255, 10);
                // set reset options to blue
                rgb_matrix_set_color(LED_PRT, 0, 0, 255); // (DEL on this board)
                // set fn to gold
                rgb_matrix_set_color(LED_FN, RGB_GOLD);
                break;

            default: // windows base layer: light the "1" key
                rgb_matrix_set_color(LED_1, RGB_GRASS);
                break;
        }
        return false;
    }

#endif // RGB_MATRIX_ENABLE
