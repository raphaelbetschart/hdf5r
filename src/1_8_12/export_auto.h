#ifndef _EXPORT_AUTO_H_
#define _EXPORT_AUTO_H_
R_CallMethodDef library_WRAPPER_AUTO_H5[] = {
{"R_H5check_version", (DL_FUNC) &R_H5check_version, 3},
{"R_H5close", (DL_FUNC) &R_H5close, 0},
{"R_H5dont_atexit", (DL_FUNC) &R_H5dont_atexit, 0},
{"R_H5garbage_collect", (DL_FUNC) &R_H5garbage_collect, 0},
{"R_H5get_libversion", (DL_FUNC) &R_H5get_libversion, 3},
{"R_H5open", (DL_FUNC) &R_H5open, 0},
{"R_H5set_free_list_limits", (DL_FUNC) &R_H5set_free_list_limits, 6},
{NULL, NULL, 0}
};

R_CallMethodDef library_WRAPPER_AUTO_H5A[] = {
{"R_H5Aclose", (DL_FUNC) &R_H5Aclose, 1},
{"R_H5Acreate_by_name", (DL_FUNC) &R_H5Acreate_by_name, 8},
{"R_H5Acreate2", (DL_FUNC) &R_H5Acreate2, 6},
{"R_H5Adelete", (DL_FUNC) &R_H5Adelete, 2},
{"R_H5Adelete_by_idx", (DL_FUNC) &R_H5Adelete_by_idx, 6},
{"R_H5Adelete_by_name", (DL_FUNC) &R_H5Adelete_by_name, 4},
{"R_H5Aexists", (DL_FUNC) &R_H5Aexists, 2},
{"R_H5Aexists_by_name", (DL_FUNC) &R_H5Aexists_by_name, 4},
{"R_H5Aget_create_plist", (DL_FUNC) &R_H5Aget_create_plist, 1},
{"R_H5Aget_info", (DL_FUNC) &R_H5Aget_info, 2},
{"R_H5Aget_info_by_idx", (DL_FUNC) &R_H5Aget_info_by_idx, 7},
{"R_H5Aget_info_by_name", (DL_FUNC) &R_H5Aget_info_by_name, 5},
{"R_H5Aget_name", (DL_FUNC) &R_H5Aget_name, 3},
{"R_H5Aget_name_by_idx", (DL_FUNC) &R_H5Aget_name_by_idx, 8},
{"R_H5Aget_num_attrs", (DL_FUNC) &R_H5Aget_num_attrs, 1},
{"R_H5Aget_space", (DL_FUNC) &R_H5Aget_space, 1},
{"R_H5Aget_storage_size", (DL_FUNC) &R_H5Aget_storage_size, 1},
{"R_H5Aget_type", (DL_FUNC) &R_H5Aget_type, 1},
{"R_H5Aopen", (DL_FUNC) &R_H5Aopen, 3},
{"R_H5Aopen_by_idx", (DL_FUNC) &R_H5Aopen_by_idx, 7},
{"R_H5Aopen_by_name", (DL_FUNC) &R_H5Aopen_by_name, 5},
{"R_H5Aopen_idx", (DL_FUNC) &R_H5Aopen_idx, 2},
{"R_H5Aopen_name", (DL_FUNC) &R_H5Aopen_name, 2},
{"R_H5Aread", (DL_FUNC) &R_H5Aread, 4},
{"R_H5Arename", (DL_FUNC) &R_H5Arename, 3},
{"R_H5Arename_by_name", (DL_FUNC) &R_H5Arename_by_name, 5},
{"R_H5Awrite", (DL_FUNC) &R_H5Awrite, 3},
{NULL, NULL, 0}
};

R_CallMethodDef library_WRAPPER_AUTO_H5D[] = {
{"R_H5Dclose", (DL_FUNC) &R_H5Dclose, 1},
{"R_H5Dcreate_anon", (DL_FUNC) &R_H5Dcreate_anon, 5},
{"R_H5Dcreate2", (DL_FUNC) &R_H5Dcreate2, 7},
{"R_H5Ddebug", (DL_FUNC) &R_H5Ddebug, 1},
{"R_H5Dfill", (DL_FUNC) &R_H5Dfill, 6},
{"R_H5Dget_access_plist", (DL_FUNC) &R_H5Dget_access_plist, 1},
{"R_H5Dget_create_plist", (DL_FUNC) &R_H5Dget_create_plist, 1},
{"R_H5Dget_offset", (DL_FUNC) &R_H5Dget_offset, 1},
{"R_H5Dget_space", (DL_FUNC) &R_H5Dget_space, 1},
{"R_H5Dget_space_status", (DL_FUNC) &R_H5Dget_space_status, 2},
{"R_H5Dget_storage_size", (DL_FUNC) &R_H5Dget_storage_size, 1},
{"R_H5Dget_type", (DL_FUNC) &R_H5Dget_type, 1},
{"R_H5Dopen2", (DL_FUNC) &R_H5Dopen2, 3},
{"R_H5Dread", (DL_FUNC) &R_H5Dread, 7},
{"R_H5Dset_extent", (DL_FUNC) &R_H5Dset_extent, 2},
{"R_H5Dvlen_get_buf_size", (DL_FUNC) &R_H5Dvlen_get_buf_size, 4},
{"R_H5Dvlen_reclaim", (DL_FUNC) &R_H5Dvlen_reclaim, 5},
{"R_H5Dwrite", (DL_FUNC) &R_H5Dwrite, 6},
{NULL, NULL, 0}
};

R_CallMethodDef library_WRAPPER_AUTO_H5DS[] = {
{"R_H5DSattach_scale", (DL_FUNC) &R_H5DSattach_scale, 3},
{"R_H5DSdetach_scale", (DL_FUNC) &R_H5DSdetach_scale, 3},
{"R_H5DSget_label", (DL_FUNC) &R_H5DSget_label, 4},
{"R_H5DSget_num_scales", (DL_FUNC) &R_H5DSget_num_scales, 2},
{"R_H5DSget_scale_name", (DL_FUNC) &R_H5DSget_scale_name, 3},
{"R_H5DSis_attached", (DL_FUNC) &R_H5DSis_attached, 3},
{"R_H5DSis_scale", (DL_FUNC) &R_H5DSis_scale, 1},
{"R_H5DSset_label", (DL_FUNC) &R_H5DSset_label, 3},
{"R_H5DSset_scale", (DL_FUNC) &R_H5DSset_scale, 2},
{NULL, NULL, 0}
};

