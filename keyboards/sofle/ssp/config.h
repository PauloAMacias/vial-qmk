
#pragma once

#define DYNAMIC_KEYMAP_LAYER_COUNT 5

#define NO_ACTION_ONESHOT
#define NO_RESET

#define MASTER_LEFT

#define MATRIX_ROWS 10
#define MATRIX_COLS 6

#define DEBOUNCE 5

#define TAPPING_TOGGLE 2

#define USE_SERIAL
#define SERIAL_USE_MULTI_TRANSACTION

#ifdef OLED_ENABLE
	#define OLED_TIMEOUT 80000
	#define OLED_BRIGHTNESS 90
	#define SPLIT_WPM_ENABLE
	#define SPLIT_OLED_ENABLE
#endif

#ifdef COMBO_ENABLE
    #define VIAL_COMBO_ENTRIES 10
	#define COMBO_TERM 400
#endif

#ifdef RGBLIGHT_ENABLE
    //#define WS2812_DI_PIN D3 // Commented because is in info.json.
    #define RGBLED_NUM 72
    #define RGBLED_SPLIT {36,36}
    #define RGBLIGHT_LIMIT_VAL 130
    #define RGBLIGHT_DEFAULT_VAL 120
    #define RGBLIGHT_VAL_STEP 5
    #define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_SWIRL
    #define RGBLIGHT_DEFAULT_SPD 120
    #define RGBLIGHT_SPLIT
    #define RGBLIGHT_SLEEP

    #define LED_LAYOUT( \
        L00,	L01,	L02,	L03,	L04,	L05,					L08,	L09,	L010,	L011,	L012,	L013, \
        L10,			L12,			L14,									L19,			L111,			L113, \
        L20,	L21,	L22,	L23,	L24,	L25,					L28,	L29,	L210,	L211,	L212,	L213, \
        L30,	L31,	L32,	L33,	L34,	L35,					L38,	L39,	L310,	L311,	L312,	L313, \
        L40,			L42,			L44,									L49,			L411,			L413, \
        L50,	L51,	L52,	L53,	L54,	L55,					L58,	L59,	L510,	L511,	L512,	L513, \
                        L62,	L63,	L64,	L65,	L66,	L67,	L68,	L69,	L610,	L611,				  \
                L71,									L76,	L77,									L712		 )\
        { \
            L71,L10,L12,L14,L44,L42,L40,\
            L62,L50,L30,L20,L00,L01,L21,L31,L51,L63,L64,L52,L32,L22,L02,L03,L23,L33,L53,L66,L76,L54,L34,L24,L04,L05,L25,L35,L55,\
            L712,L113,L111,L19,L49,L411,L413,\
            L611,L513,L313,L213,L013,L012,L212,L312,L512,L610,L69,L511,L311,L211,L011,L010,L210,L310,L510,L67,L77,L59,L39,L29,L09,L08,L28,L38,L58 \
        }

    #define /*RGBLIGHT_LED_MAP*/ LED_LAYOUT( \
        3,  4,  14, 15, 26, 27,       46, 47, 57, 58, 68, 69, \
            5,      16,     28,       45,     56,     67,     \
        2,  6,  13, 17, 25, 29,       44, 48, 55, 59, 66, 70, \
        1,  7,  12, 18, 24, 30,       43, 49, 54, 60, 65, 71, \
            9,      20,     35,       38,     53,     63,     \
        0,  8,  11, 19, 23, 32,       41, 50, 52, 61, 64, 72, \
            10, 21, 22, 33, 34,       39, 40, 51, 51, 62,     \
            31,                36, 37,                42      )
    

    #define RGBLIGHT_EFFECT_BREATHING
    #define RGBLIGHT_EFFECT_ALTERNATING
    #define RGBLIGHT_EFFECT_RAINBOW_MOOD
    #define RGBLIGHT_EFFECT_RAINBOW_SWIRL

    #ifndef OLED_ENABLE
        #ifndef TAP_DANCE_ENABLE
            #define RGBLIGHT_EFFECT_CHRISTMAS
            #define RGBLIGHT_EFFECT_KNIGHT
            #define RGBLIGHT_EFFECT_SNAKE
            #define RGBLIGHT_EFFECT_TWINKLE
            #define RGBLIGHT_EFFECT_RGB_TEST
            #define RGBLIGHT_EFFECT_STATIC_GRADIENT
        #endif
    #endif

#endif

#ifdef RGB_MATRIX_ENABLE
    #define VIALRGB_NO_DIRECT
    #define RGBLED_NUM 72
    #define DRIVER_LED_TOTAL RGBLED_NUM
    #define RGB_MATRIX_LED_COUNT RGBLED_NUM
    #define RGB_MATRIX_MAXIMUM_BRIGHTNESS 130
    #define RGB_MATRIX_HUE_STEP 8
    #define RGB_MATRIX_SAT_STEP 8
    #define RGB_MATRIX_VAL_STEP 8
    #define RGB_MATRIX_SPD_STEP 5 
    #define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_BREATHING
    #define RGB_MATRIX_DEFAULT_HUE 0 // Sets the default hue value, if none has been set

    #define RGB_MATRIX_DEFAULT_SAT 255 // Sets the default saturation value, if none has been set
    #define RGB_MATRIX_DEFAULT_ON true // Sets the default enabled state, if none has been set
    #define RGB_MATRIX_DEFAULT_VAL 65 // Sets the default brightness value, if none has been set
    
    #define RGB_MATRIX_KEYPRESSES
    #define RGB_MATRIX_FRAMEBUFFER_EFFECTS
    #define SPLIT_TRANSPORT_MIRROR
    #define RGB_MATRIX_KEYRELEASES
    #define RGB_MATRIX_SPLIT {36,36}
