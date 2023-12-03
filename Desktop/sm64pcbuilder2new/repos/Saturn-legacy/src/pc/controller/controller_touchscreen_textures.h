#ifndef CONTROLLER_TOUCHSCREEN_TEXTURES_H
#define CONTROLLER_TOUCHSCREEN_TEXTURES_H
#ifdef TOUCH_CONTROLS
#include "macros.h"
#include "types.h"

enum TouchTextureIndex {
    TEXTURE_TOUCH_BUTTON,
    TEXTURE_TOUCH_BUTTON_DARK,
}; 

extern const Texture *const touch_textures[TOUCH_TEXTURE_COUNT];

#endif
#endif