R_CallMethodDef library_WRAPPER_AUTO_H5E[] = {
{"R_H5Eauto_is_v2", (DL_FUNC) &R_H5Eauto_is_v2, 2},
{"R_H5Eclear2", (DL_FUNC) &R_H5Eclear2, 1},
{"R_H5Eclose_msg", (DL_FUNC) &R_H5Eclose_msg, 1},
{"R_H5Eclose_stack", (DL_FUNC) &R_H5Eclose_stack, 1},
{"R_H5Ecreate_msg", (DL_FUNC) &R_H5Ecreate_msg, 3},
{"R_H5Ecreate_stack", (DL_FUNC) &R_H5Ecreate_stack, 0},
{"R_H5Eget_class_name", (DL_FUNC) &R_H5Eget_class_name, 3},
{"R_H5Eget_current_stack", (DL_FUNC) &R_H5Eget_current_stack, 0},
{"R_H5Eget_major", (DL_FUNC) &R_H5Eget_major, 1},
{"R_H5Eget_minor", (DL_FUNC) &R_H5Eget_minor, 1},
{"R_H5Eget_msg", (DL_FUNC) &R_H5Eget_msg, 4},
{"R_H5Eget_num", (DL_FUNC) &R_H5Eget_num, 1},
{"R_H5Epop", (DL_FUNC) &R_H5Epop, 2},
{"R_H5Epush2", (DL_FUNC) &R_H5Epush2, 8},
{"R_H5Eregister_class", (DL_FUNC) &R_H5Eregister_class, 3},
{"R_H5Eset_current_stack", (DL_FUNC) &R_H5Eset_current_stack, 1},
{"R_H5Eunregister_class", (DL_FUNC) &R_H5Eunregister_class, 1},
{NULL, NULL, 0}
};

R_CallMethodDef library_WRAPPER_AUTO_H5F[] = {
{"R_H5Fclear_elink_file_cache", (DL_FUNC) &R_H5Fclear_elink_file_cache, 1},
{"R_H5Fclose", (DL_FUNC) &R_H5Fclose, 1},
{"R_H5Fcreate", (DL_FUNC) &R_H5Fcreate, 4},
{"R_H5Fflush", (DL_FUNC) &R_H5Fflush, 2},
{"R_H5Fget_access_plist", (DL_FUNC) &R_H5Fget_access_plist, 1},
{"R_H5Fget_create_plist", (DL_FUNC) &R_H5Fget_create_plist, 1},
{"R_H5Fget_file_image", (DL_FUNC) &R_H5Fget_file_image, 4},
{"R_H5Fget_filesize", (DL_FUNC) &R_H5Fget_filesize, 2},
{"R_H5Fget_freespace", (DL_FUNC) &R_H5Fget_freespace, 1},
{"R_H5Fget_info", (DL_FUNC) &R_H5Fget_info, 2},
{"R_H5Fget_intent", (DL_FUNC) &R_H5Fget_intent, 2},
{"R_H5Fget_mdc_config", (DL_FUNC) &R_H5Fget_mdc_config, 2},
{"R_H5Fget_mdc_hit_rate", (DL_FUNC) &R_H5Fget_mdc_hit_rate, 2},
{"R_H5Fget_mdc_size", (DL_FUNC) &R_H5Fget_mdc_size, 5},
{"R_H5Fget_name", (DL_FUNC) &R_H5Fget_name, 3},
{"R_H5Fget_obj_count", (DL_FUNC) &R_H5Fget_obj_count, 2},
{"R_H5Fget_obj_ids", (DL_FUNC) &R_H5Fget_obj_ids, 4},
{"R_H5Fis_hdf5", (DL_FUNC) &R_H5Fis_hdf5, 1},
{"R_H5Fmount", (DL_FUNC) &R_H5Fmount, 4},
{"R_H5Fopen", (DL_FUNC) &R_H5Fopen, 3},
{"R_H5Freopen", (DL_FUNC) &R_H5Freopen, 1},
{"R_H5Freset_mdc_hit_rate_stats", (DL_FUNC) &R_H5Freset_mdc_hit_rate_stats, 1},
{"R_H5Fset_mdc_config", (DL_FUNC) &R_H5Fset_mdc_config, 2},
{"R_H5Funmount", (DL_FUNC) &R_H5Funmount, 2},
{NULL, NULL, 0}
};

R_CallMethodDef library_WRAPPER_AUTO_H5FDCORE[] = {
{"R_H5FD_core_term", (DL_FUNC) &R_H5FD_core_term, 0},
{"R_H5Pget_fapl_core", (DL_FUNC) &R_H5Pget_fapl_core, 3},
{"R_H5Pset_fapl_core", (DL_FUNC) &R_H5Pset_fapl_core, 3},
{NULL, NULL, 0}
};

R_CallMethodDef library_WRAPPER_AUTO_H5FDFAMILY[] = {
{"R_H5FD_family_init", (DL_FUNC) &R_H5FD_family_init, 0},
{"R_H5FD_family_term", (DL_FUNC) &R_H5FD_family_term, 0},
{"R_H5Pget_fapl_family", (DL_FUNC) &R_H5Pget_fapl_family, 3},
{"R_H5Pset_fapl_family", (DL_FUNC) &R_H5Pset_fapl_family, 3},
{NULL, NULL, 0}
};

R_CallMethodDef library_WRAPPER_AUTO_H5FDLOG[] = {
{"R_H5FD_log_init", (DL_FUNC) &R_H5FD_log_init, 0},
{"R_H5FD_log_term", (DL_FUNC) &R_H5FD_log_term, 0},
{"R_H5Pset_fapl_log", (DL_FUNC) &R_H5Pset_fapl_log, 4},
{NULL, NULL, 0}
};

R_CallMethodDef library_WRAPPER_AUTO_H5FDSEC2[] = {
{"R_H5FD_sec2_init", (DL_FUNC) &R_H5FD_sec2_init, 0},
{"R_H5FD_sec2_term", (DL_FUNC) &R_H5FD_sec2_term, 0},
{"R_H5Pset_fapl_sec2", (DL_FUNC) &R_H5Pset_fapl_sec2, 1},
{NULL, NULL, 0}
};

R_CallMethodDef library_WRAPPER_AUTO_H5FDSTDIO[] = {
{"R_H5FD_stdio_init", (DL_FUNC) &R_H5FD_stdio_init, 0},
{"R_H5FD_stdio_term", (DL_FUNC) &R_H5FD_stdio_term, 0},
{"R_H5Pset_fapl_stdio", (DL_FUNC) &R_H5Pset_fapl_stdio, 1},
{NULL, NULL, 0}
};

