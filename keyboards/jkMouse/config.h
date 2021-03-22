#pragma once

#include "config_common.h"

#define VENDOR_ID       0x0001
#define MANUFACTURER    JK Nobody
#define PRODUCT_ID      0x0001
#define DEVICE_VER      0x0001
#define DESCRIPTION     1x2 Mouse

#define MATRIX_ROWS 1
#define MATRIX_COLS 2

#define MATRIX_ROW_PINS { F4 }
#define MATRIX_COL_PINS { D1, D0 }
#define UNUSED_PINS

#define ENCODERS_PAD_A { D4 }
#define ENCODERS_PAD_B { C6 }
#define ENCODER_RESOLUTION 4

#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5