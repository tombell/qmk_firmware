#include QMK_KEYBOARD_H
#include "immobile.h"

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
    //  ┏━━━━━━━━┳━━━━━━━━┳━━━━━━━━┳━━━━━━━━┳━━━━━━━━┳━━━━━━━━┳━━━━━━━━┳━━━━━━━━┳━━━━━━━━┳━━━━━━━━┳━━━━━━━━┳━━━━━━━━┳━━━━━━━━┳━━━━━━━━┳━━━━━━━━┓
          QK_GESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS,  KC_EQL, KC_BSPC, KC_HOME,
    //  ┣━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━┫━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━┫
           KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP,
    //  ┣━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━┫━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━┻━━━━━━━━╋━━━━━━━━┫
          KC_RCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,      KC_ENT,      KC_PGDN,
    //  ┣━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━┫━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━┻━━━━━━━━┳━━━━━━━━╋━━━━━━━━┫
          KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH,     KC_RSFT,        KC_UP,  KC_END,
    //  ┣━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━┻━━━━━━━━┻━━━━━━━━┻━━━━━━━━┻━━━━━━━━┻━━━━━━━━┻━━━━━━━━╋━━━━━━━━╋━━━━━━━━┳━━━━━━━━╋━━━━━━━━╋━━━━━━━━┫
            MO(1), KC_LALT, KC_LGUI,                    KC_SPC,  KC_SPC,  KC_SPC,                   KC_RGUI, KC_RALT, KC_LEFT, KC_DOWN, KC_RGHT
    //  ┗━━━━━━━━┻━━━━━━━━┻━━━━━━━━┻━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┻━━━━━━━━┻━━━━━━━━┻━━━━━━━━┻━━━━━━━━┻━━━━━━━━┛
    ),

    [1] = LAYOUT(
    //  ┏━━━━━━━━┳━━━━━━━━┳━━━━━━━━┳━━━━━━━━┳━━━━━━━━┳━━━━━━━━┳━━━━━━━━┳━━━━━━━━┳━━━━━━━━┳━━━━━━━━┳━━━━━━━━┳━━━━━━━━┳━━━━━━━━┳━━━━━━━━┳━━━━━━━━┓
           KC_GRV,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,  KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL, RM_NEXT,
    //  ┣━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━┫━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━┫
           EE_CLR,  IM_BT1,  IM_BT2,  IM_BT3,  IM_2G4,  IM_USB, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT, RM_PREV,
    //  ┣━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━┫━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━┻━━━━━━━━╋━━━━━━━━┫
          KC_TRNS, KC_MRWD, KC_MPLY, KC_MFFD, KC_TRNS, KC_TRNS, KC_LEFT, KC_DOWN, KC_UP,  KC_RIGHT, KC_TRNS, KC_TRNS,     KC_TRNS,      RM_HUEU,
    //  ┣━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━┫━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━┻━━━━━━━━┳━━━━━━━━╋━━━━━━━━┫
          KC_TRNS, KC_VOLD, KC_MUTE, KC_VOLU, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,      RM_VALU, RM_HUED,
    //  ┣━━━━━━━━╋━━━━━━━━╋━━━━━━━━╋━━━━━━━━┻━━━━━━━━┻━━━━━━━━┻━━━━━━━━┻━━━━━━━━┻━━━━━━━━┻━━━━━━━━╋━━━━━━━━╋━━━━━━━━┳━━━━━━━━╋━━━━━━━━╋━━━━━━━━┫
          KC_TRNS, KC_TRNS, KC_TRNS,                   RM_TOGG, RM_TOGG, RM_TOGG,                   KC_TRNS, KC_TRNS, RM_SPDD, RM_VALD, RM_SPDU
    //  ┗━━━━━━━━┻━━━━━━━━┻━━━━━━━━┻━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━┻━━━━━━━━┻━━━━━━━━┻━━━━━━━━┻━━━━━━━━┻━━━━━━━━┛
    ),
};
// clang-format on