R_CallMethodDef library_WRAPPER_AUTO_H5G[] = {
{"R_H5Gclose", (DL_FUNC) &R_H5Gclose, 1},
{"R_H5Gcreate_anon", (DL_FUNC) &R_H5Gcreate_anon, 3},
{"R_H5Gcreate2", (DL_FUNC) &R_H5Gcreate2, 5},
{"R_H5Gget_create_plist", (DL_FUNC) &R_H5Gget_create_plist, 1},
{"R_H5Gget_info", (DL_FUNC) &R_H5Gget_info, 2},
{"R_H5Gget_info_by_idx", (DL_FUNC) &R_H5Gget_info_by_idx, 7},
{"R_H5Gget_info_by_name", (DL_FUNC) &R_H5Gget_info_by_name, 4},
{"R_H5Gopen2", (DL_FUNC) &R_H5Gopen2, 3},
{"R_H5Gset_comment", (DL_FUNC) &R_H5Gset_comment, 3},
{NULL, NULL, 0}
};

R_CallMethodDef library_WRAPPER_AUTO_H5I[] = {
{"R_H5Iclear_type", (DL_FUNC) &R_H5Iclear_type, 2},
{"R_H5Idec_ref", (DL_FUNC) &R_H5Idec_ref, 1},
{"R_H5Idec_type_ref", (DL_FUNC) &R_H5Idec_type_ref, 1},
{"R_H5Idestroy_type", (DL_FUNC) &R_H5Idestroy_type, 1},
{"R_H5Iget_file_id", (DL_FUNC) &R_H5Iget_file_id, 1},
{"R_H5Iget_name", (DL_FUNC) &R_H5Iget_name, 3},
{"R_H5Iget_ref", (DL_FUNC) &R_H5Iget_ref, 1},
{"R_H5Iget_type", (DL_FUNC) &R_H5Iget_type, 1},
{"R_H5Iget_type_ref", (DL_FUNC) &R_H5Iget_type_ref, 1},
{"R_H5Iinc_ref", (DL_FUNC) &R_H5Iinc_ref, 1},
{"R_H5Iinc_type_ref", (DL_FUNC) &R_H5Iinc_type_ref, 1},
{"R_H5Iis_valid", (DL_FUNC) &R_H5Iis_valid, 1},
{"R_H5Inmembers", (DL_FUNC) &R_H5Inmembers, 2},
{"R_H5Iregister", (DL_FUNC) &R_H5Iregister, 2},
{"R_H5Itype_exists", (DL_FUNC) &R_H5Itype_exists, 1},
{NULL, NULL, 0}
};

R_CallMethodDef library_WRAPPER_AUTO_H5IM[] = {
{"R_H5IMget_image_info", (DL_FUNC) &R_H5IMget_image_info, 7},
{"R_H5IMget_npalettes", (DL_FUNC) &R_H5IMget_npalettes, 3},
{"R_H5IMget_palette", (DL_FUNC) &R_H5IMget_palette, 4},
{"R_H5IMget_palette_info", (DL_FUNC) &R_H5IMget_palette_info, 4},
{"R_H5IMis_image", (DL_FUNC) &R_H5IMis_image, 2},
{"R_H5IMis_palette", (DL_FUNC) &R_H5IMis_palette, 2},
{"R_H5IMlink_palette", (DL_FUNC) &R_H5IMlink_palette, 3},
{"R_H5IMmake_image_24bit", (DL_FUNC) &R_H5IMmake_image_24bit, 6},
{"R_H5IMmake_image_8bit", (DL_FUNC) &R_H5IMmake_image_8bit, 5},
{"R_H5IMmake_palette", (DL_FUNC) &R_H5IMmake_palette, 4},
{"R_H5IMread_image", (DL_FUNC) &R_H5IMread_image, 3},
{"R_H5IMunlink_palette", (DL_FUNC) &R_H5IMunlink_palette, 3},
{NULL, NULL, 0}
};

R_CallMethodDef library_WRAPPER_AUTO_H5L[] = {
{"R_H5Lcopy", (DL_FUNC) &R_H5Lcopy, 6},
{"R_H5Lcreate_external", (DL_FUNC) &R_H5Lcreate_external, 6},
{"R_H5Lcreate_hard", (DL_FUNC) &R_H5Lcreate_hard, 6},
{"R_H5Lcreate_soft", (DL_FUNC) &R_H5Lcreate_soft, 5},
{"R_H5Lcreate_ud", (DL_FUNC) &R_H5Lcreate_ud, 7},
{"R_H5Ldelete", (DL_FUNC) &R_H5Ldelete, 3},
{"R_H5Ldelete_by_idx", (DL_FUNC) &R_H5Ldelete_by_idx, 6},
{"R_H5Lexists", (DL_FUNC) &R_H5Lexists, 3},
{"R_H5Lget_info", (DL_FUNC) &R_H5Lget_info, 4},
{"R_H5Lget_info_by_idx", (DL_FUNC) &R_H5Lget_info_by_idx, 7},
{"R_H5Lget_name_by_idx", (DL_FUNC) &R_H5Lget_name_by_idx, 8},
{"R_H5Lget_val", (DL_FUNC) &R_H5Lget_val, 6},
{"R_H5Lget_val_by_idx", (DL_FUNC) &R_H5Lget_val_by_idx, 9},
{"R_H5Lis_registered", (DL_FUNC) &R_H5Lis_registered, 1},
{"R_H5Lmove", (DL_FUNC) &R_H5Lmove, 6},
{"R_H5Lunpack_elink_val", (DL_FUNC) &R_H5Lunpack_elink_val, 5},
{"R_H5Lunregister", (DL_FUNC) &R_H5Lunregister, 1},
{NULL, NULL, 0}
};

