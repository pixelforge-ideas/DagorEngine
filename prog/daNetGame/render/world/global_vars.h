// Copyright (C) Gaijin Games KFT.  All rights reserved.
#pragma once

#include <shaders/dag_shaderVariableInfo.h>
#define GLOBAL_VARS_LIST                \
  VAR(dissolve_frame_counter)           \
  VAR(sun_color_0)                      \
  VAR(sun_light_color)                  \
  VAR(zn_zfar)                          \
  VAR(water_level)                      \
  VAR(hero_is_cockpit)                  \
  VAR(hero_matrixX)                     \
  VAR(hero_matrixY)                     \
  VAR(hero_matrixZ)                     \
  VAR(prev_hero_matrixX)                \
  VAR(prev_hero_matrixY)                \
  VAR(prev_hero_matrixZ)                \
  VAR(hero_bbox_reprojectionX)          \
  VAR(hero_bbox_reprojectionY)          \
  VAR(hero_bbox_reprojectionZ)          \
  VAR(prev_globtm_psf_0)                \
  VAR(prev_globtm_psf_1)                \
  VAR(prev_globtm_psf_2)                \
  VAR(prev_globtm_psf_3)                \
  VAR(globtm_psf_0)                     \
  VAR(globtm_psf_1)                     \
  VAR(globtm_psf_2)                     \
  VAR(globtm_psf_3)                     \
  VAR(world_view_pos)                   \
  VAR(frame_tex)                        \
  VAR(downsampled_far_depth_tex)        \
  VAR(downsample_depth_type)            \
  VAR(from_sun_direction)               \
  VAR(lmesh_rendering_mode)             \
  VAR(world_to_hmap_tex_ofs)            \
  VAR(world_to_hmap_ofs)                \
  VAR(world_to_hmap_patches_tex_ofs)    \
  VAR(world_to_hmap_patches_ofs)        \
  VAR(world_to_depth_ao)                \
  VAR(depth_ao_heights)                 \
  VAR(dyn_model_render_pass)            \
  VAR(dynamic_lights_count)             \
  VAR(hmap_displacement_up)             \
  VAR(hmap_displacement_down)           \
  VAR(effects_depth_tex)                \
  VAR(instance_data_buffer)             \
  VAR(shore_wave_height_to_amplitude)   \
  VAR(shore_amplitude_to_length)        \
  VAR(shore_parallelism_to_wind)        \
  VAR(shore__waves_dist)                \
  VAR(shore__waves_depth_min)           \
  VAR(shore__waves_depth_fade_interval) \
  VAR(shore_width_k)                    \
  VAR(shore_gerstner_speed)             \
  VAR(clipmap_writes_height_only)       \
  VAR(solid_color)                      \
  VAR(envi_probe_specular)              \
  VAR(envi_probe_specular_samplerstate) \
  VAR(underwater_fade)                  \
  VAR(small_sampled_buffers)            \
  VAR(chromatic_aberration_params)      \
  VAR(film_grain_params)

