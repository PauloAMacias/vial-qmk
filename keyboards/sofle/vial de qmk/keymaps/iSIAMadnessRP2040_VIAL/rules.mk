CONSOLE_ENABLE = yes 

VIA_ENABLE = yes
VIAL_ENABLE = yes
VIAL_INSECURE = yes

LTO_ENABLE = yes
TAP_DANCE_ENABLE = no # 1200 bytes
MOUSEKEY_ENABLE = no # 1400 bytes
EXTRAKEY_ENABLE = yes # 440 bytes
COMBO_ENABLE = no # 952
KEY_OVERRIDE_ENABLE = no
WPM_ENABLE = no # 650 bytes
OLED_ENABLE = yes
ENCODER_MAP_ENABLE = yes # 744
QMK_SETTINGS = no # 3602 bytes

RGBLIGHT_ENABLE = no
BACKLIGHT_ENABLE = no
RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = ws2812
VIALRGB_ENABLE = no
WS2812_DRIVER = vendor

BOOTMAGIC_ENABLE = no	# Virtual DIP switch configuration
ENCODER_ENABLE = yes	# Encoders
NKRO_ENABLE = no		# Has 6KRO+ already. NKRO does not work

GRAVE_ESC_ENABLE = no	# Save space by not using KC_GESC (+127)
MAGIC_ENABLE = no		# Save space by not PROCESS_MAGIC, which is bootmagic with out the boot (+612)
SPACE_CADET_ENABLE = no # Save space by not using space cadet left/right shift (+350)