R_CallMethodDef library_WRAPPER_AUTO_H5LT[] = {
{"R_H5LTdtype_to_text", (DL_FUNC) &R_H5LTdtype_to_text, 4},
{"R_H5LTfind_attribute", (DL_FUNC) &R_H5LTfind_attribute, 2},
{"R_H5LTfind_dataset", (DL_FUNC) &R_H5LTfind_dataset, 2},
{"R_H5LTget_attribute", (DL_FUNC) &R_H5LTget_attribute, 6},
{"R_H5LTget_attribute_char", (DL_FUNC) &R_H5LTget_attribute_char, 4},
{"R_H5LTget_attribute_double", (DL_FUNC) &R_H5LTget_attribute_double, 4},
{"R_H5LTget_attribute_float", (DL_FUNC) &R_H5LTget_attribute_float, 4},
{"R_H5LTget_attribute_info", (DL_FUNC) &R_H5LTget_attribute_info, 6},
{"R_H5LTget_attribute_int", (DL_FUNC) &R_H5LTget_attribute_int, 4},
{"R_H5LTget_attribute_long", (DL_FUNC) &R_H5LTget_attribute_long, 4},
{"R_H5LTget_attribute_long_long", (DL_FUNC) &R_H5LTget_attribute_long_long, 4},
{"R_H5LTget_attribute_ndims", (DL_FUNC) &R_H5LTget_attribute_ndims, 4},
{"R_H5LTget_attribute_short", (DL_FUNC) &R_H5LTget_attribute_short, 4},
{"R_H5LTget_attribute_string", (DL_FUNC) &R_H5LTget_attribute_string, 4},
{"R_H5LTget_attribute_uchar", (DL_FUNC) &R_H5LTget_attribute_uchar, 4},
{"R_H5LTget_attribute_uint", (DL_FUNC) &R_H5LTget_attribute_uint, 4},
{"R_H5LTget_attribute_ulong", (DL_FUNC) &R_H5LTget_attribute_ulong, 4},
{"R_H5LTget_attribute_ushort", (DL_FUNC) &R_H5LTget_attribute_ushort, 4},
{"R_H5LTget_dataset_info", (DL_FUNC) &R_H5LTget_dataset_info, 5},
{"R_H5LTget_dataset_ndims", (DL_FUNC) &R_H5LTget_dataset_ndims, 3},
{"R_H5LTmake_dataset", (DL_FUNC) &R_H5LTmake_dataset, 6},
{"R_H5LTmake_dataset_char", (DL_FUNC) &R_H5LTmake_dataset_char, 5},
{"R_H5LTmake_dataset_double", (DL_FUNC) &R_H5LTmake_dataset_double, 5},
{"R_H5LTmake_dataset_float", (DL_FUNC) &R_H5LTmake_dataset_float, 5},
{"R_H5LTmake_dataset_int", (DL_FUNC) &R_H5LTmake_dataset_int, 5},
{"R_H5LTmake_dataset_long", (DL_FUNC) &R_H5LTmake_dataset_long, 5},
{"R_H5LTmake_dataset_short", (DL_FUNC) &R_H5LTmake_dataset_short, 5},
{"R_H5LTmake_dataset_string", (DL_FUNC) &R_H5LTmake_dataset_string, 3},
{"R_H5LTopen_file_image", (DL_FUNC) &R_H5LTopen_file_image, 4},
{"R_H5LTpath_valid", (DL_FUNC) &R_H5LTpath_valid, 3},
{"R_H5LTread_dataset", (DL_FUNC) &R_H5LTread_dataset, 5},
{"R_H5LTread_dataset_char", (DL_FUNC) &R_H5LTread_dataset_char, 3},
{"R_H5LTread_dataset_double", (DL_FUNC) &R_H5LTread_dataset_double, 3},
{"R_H5LTread_dataset_float", (DL_FUNC) &R_H5LTread_dataset_float, 3},
{"R_H5LTread_dataset_int", (DL_FUNC) &R_H5LTread_dataset_int, 3},
{"R_H5LTread_dataset_long", (DL_FUNC) &R_H5LTread_dataset_long, 3},
{"R_H5LTread_dataset_short", (DL_FUNC) &R_H5LTread_dataset_short, 3},
{"R_H5LTread_dataset_string", (DL_FUNC) &R_H5LTread_dataset_string, 3},
{"R_H5LTset_attribute_char", (DL_FUNC) &R_H5LTset_attribute_char, 5},
{"R_H5LTset_attribute_double", (DL_FUNC) &R_H5LTset_attribute_double, 5},
{"R_H5LTset_attribute_float", (DL_FUNC) &R_H5LTset_attribute_float, 5},
{"R_H5LTset_attribute_int", (DL_FUNC) &R_H5LTset_attribute_int, 5},
{"R_H5LTset_attribute_long", (DL_FUNC) &R_H5LTset_attribute_long, 5},
{"R_H5LTset_attribute_long_long", (DL_FUNC) &R_H5LTset_attribute_long_long, 5},
{"R_H5LTset_attribute_short", (DL_FUNC) &R_H5LTset_attribute_short, 5},
{"R_H5LTset_attribute_string", (DL_FUNC) &R_H5LTset_attribute_string, 4},
{"R_H5LTset_attribute_uchar", (DL_FUNC) &R_H5LTset_attribute_uchar, 5},
{"R_H5LTset_attribute_uint", (DL_FUNC) &R_H5LTset_attribute_uint, 5},
{"R_H5LTset_attribute_ulong", (DL_FUNC) &R_H5LTset_attribute_ulong, 5},
{"R_H5LTset_attribute_ushort", (DL_FUNC) &R_H5LTset_attribute_ushort, 5},
{"R_H5LTtext_to_dtype", (DL_FUNC) &R_H5LTtext_to_dtype, 2},
{NULL, NULL, 0}
};

R_CallMethodDef library_WRAPPER_AUTO_H5O[] = {
{"R_H5Oclose", (DL_FUNC) &R_H5Oclose, 1},
{"R_H5Ocopy", (DL_FUNC) &R_H5Ocopy, 6},
{"R_H5Odecr_refcount", (DL_FUNC) &R_H5Odecr_refcount, 1},
{"R_H5Oexists_by_name", (DL_FUNC) &R_H5Oexists_by_name, 3},
{"R_H5Oget_comment", (DL_FUNC) &R_H5Oget_comment, 3},
{"R_H5Oget_comment_by_name", (DL_FUNC) &R_H5Oget_comment_by_name, 5},
{"R_H5Oget_info", (DL_FUNC) &R_H5Oget_info, 2},
{"R_H5Oget_info_by_idx", (DL_FUNC) &R_H5Oget_info_by_idx, 7},
{"R_H5Oget_info_by_name", (DL_FUNC) &R_H5Oget_info_by_name, 4},
{"R_H5Oincr_refcount", (DL_FUNC) &R_H5Oincr_refcount, 1},
{"R_H5Olink", (DL_FUNC) &R_H5Olink, 5},
{"R_H5Oopen", (DL_FUNC) &R_H5Oopen, 3},
{"R_H5Oopen_by_addr", (DL_FUNC) &R_H5Oopen_by_addr, 2},
{"R_H5Oopen_by_idx", (DL_FUNC) &R_H5Oopen_by_idx, 6},
{"R_H5Oset_comment", (DL_FUNC) &R_H5Oset_comment, 2},
{"R_H5Oset_comment_by_name", (DL_FUNC) &R_H5Oset_comment_by_name, 4},
{NULL, NULL, 0}
};

