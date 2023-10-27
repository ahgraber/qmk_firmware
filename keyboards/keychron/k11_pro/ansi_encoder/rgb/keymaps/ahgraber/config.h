/* Copyright 2021 @ Keychron (https://www.keychron.com)
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

#pragma once

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

// /* Key matrix pins */
// #define MATRIX_ROW_PINS { B4, B3, A15, A14, A13 }
// #define MATRIX_COL_PINS { C14, C15, A0, A1, A2, A3, A4, A5, A6, A7, B0, B1, A8, A9, H3 }

// /* If PH3 used with a stronger pull resistor then the following definition needs be included */
// #define MATRIX_UNSELECT_DRIVE_HIGH

// /* RGB Matrix Driver Configuration */
// #define DRIVER_COUNT 2
// #define DRIVER_ADDR_1 0b1110111
// #define DRIVER_ADDR_2 0b1110100

// /* Increase I2C speed to 1000 KHz */
// #define I2C1_TIMINGR_PRESC 0U
// #define I2C1_TIMINGR_SCLDEL 3U
// #define I2C1_TIMINGR_SDADEL 0U
// #define I2C1_TIMINGR_SCLH 15U
// #define I2C1_TIMINGR_SCLL 51U

// /* Scan phase of led driver set as MSKPHASE_9CHANNEL(defined as 0x03 in CKLED2001.h) */
// #define PHASE_CHANNEL MSKPHASE_9CHANNEL
// #define CKLED2001_CURRENT_TUNE { 0xC4, 0xC4, 0x60, 0xC4, 0xC4, 0x60, 0xC4, 0xC4, 0x60, 0xC4, 0xC4, 0x60 }

// /* DIP switch */
// #define DIP_SWITCH_MATRIX_GRID  { {4, 4} }

// /* Disable DIP switch in matrix data */
// #define MATRIX_MASKED

/* EEPROM Driver Configuration */
#define WEAR_LEVELING_LOGICAL_SIZE 2048
#define WEAR_LEVELING_BACKING_SIZE (WEAR_LEVELING_LOGICAL_SIZE * 2)
#define DYNAMIC_KEYMAP_LAYER_COUNT 5

#ifdef MOUSEKEY_ENABLE
    // #define MOUSEKEY_DELAY             5  // Delay between pressing a movement key and cursor movement
    // #define MOUSEKEY_INTERVAL          5  // Time between cursor movements in milliseconds
    // #define MOUSEKEY_MOVE_DELTA        8  // Step size
    // #define MOUSEKEY_MAX_SPEED         3  // Maximum cursor speed at which acceleration stops
    // #define MOUSEKEY_TIME_TO_MAX       20 // Time until maximum cursor speed is reached
    #define MOUSEKEY_WHEEL_DELAY       5  // Delay between pressing a wheel key and wheel movement
    #define MOUSEKEY_WHEEL_INTERVAL    5  // Time between wheel movements
    #define MOUSEKEY_WHEEL_DELTA       3  // Wheel movement step size
    #define MOUSEKEY_WHEEL_MAX_SPEED   15 // Maximum number of scroll steps per scroll action
    #define MOUSEKEY_WHEEL_TIME_TO_MAX 10 // Time until maximum scroll speed is reached
#endif //MOUSEKEY_ENABLE

/* Turn off effects when suspended */
#define RGB_DISABLE_WHEN_USB_SUSPENDED

