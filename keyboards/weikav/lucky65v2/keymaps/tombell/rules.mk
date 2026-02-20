VIA_ENABLE = no
ENCODER_MAP_ENABLE = no

ifeq ($(strip $(CONSOLE_ENABLE)), yes)
	KEYBOARD_SHARED_EP := yes
endif