R_CallMethodDef library_WRAPPER_AUTO_H5P[] = {
{"R_H5Padd_merge_committed_dtype_path", (DL_FUNC) &R_H5Padd_merge_committed_dtype_path, 2},
{"R_H5Pall_filters_avail", (DL_FUNC) &R_H5Pall_filters_avail, 1},
{"R_H5Pclose", (DL_FUNC) &R_H5Pclose, 1},
{"R_H5Pclose_class", (DL_FUNC) &R_H5Pclose_class, 1},
{"R_H5Pcopy", (DL_FUNC) &R_H5Pcopy, 1},
{"R_H5Pcopy_prop", (DL_FUNC) &R_H5Pcopy_prop, 3},
{"R_H5Pcreate", (DL_FUNC) &R_H5Pcreate, 1},
{"R_H5Pequal", (DL_FUNC) &R_H5Pequal, 2},
{"R_H5Pexist", (DL_FUNC) &R_H5Pexist, 2},
{"R_H5Pfill_value_defined", (DL_FUNC) &R_H5Pfill_value_defined, 2},
{"R_H5Pfree_merge_committed_dtype_paths", (DL_FUNC) &R_H5Pfree_merge_committed_dtype_paths, 1},
{"R_H5Pget", (DL_FUNC) &R_H5Pget, 4},
{"R_H5Pget_alignment", (DL_FUNC) &R_H5Pget_alignment, 3},
{"R_H5Pget_alloc_time", (DL_FUNC) &R_H5Pget_alloc_time, 2},
{"R_H5Pget_attr_creation_order", (DL_FUNC) &R_H5Pget_attr_creation_order, 2},
{"R_H5Pget_attr_phase_change", (DL_FUNC) &R_H5Pget_attr_phase_change, 3},
{"R_H5Pget_btree_ratios", (DL_FUNC) &R_H5Pget_btree_ratios, 4},
{"R_H5Pget_cache", (DL_FUNC) &R_H5Pget_cache, 5},
{"R_H5Pget_char_encoding", (DL_FUNC) &R_H5Pget_char_encoding, 2},
{"R_H5Pget_chunk", (DL_FUNC) &R_H5Pget_chunk, 3},
{"R_H5Pget_chunk_cache", (DL_FUNC) &R_H5Pget_chunk_cache, 4},
{"R_H5Pget_class", (DL_FUNC) &R_H5Pget_class, 1},
{"R_H5Pget_class_name", (DL_FUNC) &R_H5Pget_class_name, 1},
{"R_H5Pget_class_parent", (DL_FUNC) &R_H5Pget_class_parent, 1},
{"R_H5Pget_copy_object", (DL_FUNC) &R_H5Pget_copy_object, 2},
{"R_H5Pget_create_intermediate_group", (DL_FUNC) &R_H5Pget_create_intermediate_group, 2},
{"R_H5Pget_data_transform", (DL_FUNC) &R_H5Pget_data_transform, 3},
{"R_H5Pget_driver", (DL_FUNC) &R_H5Pget_driver, 1},
{"R_H5Pget_edc_check", (DL_FUNC) &R_H5Pget_edc_check, 1},
{"R_H5Pget_elink_acc_flags", (DL_FUNC) &R_H5Pget_elink_acc_flags, 2},
{"R_H5Pget_elink_fapl", (DL_FUNC) &R_H5Pget_elink_fapl, 1},
{"R_H5Pget_elink_file_cache_size", (DL_FUNC) &R_H5Pget_elink_file_cache_size, 2},
{"R_H5Pget_elink_prefix", (DL_FUNC) &R_H5Pget_elink_prefix, 3},
{"R_H5Pget_est_link_info", (DL_FUNC) &R_H5Pget_est_link_info, 3},
{"R_H5Pget_external", (DL_FUNC) &R_H5Pget_external, 6},
{"R_H5Pget_external_count", (DL_FUNC) &R_H5Pget_external_count, 1},
{"R_H5Pget_family_offset", (DL_FUNC) &R_H5Pget_family_offset, 2},
{"R_H5Pget_fclose_degree", (DL_FUNC) &R_H5Pget_fclose_degree, 2},
{"R_H5Pget_fill_time", (DL_FUNC) &R_H5Pget_fill_time, 2},
{"R_H5Pget_fill_value", (DL_FUNC) &R_H5Pget_fill_value, 4},
{"R_H5Pget_filter_by_id2", (DL_FUNC) &R_H5Pget_filter_by_id2, 8},
{"R_H5Pget_filter2", (DL_FUNC) &R_H5Pget_filter2, 8},
{"R_H5Pget_gc_references", (DL_FUNC) &R_H5Pget_gc_references, 2},
{"R_H5Pget_hyper_vector_size", (DL_FUNC) &R_H5Pget_hyper_vector_size, 2},
{"R_H5Pget_istore_k", (DL_FUNC) &R_H5Pget_istore_k, 2},
{"R_H5Pget_layout", (DL_FUNC) &R_H5Pget_layout, 1},
{"R_H5Pget_libver_bounds", (DL_FUNC) &R_H5Pget_libver_bounds, 3},
{"R_H5Pget_link_creation_order", (DL_FUNC) &R_H5Pget_link_creation_order, 2},
{"R_H5Pget_link_phase_change", (DL_FUNC) &R_H5Pget_link_phase_change, 3},
{"R_H5Pget_local_heap_size_hint", (DL_FUNC) &R_H5Pget_local_heap_size_hint, 2},
{"R_H5Pget_mdc_config ", (DL_FUNC) &R_H5Pget_mdc_config , 2},
{"R_H5Pget_meta_block_size", (DL_FUNC) &R_H5Pget_meta_block_size, 2},
{"R_H5Pget_multi_type", (DL_FUNC) &R_H5Pget_multi_type, 2},
{"R_H5Pget_nfilters", (DL_FUNC) &R_H5Pget_nfilters, 1},
{"R_H5Pget_nlinks", (DL_FUNC) &R_H5Pget_nlinks, 2},
{"R_H5Pget_nprops", (DL_FUNC) &R_H5Pget_nprops, 2},
{"R_H5Pget_obj_track_times", (DL_FUNC) &R_H5Pget_obj_track_times, 2},
{"R_H5Pget_preserve", (DL_FUNC) &R_H5Pget_preserve, 1},
{"R_H5Pget_shared_mesg_index", (DL_FUNC) &R_H5Pget_shared_mesg_index, 4},
{"R_H5Pget_shared_mesg_nindexes", (DL_FUNC) &R_H5Pget_shared_mesg_nindexes, 2},
{"R_H5Pget_shared_mesg_phase_change", (DL_FUNC) &R_H5Pget_shared_mesg_phase_change, 3},
{"R_H5Pget_sieve_buf_size", (DL_FUNC) &R_H5Pget_sieve_buf_size, 2},
{"R_H5Pget_size", (DL_FUNC) &R_H5Pget_size, 3},
{"R_H5Pget_sizes", (DL_FUNC) &R_H5Pget_sizes, 3},
{"R_H5Pget_small_data_block_size", (DL_FUNC) &R_H5Pget_small_data_block_size, 2},
{"R_H5Pget_sym_k", (DL_FUNC) &R_H5Pget_sym_k, 3},
{"R_H5Pget_userblock", (DL_FUNC) &R_H5Pget_userblock, 2},
{"R_H5Pget_version", (DL_FUNC) &R_H5Pget_version, 5},
{"R_H5Pisa_class", (DL_FUNC) &R_H5Pisa_class, 2},
{"R_H5Pmodify_filter", (DL_FUNC) &R_H5Pmodify_filter, 5},
{"R_H5Premove", (DL_FUNC) &R_H5Premove, 2},
{"R_H5Premove_filter", (DL_FUNC) &R_H5Premove_filter, 2},
{"R_H5Pset", (DL_FUNC) &R_H5Pset, 4},
{"R_H5Pset_alignment", (DL_FUNC) &R_H5Pset_alignment, 3},
{"R_H5Pset_alloc_time", (DL_FUNC) &R_H5Pset_alloc_time, 2},
{"R_H5Pset_attr_creation_order", (DL_FUNC) &R_H5Pset_attr_creation_order, 2},
{"R_H5Pset_attr_phase_change", (DL_FUNC) &R_H5Pset_attr_phase_change, 3},
{"R_H5Pset_btree_ratios", (DL_FUNC) &R_H5Pset_btree_ratios, 4},
{"R_H5Pset_buffer", (DL_FUNC) &R_H5Pset_buffer, 6},
{"R_H5Pset_cache", (DL_FUNC) &R_H5Pset_cache, 5},
{"R_H5Pset_char_encoding", (DL_FUNC) &R_H5Pset_char_encoding, 2},
{"R_H5Pset_chunk", (DL_FUNC) &R_H5Pset_chunk, 3},
{"R_H5Pset_chunk_cache", (DL_FUNC) &R_H5Pset_chunk_cache, 4},
{"R_H5Pset_copy_object", (DL_FUNC) &R_H5Pset_copy_object, 2},
{"R_H5Pset_create_intermediate_group", (DL_FUNC) &R_H5Pset_create_intermediate_group, 2},
{"R_H5Pset_data_transform", (DL_FUNC) &R_H5Pset_data_transform, 2},
{"R_H5Pset_deflate", (DL_FUNC) &R_H5Pset_deflate, 2},
{"R_H5Pset_driver", (DL_FUNC) &R_H5Pset_driver, 3},
{"R_H5Pset_edc_check", (DL_FUNC) &R_H5Pset_edc_check, 2},
{"R_H5Pset_elink_acc_flags", (DL_FUNC) &R_H5Pset_elink_acc_flags, 2},
{"R_H5Pset_elink_fapl", (DL_FUNC) &R_H5Pset_elink_fapl, 2},
{"R_H5Pset_elink_file_cache_size", (DL_FUNC) &R_H5Pset_elink_file_cache_size, 2},
{"R_H5Pset_elink_prefix", (DL_FUNC) &R_H5Pset_elink_prefix, 2},
{"R_H5Pset_est_link_info", (DL_FUNC) &R_H5Pset_est_link_info, 3},
{"R_H5Pset_external", (DL_FUNC) &R_H5Pset_external, 4},
{"R_H5Pset_family_offset", (DL_FUNC) &R_H5Pset_family_offset, 2},
{"R_H5Pset_fclose_degree", (DL_FUNC) &R_H5Pset_fclose_degree, 2},
{"R_H5Pset_file_image", (DL_FUNC) &R_H5Pset_file_image, 4},
{"R_H5Pset_fill_time", (DL_FUNC) &R_H5Pset_fill_time, 2},
{"R_H5Pset_fill_value", (DL_FUNC) &R_H5Pset_fill_value, 3},
{"R_H5Pset_filter", (DL_FUNC) &R_H5Pset_filter, 5},
{"R_H5Pset_fletcher32", (DL_FUNC) &R_H5Pset_fletcher32, 1},
{"R_H5Pset_gc_references", (DL_FUNC) &R_H5Pset_gc_references, 2},
{"R_H5Pset_hyper_vector_size", (DL_FUNC) &R_H5Pset_hyper_vector_size, 2},
{"R_H5Pset_istore_k", (DL_FUNC) &R_H5Pset_istore_k, 2},
{"R_H5Pset_layout", (DL_FUNC) &R_H5Pset_layout, 2},
{"R_H5Pset_libver_bounds", (DL_FUNC) &R_H5Pset_libver_bounds, 3},
{"R_H5Pset_link_creation_order", (DL_FUNC) &R_H5Pset_link_creation_order, 2},
{"R_H5Pset_link_phase_change", (DL_FUNC) &R_H5Pset_link_phase_change, 3},
{"R_H5Pset_local_heap_size_hint", (DL_FUNC) &R_H5Pset_local_heap_size_hint, 2},
{"R_H5Pset_mdc_config", (DL_FUNC) &R_H5Pset_mdc_config, 2},
{"R_H5Pset_meta_block_size", (DL_FUNC) &R_H5Pset_meta_block_size, 2},
{"R_H5Pset_multi_type", (DL_FUNC) &R_H5Pset_multi_type, 2},
{"R_H5Pset_nbit", (DL_FUNC) &R_H5Pset_nbit, 1},
{"R_H5Pset_nlinks", (DL_FUNC) &R_H5Pset_nlinks, 2},
{"R_H5Pset_obj_track_times", (DL_FUNC) &R_H5Pset_obj_track_times, 2},
{"R_H5Pset_preserve", (DL_FUNC) &R_H5Pset_preserve, 2},
{"R_H5Pset_scaleoffset", (DL_FUNC) &R_H5Pset_scaleoffset, 3},
{"R_H5Pset_shared_mesg_index", (DL_FUNC) &R_H5Pset_shared_mesg_index, 4},
{"R_H5Pset_shared_mesg_nindexes", (DL_FUNC) &R_H5Pset_shared_mesg_nindexes, 2},
{"R_H5Pset_shared_mesg_phase_change", (DL_FUNC) &R_H5Pset_shared_mesg_phase_change, 3},
{"R_H5Pset_shuffle", (DL_FUNC) &R_H5Pset_shuffle, 1},
{"R_H5Pset_sieve_buf_size", (DL_FUNC) &R_H5Pset_sieve_buf_size, 2},
{"R_H5Pset_sizes", (DL_FUNC) &R_H5Pset_sizes, 3},
{"R_H5Pset_small_data_block_size", (DL_FUNC) &R_H5Pset_small_data_block_size, 2},
{"R_H5Pset_sym_k", (DL_FUNC) &R_H5Pset_sym_k, 3},
{"R_H5Pset_szip", (DL_FUNC) &R_H5Pset_szip, 3},
{"R_H5Pset_userblock", (DL_FUNC) &R_H5Pset_userblock, 2},
{"R_H5Punregister", (DL_FUNC) &R_H5Punregister, 2},
{NULL, NULL, 0}
};

