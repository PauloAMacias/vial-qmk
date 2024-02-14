#pragma once

#define DYNAMIC_KEYMAP_LAYER_COUNT 4

#define VIAL_KEYBOARD_UID { 0x05, 0xCD, 0x9F, 0x8A, 0xF4, 0xDF, 0xDE, 0xB2 }

#define NO_ACTION_ONESHOT //Save 244 bytes
#define NO_RESET //Save 40 bytes

#define WS2812_DI_PIN D3

// Add RGB underglow and top facing lighting
#ifdef RGB_MATRIX_ENABLE

        #define RGBLED_NUM 72
        //#define RGB_MATRIX_SPLIT {36,36}
        //#define RGB_MATRIX_LED_COUNT RGBLED_NUM
        #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 120 // limits maximum brightness of LEDs to 150 out of 255. Higher may cause the controller to crash.
        #define RGB_MATRIX_HUE_STEP 8
        #define RGB_MATRIX_SAT_STEP 8
        #define RGB_MATRIX_VAL_STEP 8
        #define RGB_MATRIX_SPD_STEP 10
        #define RGBLIGHT_LIMIT_VAL 130
        #define RGB_MATRIX_KEYPRESSES
        #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
        #define SPLIT_TRANSPORT_MIRROR
        #define DRIVER_LED_TOTAL RGBLED_NUM

        #define ENABLE_RGB_MATRIX_BREATHING
        #define ENABLE_RGB_MATRIX_BAND_VAL

        

#endif

#ifdef RGBLIGHT_ENABLE

        #define RGBLIGHT_SPLIT
        #define RGBLED_NUM 72
        #define RGB_SPLIT {36,36}
        #define RGBLIGHT_LIMIT_VAL 120
        #define RGBLIGHT_SLEEP  /* If defined, the RGB lighting will be switched off when the host goes to sleep */
        #define RGBLIGHT_EFFECT_BREATHING
        #define RGBLIGHT_EFFECT_RAINBOW_MOOD
        #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
        #define RGBLIGHT_EFFECT_SNAKE
        #define RGBLIGHT_EFFECT_KNIGHT
        #define RGBLIGHT_EFFECT_CHRISTMAS
        #define RGBLIGHT_EFFECT_STATIC_GRADIENT
        #define RGBLIGHT_EFFECT_RGB_TEST
        #define RGBLIGHT_EFFECT_ALTERNATING
        #define RGBLIGHT_EFFECT_TWINKLE
        #define RGBLIGHT_LIMIT_VAL 120
        #define RGBLIGHT_HUE_STEP 10
        #define RGBLIGHT_SAT_STEP 17
        #define RGBLIGHT_VAL_STEP 17
#endif

#define MEDIA_KEY_DELAY 2

#define USB_POLLING_INTERVAL_MS 1