#ifdef RGB_MATRIX_ENABLE
    // Effects
    #define RGB_MATRIX_FRAMEBUFFER_EFFECTS   // Enables Heatmap, Rain
    #define RGB_MATRIX_KEYPRESSES            // Enables REACTIVE & SPLASH modes

    // ref: https://docs.qmk.fm/#/feature_rgb_matrix
    // Uncomment any #undef line below to turn OFF any default enabled RGB background effect (enabled in keyboards/gmmk/pro/config.h).
    // #undef ENABLE_RGB_MATRIX_ALPHAS_MODS            // Static dual hue, speed is hue for secondary hue
    #undef ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN       // Static gradient top to bottom, speed controls how much gradient changes
    #undef ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT    // Static gradient left to right, speed controls how much gradient changes
    // #undef ENABLE_RGB_MATRIX_BREATHING              // Single hue brightness cycling animation
    #undef ENABLE_RGB_MATRIX_BAND_SAT               // Single hue band fading saturation scrolling left to right
    #undef ENABLE_RGB_MATRIX_BAND_VAL               // Single hue band fading brightness scrolling left to right
    #undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT      // Single hue 3 blade spinning pinwheel fades saturation
    #undef ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL      // Single hue 3 blade spinning pinwheel fades brightness
    #undef ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT        // Single hue spinning spiral fades saturation
    #undef ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL        // Single hue spinning spiral fades brightness
    #undef ENABLE_RGB_MATRIX_CYCLE_ALL              // Full keyboard solid hue cycling through full gradient
    #undef ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT       // Full gradient scrolling left to right
    #undef ENABLE_RGB_MATRIX_CYCLE_UP_DOWN          // Full gradient scrolling top to bottom
    #undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN           // Full gradient scrolling out to in
    #undef ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL      // Full dual gradients scrolling out to in
    #undef ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON // Full gradient Chevron shapped scrolling left to right
    #undef ENABLE_RGB_MATRIX_CYCLE_PINWHEEL         // Full gradient spinning pinwheel around center of keyboard
    #undef ENABLE_RGB_MATRIX_CYCLE_SPIRAL           // Full gradient spinning spiral around center of keyboard
    #undef ENABLE_RGB_MATRIX_DUAL_BEACON            // Full gradient spinning around center of keyboard
    #undef ENABLE_RGB_MATRIX_RAINBOW_BEACON         // Full tighter gradient spinning around center of keyboard
    #undef ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS      // Full dual gradients spinning two halfs of keyboard
    #undef ENABLE_RGB_MATRIX_RAINDROPS              // Randomly changes a single key's hue
    #undef ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS    // Randomly changes a single key's hue and saturation
    #undef ENABLE_RGB_MATRIX_HUE_BREATHING          // Hue shifts up a slight ammount at the same time, then shifts back
    #undef ENABLE_RGB_MATRIX_HUE_PENDULUM           // Hue shifts up a slight ammount in a wave to the right, then back to the left
    #undef ENABLE_RGB_MATRIX_HUE_WAVE               // Hue shifts up a slight ammount and then back down in a wave to the right
    #undef ENABLE_RGB_MATRIX_PIXEL_FRACTAL          // Single hue fractal filled keys pulsing horizontally out to edges
    #undef ENABLE_RGB_MATRIX_PIXEL_FLOW             // Pulsing RGB flow along LED wiring with random hues
    #undef ENABLE_RGB_MATRIX_PIXEL_RAIN             // Randomly light keys with random hues
    // requires RGB_MATRIX_FRAMEBUFFER_EFFECTS
    #undef ENABLE_RGB_MATRIX_TYPING_HEATMAP         // How hot is your WPM!
    #undef ENABLE_RGB_MATRIX_DIGITAL_RAIN           // That famous computer simulation
    // requires RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES
    #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE      // Pulses keys hit to hue & value then fades value out
    #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE             // Static single hue, pulses keys hit to shifted hue then fades to current hue
    #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE        // Hue & value pulse near a single key hit then fades value out
    #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE   // Hue & value pulse near multiple key hits then fades value out
    #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS       // Hue & value pulse the same column and row of a single key hit then fades value out
    #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS  // Hue & value pulse the same column and row of multiple key hits then fades value out
    #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS       // Hue & value pulse away on the same column and row of a single key hit then fades value out
    #undef ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS  // Hue & value pulse away on the same column and row of multiple key hits then fades value out
    // #undef ENABLE_RGB_MATRIX_SPLASH                     // Full gradient & value pulse away from a single key hit then fades value out
    #undef ENABLE_RGB_MATRIX_MULTISPLASH                // Full gradient & value pulse away from multiple key hits then fades value out
    #undef ENABLE_RGB_MATRIX_SOLID_SPLASH               // Hue & value pulse away from a single key hit then fades value out
    #undef ENABLE_RGB_MATRIX_SOLID_MULTISPLASH          // Hue & value pulse away from multiple key hits then fades value out

#endif //RGB_MATRIX_ENABLE
