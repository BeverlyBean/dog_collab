#include "src/game/envfx_snow.h"

const GeoLayout lll_area_2_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, lll_dl_E1_tree_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, lll_dl_E2_platforms_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_ALPHA, lll_dl_Fence_Vis_mesh_layer_4),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, lll_dl_flowers_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, lll_dl_Plane_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE_DECAL, lll_dl_Plane_mesh_layer_2),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, lll_dl_Plane_001_mesh_layer_6),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, lll_dl_Y2_cliff_mesh_layer_1),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, lll_dl_Z1_death_floor_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout lll_area_2[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 120000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, -50000, 0, 0, -50000, -100, 0, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, lll_area_2_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, lll_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_OPAQUE_DECAL, lll_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_ALPHA, lll_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT_DECAL, lll_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