R_CallMethodDef library_WRAPPER_AUTO_H5R[] = {
{"R_H5Rcreate", (DL_FUNC) &R_H5Rcreate, 6},
{"R_H5Rdereference", (DL_FUNC) &R_H5Rdereference, 3},
{"R_H5Rget_name", (DL_FUNC) &R_H5Rget_name, 5},
{"R_H5Rget_obj_type2", (DL_FUNC) &R_H5Rget_obj_type2, 4},
{"R_H5Rget_region", (DL_FUNC) &R_H5Rget_region, 3},
{NULL, NULL, 0}
};

R_CallMethodDef library_WRAPPER_AUTO_H5S[] = {
{"R_H5Sclose", (DL_FUNC) &R_H5Sclose, 1},
{"R_H5Scopy", (DL_FUNC) &R_H5Scopy, 1},
{"R_H5Screate", (DL_FUNC) &R_H5Screate, 1},
{"R_H5Screate_simple", (DL_FUNC) &R_H5Screate_simple, 3},
{"R_H5Sdecode", (DL_FUNC) &R_H5Sdecode, 1},
{"R_H5Sencode", (DL_FUNC) &R_H5Sencode, 4},
{"R_H5Sextent_copy", (DL_FUNC) &R_H5Sextent_copy, 2},
{"R_H5Sextent_equal", (DL_FUNC) &R_H5Sextent_equal, 2},
{"R_H5Sget_select_bounds", (DL_FUNC) &R_H5Sget_select_bounds, 3},
{"R_H5Sget_select_elem_npoints", (DL_FUNC) &R_H5Sget_select_elem_npoints, 1},
{"R_H5Sget_select_elem_pointlist", (DL_FUNC) &R_H5Sget_select_elem_pointlist, 4},
{"R_H5Sget_select_hyper_blocklist", (DL_FUNC) &R_H5Sget_select_hyper_blocklist, 4},
{"R_H5Sget_select_hyper_nblocks", (DL_FUNC) &R_H5Sget_select_hyper_nblocks, 1},
{"R_H5Sget_select_npoints", (DL_FUNC) &R_H5Sget_select_npoints, 1},
{"R_H5Sget_select_type", (DL_FUNC) &R_H5Sget_select_type, 1},
{"R_H5Sget_simple_extent_dims", (DL_FUNC) &R_H5Sget_simple_extent_dims, 3},
{"R_H5Sget_simple_extent_ndims", (DL_FUNC) &R_H5Sget_simple_extent_ndims, 1},
{"R_H5Sget_simple_extent_npoints", (DL_FUNC) &R_H5Sget_simple_extent_npoints, 1},
{"R_H5Sget_simple_extent_type", (DL_FUNC) &R_H5Sget_simple_extent_type, 1},
{"R_H5Sis_simple", (DL_FUNC) &R_H5Sis_simple, 1},
{"R_H5Soffset_simple", (DL_FUNC) &R_H5Soffset_simple, 2},
{"R_H5Sselect_all", (DL_FUNC) &R_H5Sselect_all, 1},
{"R_H5Sselect_elements", (DL_FUNC) &R_H5Sselect_elements, 4},
{"R_H5Sselect_hyperslab", (DL_FUNC) &R_H5Sselect_hyperslab, 6},
{"R_H5Sselect_none", (DL_FUNC) &R_H5Sselect_none, 1},
{"R_H5Sselect_valid", (DL_FUNC) &R_H5Sselect_valid, 1},
{"R_H5Sset_extent_none", (DL_FUNC) &R_H5Sset_extent_none, 1},
{"R_H5Sset_extent_simple", (DL_FUNC) &R_H5Sset_extent_simple, 4},
{NULL, NULL, 0}
};

