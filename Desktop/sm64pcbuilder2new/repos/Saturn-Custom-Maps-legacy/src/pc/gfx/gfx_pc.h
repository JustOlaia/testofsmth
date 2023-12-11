#ifndef GFX_PC_H
#define GFX_PC_H

#include <PR/gbi.h>

struct GfxRenderingAPI;
struct GfxWindowManagerAPI;

struct GfxDimensions {
    uint32_t width, height;
    float aspect_ratio;
};

extern struct GfxDimensions gfx_current_dimensions;

#ifdef __cplusplus
extern float world_light_dir1;
extern float world_light_dir2;
extern float world_light_dir3;
extern float world_light_dir4;
extern Vec3f gLightingColor;

extern "C" {
#endif

#include <stdbool.h>

void gfx_init(struct GfxWindowManagerAPI *wapi, struct GfxRenderingAPI *rapi, const char *window_title);
struct GfxRenderingAPI *gfx_get_current_rendering_api(void);
void gfx_start_frame(void);
void gfx_run(Gfx *commands);
void gfx_end_frame(void);
void gfx_precache_textures(void);
void gfx_shutdown(void);

extern int preloaded_textures_count;

extern void load_texture(const char*);
extern bool preload_texture(void *, const char *);

#ifdef __cplusplus
}
#endif

#endif
