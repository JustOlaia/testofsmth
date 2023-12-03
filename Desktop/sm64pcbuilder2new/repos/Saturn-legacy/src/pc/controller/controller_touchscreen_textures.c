#ifdef TOUCH_CONTROLS
#include "controller_touchscreen_textures.h"

ALIGNED8 const u8 texture_touch_button[] = {
#include "textures/touchcontrols/touch_button.rgba16.inc.c"
};
ALIGNED8 const u8 texture_touch_button_dark[] = {
#include "textures/touchcontrols/touch_button_dark.rgba16.inc.c"
};

const Texture *const touch_textures[TOUCH_TEXTURE_COUNT] = {
    texture_touch_button,
    texture_touch_button_dark,
};
#endif