R_CallMethodDef library_WRAPPER_AUTO_H5T[] = {
{"R_H5Tarray_create2", (DL_FUNC) &R_H5Tarray_create2, 3},
{"R_H5Tclose", (DL_FUNC) &R_H5Tclose, 1},
{"R_H5Tcommit_anon", (DL_FUNC) &R_H5Tcommit_anon, 4},
{"R_H5Tcommit2", (DL_FUNC) &R_H5Tcommit2, 6},
{"R_H5Tcommitted", (DL_FUNC) &R_H5Tcommitted, 1},
{"R_H5Tcompiler_conv", (DL_FUNC) &R_H5Tcompiler_conv, 2},
{"R_H5Tconvert", (DL_FUNC) &R_H5Tconvert, 8},
{"R_H5Tcopy", (DL_FUNC) &R_H5Tcopy, 1},
{"R_H5Tcreate", (DL_FUNC) &R_H5Tcreate, 2},
{"R_H5Tdecode", (DL_FUNC) &R_H5Tdecode, 1},
{"R_H5Tdetect_class", (DL_FUNC) &R_H5Tdetect_class, 2},
{"R_H5Tencode", (DL_FUNC) &R_H5Tencode, 4},
{"R_H5Tenum_create", (DL_FUNC) &R_H5Tenum_create, 1},
{"R_H5Tenum_insert", (DL_FUNC) &R_H5Tenum_insert, 3},
{"R_H5Tenum_nameof", (DL_FUNC) &R_H5Tenum_nameof, 4},
{"R_H5Tenum_valueof", (DL_FUNC) &R_H5Tenum_valueof, 4},
{"R_H5Tequal", (DL_FUNC) &R_H5Tequal, 2},
{"R_H5Tget_array_dims2", (DL_FUNC) &R_H5Tget_array_dims2, 2},
{"R_H5Tget_array_ndims", (DL_FUNC) &R_H5Tget_array_ndims, 1},
{"R_H5Tget_class", (DL_FUNC) &R_H5Tget_class, 1},
{"R_H5Tget_create_plist", (DL_FUNC) &R_H5Tget_create_plist, 1},
{"R_H5Tget_cset", (DL_FUNC) &R_H5Tget_cset, 1},
{"R_H5Tget_ebias", (DL_FUNC) &R_H5Tget_ebias, 1},
{"R_H5Tget_fields", (DL_FUNC) &R_H5Tget_fields, 6},
{"R_H5Tget_inpad", (DL_FUNC) &R_H5Tget_inpad, 1},
{"R_H5Tget_member_class", (DL_FUNC) &R_H5Tget_member_class, 2},
{"R_H5Tget_member_index", (DL_FUNC) &R_H5Tget_member_index, 2},
{"R_H5Tget_member_name", (DL_FUNC) &R_H5Tget_member_name, 2},
{"R_H5Tget_member_offset", (DL_FUNC) &R_H5Tget_member_offset, 2},
{"R_H5Tget_member_type", (DL_FUNC) &R_H5Tget_member_type, 2},
{"R_H5Tget_member_value", (DL_FUNC) &R_H5Tget_member_value, 4},
{"R_H5Tget_native_type", (DL_FUNC) &R_H5Tget_native_type, 2},
{"R_H5Tget_nmembers", (DL_FUNC) &R_H5Tget_nmembers, 1},
{"R_H5Tget_norm", (DL_FUNC) &R_H5Tget_norm, 1},
{"R_H5Tget_offset", (DL_FUNC) &R_H5Tget_offset, 1},
{"R_H5Tget_order", (DL_FUNC) &R_H5Tget_order, 1},
{"R_H5Tget_pad", (DL_FUNC) &R_H5Tget_pad, 3},
{"R_H5Tget_precision", (DL_FUNC) &R_H5Tget_precision, 1},
{"R_H5Tget_sign", (DL_FUNC) &R_H5Tget_sign, 1},
{"R_H5Tget_size", (DL_FUNC) &R_H5Tget_size, 1},
{"R_H5Tget_strpad", (DL_FUNC) &R_H5Tget_strpad, 1},
{"R_H5Tget_super", (DL_FUNC) &R_H5Tget_super, 1},
{"R_H5Tget_tag", (DL_FUNC) &R_H5Tget_tag, 1},
{"R_H5Tinsert", (DL_FUNC) &R_H5Tinsert, 4},
{"R_H5Tis_variable_str", (DL_FUNC) &R_H5Tis_variable_str, 1},
{"R_H5Tlock", (DL_FUNC) &R_H5Tlock, 1},
{"R_H5Topen2", (DL_FUNC) &R_H5Topen2, 3},
{"R_H5Tpack", (DL_FUNC) &R_H5Tpack, 1},
{"R_H5Tset_cset", (DL_FUNC) &R_H5Tset_cset, 2},
{"R_H5Tset_ebias", (DL_FUNC) &R_H5Tset_ebias, 2},
{"R_H5Tset_fields", (DL_FUNC) &R_H5Tset_fields, 6},
{"R_H5Tset_inpad", (DL_FUNC) &R_H5Tset_inpad, 2},
{"R_H5Tset_norm", (DL_FUNC) &R_H5Tset_norm, 2},
{"R_H5Tset_offset", (DL_FUNC) &R_H5Tset_offset, 2},
{"R_H5Tset_order", (DL_FUNC) &R_H5Tset_order, 2},
{"R_H5Tset_pad", (DL_FUNC) &R_H5Tset_pad, 3},
{"R_H5Tset_precision", (DL_FUNC) &R_H5Tset_precision, 2},
{"R_H5Tset_sign", (DL_FUNC) &R_H5Tset_sign, 2},
{"R_H5Tset_size", (DL_FUNC) &R_H5Tset_size, 2},
{"R_H5Tset_strpad", (DL_FUNC) &R_H5Tset_strpad, 2},
{"R_H5Tset_tag", (DL_FUNC) &R_H5Tset_tag, 2},
{"R_H5Tvlen_create", (DL_FUNC) &R_H5Tvlen_create, 1},
{NULL, NULL, 0}
};

