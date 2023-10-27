// RGB LED layout

// NOTE: assumes remapping associated to keymap.c.
// This is different from keychron defaults!

// Index_KeyID
// 00_GRV,  01_1,    02_2,    03_3,  04_4,   05_5,   06_6,    07_7,   08_8,   08_9,   10_0,    11_MINS,  12_EQL,   13_BSPC,            ROTARY,
// 15_TAB,  16_Q,    17_W,    18_E,  19_R,   20_T,   21_Y,    22_U,   23_I,   24_O,   25_P,    26_LBRC,  27_RBRC,  28_BSLS,            29_DEL,
// 30_CAPS, 31_A,    32_S,    33_D,  34_F,   35_G,            36_H,   37_J,   38_K,   39_L,    40_SCLN,  41_QUOT,  42_ENT,             43_HOME,
// 44_LSFT,          45_Z,    46_X,  47_C,   48_V,   49_LB,   50_RB,  51_N,   52_M,   53_COMM, 54_DOT,   55_SLSH,  56_RSFT,  57_UP,
// 58_LCTL, 59_LOPT, 60_LCMD,        61_SPC,         62_LFN,  63_RFN,         64_SPC,          65_RCMD,            66_LEFT,  67_DOWN,  68_RGHT

#ifdef RGB_MATRIX_ENABLE

    // RGB LED locations (in index order)
    enum led_location_map {
        LED_GRV,    // 0 ~/ESC
        LED_1,      // 1 1
        LED_2,      // 2 2
        LED_3,      // 3 3
        LED_4,      // 4 4
        LED_5,      // 5 5
        LED_6,      // 6 6
        LED_7,      // 7 7
        LED_8,      // 8 8
        LED_9,      // 9 9
        LED_0,      // 10 0
        LED_MINS,   // 11 -
        LED_EQL,    // 12 =
        LED_BSPC,   // 13 DEL
        // LED_DEL,    // 14 TAB
        LED_TAB,    // 15  S
        LED_Q,      // 16 Q
        LED_W,      // 17 W
        LED_E,      // 18 E
        LED_R,      // 19 R
        LED_T,      // 20 T
        LED_Y,      // 21 Y
        LED_U,      // 22 U
        LED_I,      // 23 I
        LED_O,      // 24 O
        LED_P,      // 25 P
        LED_LBRC,   // 26 {
        LED_RBRC,   // 27 }
        LED_BSLS,   // 28 \|
        LED_DEL,   // 29 PG UP
        LED_CAPS,   // 30 CAPS
        LED_A,      // 31 A
        LED_S,      // 32 S
        LED_D,      // 33 D
        LED_F,      // 34 F
        LED_G,      // 35 G
        LED_H,      // 36 H
        LED_J,      // 37 J
        LED_K,      // 38 K
        LED_L,      // 39 L
        LED_QUOT,   // 41 "'
        LED_SCLN,   // 40 ;
        LED_ENT,    // 42 ENTER
        LED_HOME,   // 43 PG DOWN
        LED_LSFT,   // 44 L SHIFT
        LED_Z,      // 45 Z
        LED_X,      // 46 X
        LED_C,      // 47 C
        LED_V,      // 48 V
        LED_LB,     // 49 LEFT B
        LED_RB,     // 50 RIGHT B
        LED_N,      // 51 N
        LED_M,      // 52 M
        LED_COMM,   // 53 ,
        LED_DOT,    // 54 .
        LED_SLSH,   // 55 /?
        LED_RSFT,   // 56 R SHIFT
        LED_UP,     // 57 UP
        LED_LCTL,   // 58 L CTRL
        LED_LALT,   // 59 L OPT / L ALT
        LED_LCMD,   // 60 L CMD / L CTRL
        LED_LSPC,   // 61 L SPACE
        LED_LFN,    // 62 L FN
        LED_RFN,    // 63 R FN
        LED_RSPC,   // 64 R SPACE
        LED_RCMD,   // 65 R CMD / R CTRL
        LED_LEFT,   // 66 LEFT
        LED_DOWN,   // 67 DOWN
        LED_RIGHT,  // 68 RIGHT
    };

    const uint32_t LED_LIST_ALPHA[] = {
        LED_Q, LED_W, LED_E, LED_R, LED_T, LED_Y, LED_U, LED_I, LED_O, LED_P,
        LED_A, LED_S, LED_D, LED_F, LED_G, LED_H, LED_J, LED_K, LED_L,
        LED_Z, LED_X, LED_C, LED_V, LED_LB, LED_RB, LED_N, LED_M
    };

    const uint8_t LED_LIST_WASD[] = {LED_W, LED_A, LED_S, LED_D};

    const uint8_t LED_LIST_ARROWS[] = {LED_LEFT, LED_RIGHT, LED_UP, LED_DOWN};

    const uint8_t LED_LIST_NUMROW[] = {LED_GRV, LED_1, LED_2, LED_3, LED_4, LED_5, LED_6, LED_7, LED_8, LED_9, LED_0, LED_MINS, LED_EQL};

    const uint8_t LED_LIST_MACROCOL[] = {LED_DEL, LED_HOME}; //LED_PGUP, LED_PGDN};

#endif