#ifdef RGB_MATRIX_BLINK_ENABLE
blink_rgb_t blink_rgbs[RGB_MATRIX_BLINK_COUNT] = {
    {.index = IM_MM_RGB_BLINK_INDEX_BT1, .interval = 250, .times = 1, .color = {.r = 0x00, .g = 0xFF, .b = 0x00}, .blink_cb = im_mm_rgb_blink_cb},
    {.index = IM_MM_RGB_BLINK_INDEX_BT2, .interval = 250, .times = 1, .color = {.r = 0x00, .g = 0xFF, .b = 0x00}, .blink_cb = im_mm_rgb_blink_cb},
    {.index = IM_MM_RGB_BLINK_INDEX_BT3, .interval = 250, .times = 1, .color = {.r = 0x00, .g = 0xFF, .b = 0x00}, .blink_cb = im_mm_rgb_blink_cb},
    {.index = IM_MM_RGB_BLINK_INDEX_2G4, .interval = 250, .times = 1, .color = {.r = 0x00, .g = 0xFF, .b = 0x00}, .blink_cb = im_mm_rgb_blink_cb},
    {.index = IM_MM_RGB_BLINK_INDEX_W2M, .interval = 500, .times = 3, .color = {.r = 150, .g = 150, .b = 150}, .blink_cb = NULL},
    {.index = IM_MM_RGB_BLINK_INDEX_W2H, .interval = 500, .times = 3, .color = {.r = 150, .g = 150, .b = 150}, .blink_cb = NULL},
    {.index = RGB_MATRIX_BLINK_INDEX_BAT, .interval = 250, .times = 3, .color = {.r = 0x00, .g = 0x00, .b = 0x00}, .blink_cb = NULL},
    {.index = RGB_MATRIX_BLINK_INDEX_ALL, .interval = 500, .times = 5, .color = {.r = 100, .g = 100, .b = 100}, .blink_cb = NULL},
};
#endif

// Battery status states
typedef enum {
    BAT_NORMAL,
    BAT_LOW,
    BAT_CHRGING,
    BAT_FULL,
} bat_statue_t;

// Current battery status
bat_statue_t bat_status = BAT_NORMAL;

// Battery monitoring variables
static bool     bat_blink         = false; // Flag for low battery blinking
static uint8_t  battery_full_flag = 1;     // Pin state for full charge
static uint8_t  battery_chrg_flag = 1;     // Pin state for charging
static bool     full_flag         = false; // Flag for full charge state
static uint16_t laste_time_off    = 0;     // Timer for auto power off on low battery

#ifdef RGB_MATRIX_BLINK_INDEX_BAT
// Battery indicator blink handler (triggers low battery blink and auto power off)
void bat_indicators_hook(uint8_t index) {
    if (mm_eeconfig.devs != DEVS_USB) {
        if (!mm_eeconfig.charging && bts_info.bt_info.pvol <= BATTERY_CAPACITY_LOW) {
            rgb_matrix_blink_set_color(RGB_MATRIX_BLINK_INDEX_BAT, RGB_RED);
            rgb_matrix_blink_set_interval_times(index, 500, 0x3);

            bat_blink  = true;
            bat_status = BAT_LOW;
        } else {
            bat_blink = false;
        }

        if (bts_info.bt_info.pvol < 1U && !mm_eeconfig.charging) {
            if (laste_time_off == 0) laste_time_off = timer_read();

            if (timer_elapsed(laste_time_off) > 10000) {
                laste_time_off = 0;

                im_set_power_off();
            }
        } else {
            laste_time_off = 0;
        }
    } else {
        bat_blink = false;
    }

    rgb_matrix_blink_set(index);
}

bool rgb_matrix_blink_user(blink_rgb_t *blink_rgb) {
    if (blink_rgb->index == RGB_MATRIX_BLINK_INDEX_BAT) {
        if (bat_blink != true) {
            return false;
        }
    }

    return true;
}
#endif

// EEPROM configuration structure (packed into 32 bits)
typedef union {
    uint32_t raw;
    struct {
        uint8_t flag : 1;          // General flag
        uint8_t rgb_enable : 1;    // RGB matrix enable
        uint8_t no_gui : 1;        // Disable GUI key
        uint8_t rgb_status : 1;    // RGB status flag
        uint8_t layer : 3;         // Current layer index
        uint8_t rgb_hsv_index : 3; // Current HSV preset index
        uint8_t rgb_brightness;    // RGB brightness value
        uint8_t num_to_f1 : 1;     // Number row to F1-F12 toggle
    };
} confinfo_t;

// Global configuration instance
confinfo_t confinfo;

#ifdef RGB_MATRIX_ENABLE
bool mm_get_rgb_enable(void) {
    return rgb_matrix_config.enable;
}

void mm_set_rgb_enable(bool state) {
    rgb_matrix_config.enable = state;
}
#endif

// Initialize default EEPROM configuration values
void eeconfig_confinfo_default(void) {
    confinfo.flag           = false;
    confinfo.rgb_enable     = true;
    confinfo.no_gui         = false;
    confinfo.rgb_status     = 0;
    confinfo.layer          = 0;
    confinfo.rgb_hsv_index  = 0;
    confinfo.rgb_brightness = RGB_MATRIX_DEFAULT_VAL;
    confinfo.num_to_f1      = 0;

    eeconfig_update_user(confinfo.raw);
}