#define GLOBAL_VARS_OPTIONAL_LIST             \
  VAR(uv_temporal_jitter)                     \
  VAR(glass_shadow_k)                         \
  VAR(gi_hero_cockpit_distance)               \
  VAR(scratch_params)                         \
  VAR(sub_pixels)                             \
  VAR(interleave_pixels)                      \
  VAR(super_pixels)                           \
  VAR(super_screenshot_tex)                   \
  VAR(water_refraction_tex)                   \
  VAR(fom_shadows_tm_x)                       \
  VAR(fom_shadows_tm_y)                       \
  VAR(fom_shadows_tm_z)                       \
  VAR(shadows_quality)                        \
  VAR(thin_gbuf_resolve)                      \
  VAR(const_frame_exposure)                   \
  VAR(use_albedo_luma_adaptation)             \
  VAR(ssao_quality)                           \
  VAR(ssao_strength)                          \
  VAR(blur_quality)                           \
  VAR(lens_night_vision_on)                   \
  VAR(lut_tex)                                \
  VAR(specular_tex)                           \
  VAR(specular_tex_samplerstate)              \
  VAR(gi_quality)                             \
  VAR(current_ambient)                        \
  VAR(water_depth_above)                      \
  VAR(world_to_trees_tex_mul)                 \
  VAR(world_to_trees_tex_ofs)                 \
  VAR(depth_bounds_support)                   \
  VAR(deform_hmap_enabled)                    \
  VAR(hmap_patches_min_max_z)                 \
  VAR(lens_dof_depth)                         \
  VAR(lens_render_mode)                       \
  VAR(lens_detail_level)                      \
  VAR(lens_frame_tex)                         \
  VAR(lens_frame_tex_samplerstate)            \
  VAR(lens_distortion_params)                 \
  VAR(lens_brighthness)                       \
  VAR(jitteredCamPosToUnjitteredHistoryClip)  \
  VAR(prev_to_cur_origin_move)                \
  VAR(prevViewProjTm0)                        \
  VAR(prevViewProjTm1)                        \
  VAR(prevViewProjTm2)                        \
  VAR(prevViewProjTm3)                        \
  VAR(prevOrigoRelativeViewProjTm0)           \
  VAR(prevOrigoRelativeViewProjTm1)           \
  VAR(prevOrigoRelativeViewProjTm2)           \
  VAR(prevOrigoRelativeViewProjTm3)           \
  VAR(prev_world_view_pos)                    \
  VAR(pixel_scale)                            \
  VAR(sky_color)                              \
  VAR(matrices_stride)                        \
  VAR(has_motion_vectors)                     \
  VAR(mip_bias)                               \
  VAR(use_custom_fog)                         \
  VAR(projection_center)                      \
  VAR(downsampled_motion_vectors_tex)         \
  VAR(prev_downsampled_motion_vectors_tex)    \
  VAR(downsampled_depth_mip_count)            \
  VAR(compatibility_mode)                     \
  VAR(checkerboard_jitter)                    \
  VAR(autodetect_land_selfillum_color)        \
  VAR(autodetect_land_selfillum_enabled)      \
  VAR(vr_bounding_view_reprojection_matrix0)  \
  VAR(vr_bounding_view_reprojection_matrix1)  \
  VAR(vr_bounding_view_reprojection_matrix2)  \
  VAR(vr_bounding_view_reprojection_matrix3)  \
  VAR(use_vr_reprojection)                    \
  VAR(use_bounding_vr_reprojection)           \
  VAR(vr_reprojection_matrix0)                \
  VAR(vr_reprojection_matrix1)                \
  VAR(vr_reprojection_matrix2)                \
  VAR(vr_reprojection_matrix3)                \
  VAR(skies_globtm)                           \
  VAR(skies_panoramic_scattering)             \
  VAR(skies_froxels_resolution)               \
  VAR(skies_frustum_scattering_last_tz)       \
  VAR(rendering_res)                          \
  VAR(lowres_rt_params)                       \
  VAR(lowres_tex_size)                        \
  VAR(vegetations_mrt0_tex)                   \
  VAR(vegetations_mrt1_tex)                   \
  VAR(vegetations_depth_tex)                  \
  VAR(depth_gbuf)                             \
  VAR(depth_bounds)                           \
  VAR(is_hero_cockpit)                        \
  VAR(water_rain_ripples_enabled)             \
  VAR(distant_world_to_hmap_low)              \
  VAR(distant_heightmap_scale)                \
  VAR(distant_heightmap_target_box)           \
  VAR(camera_right)                           \
  VAR(camera_up)                              \
  VAR(foam_time)                              \
  VAR(scroll_time)                            \
  VAR(ssao_tex)                               \
  VAR(object_tess_factor)                     \
  VAR(force_ignore_history)                   \
  VAR(antialiasing_type)                      \
  VAR(fx_render_mode)                         \
  VAR(contrast_adaptive_sharpening)           \
  VAR(voxelize_box0)                          \
  VAR(gbuffer_for_treesabove)                 \
  VAR(world_to_hmap_tex_ofs_ri_landclass_arr) \
  VAR(world_to_hmap_ofs_ri_landclass_arr)     \
  VAR(voxelize_box1)                          \
  VAR(voxelize_world_to_rasterize_space_mul)  \
  VAR(voxelize_world_to_rasterize_space_add)  \
  VAR(glass_dynamic_light)                    \
  VAR(disable_dynmat_params)                  \
  VAR(camera_base_offset)

#define VAR(a) extern ShaderVariableInfo a##VarId;
GLOBAL_VARS_LIST
GLOBAL_VARS_OPTIONAL_LIST
#undef VAR

extern int globalFrameBlockId;
extern int globalConstBlockId;
