void scroll_sts_mat_atoll_ocean_backdrop_water_layer1() {
	Gfx *mat = segmented_to_virtual(mat_atoll_ocean_backdrop_water_layer1);
	shift_t(mat, 13, PACK_TILESIZE(0, 3));
	shift_s(mat, 21, PACK_TILESIZE(0, 1));
	shift_t(mat, 21, PACK_TILESIZE(0, 4));
};

void scroll_wf_level_dl_atoll_ocean() {
	scroll_sts_mat_atoll_ocean_backdrop_water_layer1();
}