bool im_led_deinit_user(void) {
    writePin(RGB_DRIVER_EN_PIN, 0);
    writePin(POWER_DCDC_EN_PIN, 0);

    return true;
}

bool im_led_init_user() {
    writePin(POWER_DCDC_EN_PIN, 1);
    writePin(RGB_DRIVER_EN_PIN, 1);

    return true;
}

bool im_pre_init_user(void) {
    setPinInputHigh(CHRG_PIN);
    setPinOutput(RGB_DRIVER_EN_PIN);
    setPinOutput(POWER_DCDC_EN_PIN);
    writePin(POWER_DCDC_EN_PIN, 1);

    return true;
}

static uint32_t readbat = 0x00;

bool im_init_user(void) {
    setPinOutput(RGB_DRIVER_EN_PIN);
    writePin(RGB_DRIVER_EN_PIN, 1);
    setPinInputHigh(CHRG_PIN);
    setPinInputHigh(FULL_PIN);

    confinfo.raw = eeconfig_read_user();

    if (!confinfo.raw) {
        eeconfig_confinfo_default();
    }

    readbat = timer_read32();

#ifdef RGB_MATRIX_BLINK_INDEX_BAT
    rgb_matrix_blink_set(RGB_MATRIX_BLINK_INDEX_BAT);
#endif

    return true;
}

bool im_reset_settings_user(void) {
    rgb_matrix_blink_set_color(RGB_MATRIX_BLINK_INDEX_ALL, RGB_MATRIX_MAXIMUM_BRIGHTNESS, 0x0, 0x0);
    rgb_matrix_blink_set_interval_times(RGB_MATRIX_BLINK_INDEX_ALL, 500, 3);
    rgb_matrix_blink_set(RGB_MATRIX_BLINK_INDEX_ALL);

    return true;
}

// Charging status flag
bool chrg_flag = false;

// Main loop hook for battery status monitoring and updates
bool im_loop_user(void) {
    // Poll battery pins every 3 seconds
    if (timer_elapsed32(readbat) >= 3000) {
        readbat           = timer_read32();
        battery_chrg_flag = readPin(CHRG_PIN);
        battery_full_flag = readPin(FULL_PIN);
    }

    if (!mm_eeconfig.charging && full_flag) {
        full_flag = false;
    }

    // Full charge detected
    if (chrg_flag && !battery_full_flag) {
        if (bat_status != BAT_FULL) bts_send_vendor(v_bat_full);

        full_flag  = true;
        bat_status = BAT_FULL;
    }

    // Stopped charging, reset to normal/low
    if (!mm_eeconfig.charging && bat_status != BAT_LOW) {
        if (bat_status != BAT_NORMAL) bts_send_vendor(v_bat_stop_charging);

        bat_status = BAT_NORMAL;
    }

    return true;
}

void rgb_matrix_disable_user(void) {
    confinfo.rgb_status     = 1;
    confinfo.rgb_brightness = rgb_matrix_get_val();

    eeconfig_update_user(confinfo.raw);
    rgb_matrix_sethsv(rgb_matrix_get_hue(), rgb_matrix_get_sat(), 0);
}

void rgb_matrix_enable_user(void) {
    confinfo.rgb_status = 0;

    eeconfig_update_user(confinfo.raw);
    rgb_matrix_sethsv(rgb_matrix_get_hue(), rgb_matrix_get_sat(), confinfo.rgb_brightness);
}

bool im_mm_rgb_blink_hook_user(uint8_t index, mm_linker_rgb_t state) {
#if defined(RGB_MATRIX_BLINK_ENABLE) && defined(MULTIMODE_ENABLE)
    switch (state) {
        case mlrs_lback_succeed:
        case mlrs_pair_succeed: {
            im_mm_rgb_blink_set_state(mlrs_none);
            return true;
        } break;

        default:
            break;
    }
#endif

    return true;
}

#ifdef RGB_MATRIX_ENABLE
#    ifndef RGB_MATRIX_BAT_VAL
#        define RGB_MATRIX_BAT_VAL RGB_MATRIX_MAXIMUM_BRIGHTNESS
#    endif

// Advanced RGB matrix indicators for caps lock, charging, and GUI disable
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    if (!battery_chrg_flag && !full_flag) {
        if (bat_status != BAT_CHRGING) bts_send_vendor(v_bat_charging);

        rgb_matrix_set_color(RGB_MATRIX_BLINK_INDEX_BAT, RGB_BLUE);

        chrg_flag  = true;
        bat_status = BAT_CHRGING;
    }

    return true;
}
#endif

bool via_command_kb(uint8_t *data, uint8_t length) { return false; }