#endif

    #define ENABLE_RGB_MATRIX_NONE = 0,
    #define ENABLE_RGB_MATRIX_SOLID_COLOR = 1,     // Static single hue, no speed support
    #define ENABLE_RGB_MATRIX_ALPHAS_MODS         // Static dual hue, speed is hue for secondary hue
    #define ENABLE_RGB_MATRIX_GRADIENT_UP_DOWN    // Static gradient top to bottom, speed controls how much gradient changes
    #define ENABLE_RGB_MATRIX_GRADIENT_LEFT_RIGHT    // Static gradient left to right, speed controls how much gradient changes
    #define ENABLE_RGB_MATRIX_BREATHING           // Single hue brightness cycling animation
    #define ENABLE_RGB_MATRIX_BAND_SAT        // Single hue band fading saturation scrolling left to right
    #define ENABLE_RGB_MATRIX_BAND_VAL        // Single hue band fading brightness scrolling left to right
    #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_SAT   // Single hue 3 blade spinning pinwheel fades saturation
    #define ENABLE_RGB_MATRIX_BAND_PINWHEEL_VAL   // Single hue 3 blade spinning pinwheel fades brightness
    #define ENABLE_RGB_MATRIX_BAND_SPIRAL_SAT     // Single hue spinning spiral fades saturation
    #define ENABLE_RGB_MATRIX_BAND_SPIRAL_VAL     // Single hue spinning spiral fades brightness
    #define ENABLE_RGB_MATRIX_CYCLE_ALL           // Full keyboard solid hue cycling through full gradient
    #define ENABLE_RGB_MATRIX_CYCLE_LEFT_RIGHT    // Full gradient scrolling left to right
    #define ENABLE_RGB_MATRIX_CYCLE_UP_DOWN       // Full gradient scrolling top to bottom
    #define ENABLE_RGB_MATRIX_CYCLE_OUT_IN        // Full gradient scrolling out to in
    #define ENABLE_RGB_MATRIX_CYCLE_OUT_IN_DUAL   // Full dual gradients scrolling out to in
    #define ENABLE_RGB_MATRIX_RAINBOW_MOVING_CHEVRON  // Full gradent Chevron shapped scrolling left to right
    #define ENABLE_RGB_MATRIX_CYCLE_PINWHEEL      // Full gradient spinning pinwheel around center of keyboard
    #define ENABLE_RGB_MATRIX_CYCLE_SPIRAL        // Full gradient spinning spiral around center of keyboard
    #define ENABLE_RGB_MATRIX_DUAL_BEACON         // Full gradient spinning around center of keyboard
    #define ENABLE_RGB_MATRIX_RAINBOW_BEACON      // Full tighter gradient spinning around center of keyboard
    #define ENABLE_RGB_MATRIX_RAINBOW_PINWHEELS   // Full dual gradients spinning two halfs of keyboard
    #define ENABLE_RGB_MATRIX_RAINDROPS           // Randomly changes a single key's hue
    #define ENABLE_RGB_MATRIX_JELLYBEAN_RAINDROPS // Randomly changes a single key's hue and saturation
    #define ENABLE_RGB_MATRIX_HUE_BREATHING       // Hue shifts up a slight ammount at the same time, then shifts back
    #define ENABLE_RGB_MATRIX_HUE_PENDULUM        // Hue shifts up a slight ammount in a wave to the right, then back to the left
    #define ENABLE_RGB_MATRIX_HUE_WAVE            // Hue shifts up a slight ammount and then back down in a wave to the right
    #define ENABLE_RGB_MATRIX_PIXEL_FRACTAL       // Single hue fractal filled keys pulsing horizontally out to edges
    #define ENABLE_RGB_MATRIX_PIXEL_RAIN          // Randomly light keys with random hues

#if defined(RGB_MATRIX_FRAMEBUFFER_EFFECTS)
    #define ENABLE_RGB_MATRIX_TYPING_HEATMAP      // How hot is your WPM!
    #define ENABLE_RGB_MATRIX_DIGITAL_RAIN        // That famous computer simulation
#endif
#if defined(RGB_MATRIX_KEYPRESSES) || defined(RGB_MATRIX_KEYRELEASES)
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE   // Pulses keys hit to hue & value then fades value out
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE      // Static single hue, pulses keys hit to shifted hue then fades to current hue
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_WIDE       // Hue & value pulse near a single key hit then fades value out
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE  // Hue & value pulse near multiple key hits then fades value out
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_CROSS      // Hue & value pulse the same column and row of a single key hit then fades value out
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTICROSS // Hue & value pulse the same column and row of multiple key hits then fades value out
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_NEXUS      // Hue & value pulse away on the same column and row of a single key hit then fades value out
    #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTINEXUS // Hue & value pulse away on the same column and row of multiple key hits then fades value out
    #define ENABLE_RGB_MATRIX_SPLASH              // Full gradient & value pulse away from a single key hit then fades value out
    #define ENABLE_RGB_MATRIX_MULTISPLASH         // Full gradient & value pulse away from multiple key hits then fades value out
    #define ENABLE_RGB_MATRIX_SOLID_SPLASH        // Hue & value pulse away from a single key hit then fades value out
    #define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH   // Hue & value pulse away from multiple key hits then fades value out
#endif