R_CallMethodDef library_WRAPPER_AUTO_H5TB[] = {
{"R_H5TBadd_records_from", (DL_FUNC) &R_H5TBadd_records_from, 6},
{"R_H5TBAget_fill", (DL_FUNC) &R_H5TBAget_fill, 4},
{"R_H5TBAget_title", (DL_FUNC) &R_H5TBAget_title, 2},
{"R_H5TBappend_records", (DL_FUNC) &R_H5TBappend_records, 7},
{"R_H5TBcombine_tables", (DL_FUNC) &R_H5TBcombine_tables, 5},
{"R_H5TBdelete_field", (DL_FUNC) &R_H5TBdelete_field, 3},
{"R_H5TBdelete_record", (DL_FUNC) &R_H5TBdelete_record, 4},
{"R_H5TBget_field_info", (DL_FUNC) &R_H5TBget_field_info, 6},
{"R_H5TBget_table_info", (DL_FUNC) &R_H5TBget_table_info, 4},
{"R_H5TBinsert_field", (DL_FUNC) &R_H5TBinsert_field, 7},
{"R_H5TBinsert_record", (DL_FUNC) &R_H5TBinsert_record, 9},
{"R_H5TBmake_table", (DL_FUNC) &R_H5TBmake_table, 14},
{"R_H5TBread_fields_index", (DL_FUNC) &R_H5TBread_fields_index, 11},
{"R_H5TBread_fields_name", (DL_FUNC) &R_H5TBread_fields_name, 10},
{"R_H5TBread_records", (DL_FUNC) &R_H5TBread_records, 9},
{"R_H5TBread_table", (DL_FUNC) &R_H5TBread_table, 7},
{"R_H5TBwrite_fields_index", (DL_FUNC) &R_H5TBwrite_fields_index, 10},
{"R_H5TBwrite_fields_name", (DL_FUNC) &R_H5TBwrite_fields_name, 9},
{"R_H5TBwrite_records", (DL_FUNC) &R_H5TBwrite_records, 8},
{NULL, NULL, 0}
};

R_CallMethodDef library_WRAPPER_AUTO_H5Z[] = {
{"R_H5Zfilter_avail", (DL_FUNC) &R_H5Zfilter_avail, 1},
{"R_H5Zget_filter_info", (DL_FUNC) &R_H5Zget_filter_info, 2},
{"R_H5Zregister", (DL_FUNC) &R_H5Zregister, 1},
{"R_H5Zunregister", (DL_FUNC) &R_H5Zunregister, 1},
{NULL, NULL, 0}
};

#endif