#include "src/game/envfx_snow.h"

const GeoLayout wf_area_1_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_ALPHA, -1166, 85, -1059, 90, 0, 90, wf_dl_bushes_mesh_layer_4),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_TRANSPARENT, -1280, 257, -1031, 90, 0, 90, wf_dl_fences_mesh_layer_5),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -800, -511, -1226, 90, 0, 0, wf_dl_ground_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_LEVEL_DISPLAY_LIST(LAYER_TRANSPARENT, wf_dl_ground_mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -892, 6, -1425, 90, 0, 0, wf_dl_house_mesh_layer_1),
		GEO_OPEN_NODE(),
			GEO_LEVEL_DISPLAY_LIST(LAYER_TRANSPARENT, wf_dl_house_mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -318, 31, 751, 90, 0, 0, wf_dl_mailbox_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -1367, -182, -1906, 90, 0, 90, wf_dl_pipe_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -329, -219, 310, 0, 0, 90, wf_dl_pipe_002_mesh_layer_1),
		GEO_TRANSLATE_ROTATE_WITH_DL(LAYER_OPAQUE, -380, 31, 751, 90, 0, 0, wf_dl_trees_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout wf_area_1[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND(BACKGROUND_OCEAN_SKY, geo_skybox_main),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, 0, 0, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, wf_area_1_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_LEVEL_DISPLAY_LIST(LAYER_OPAQUE, wf_dl_material_revert_render_settings),
		GEO_LEVEL_DISPLAY_LIST(LAYER_ALPHA, wf_dl_material_revert_render_settings),
		GEO_LEVEL_DISPLAY_LIST(LAYER_TRANSPARENT, wf_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
