// THE AUTOGENERATED LICENSE. ALL THE RIGHTS ARE RESERVED BY ROBOTS.

// WARNING: This file has automatically been generated on Wed, 01 Feb 2017 05:13:32 MSK.
// By https://git.io/c-for-go. DO NOT EDIT.

#include "hamlib/rig.h"
#include <stdlib.h>
#pragma once

#define __CGOGEN 1

// chan_cb_t_2d1ed0bd is a proxy for callback chan_cb_t.
int chan_cb_t_2d1ed0bd(RIG* arg0, channel_t** arg1, int arg2, chan_t* arg3, void* arg4);

// confval_cb_t_8d622de4 is a proxy for callback confval_cb_t.
int confval_cb_t_8d622de4(RIG* arg0, struct confparams* arg1, value_t* arg2, void* arg3);

// vprintf_cb_t_fddf9323 is a proxy for callback vprintf_cb_t.
int vprintf_cb_t_fddf9323(enum rig_debug_level_e arg0, void* arg1, char* arg2, void* arg3);

// freq_cb_t_8c3d2c4c is a proxy for callback freq_cb_t.
int freq_cb_t_8c3d2c4c(RIG* arg0, int arg1, double arg2, void* arg3);

// mode_cb_t_d7e6dd52 is a proxy for callback mode_cb_t.
int mode_cb_t_d7e6dd52(RIG* arg0, int arg1, rmode_t arg2, long int arg3, void* arg4);

// vfo_cb_t_ac116829 is a proxy for callback vfo_cb_t.
int vfo_cb_t_ac116829(RIG* arg0, int arg1, void* arg2);

// ptt_cb_t_f32e1e11 is a proxy for callback ptt_cb_t.
int ptt_cb_t_f32e1e11(RIG* arg0, int arg1, ptt_t arg2, void* arg3);

// dcd_cb_t_aa70811b is a proxy for callback dcd_cb_t.
int dcd_cb_t_aa70811b(RIG* arg0, int arg1, dcd_t arg2, void* arg3);

// pltune_cb_t_26f9489a is a proxy for callback pltune_cb_t.
int pltune_cb_t_26f9489a(RIG* arg0, int arg1, double* arg2, rmode_t* arg3, long int* arg4, void* arg5);

// rig_probe_func_t_ce8c6199 is a proxy for callback rig_probe_func_t.
int rig_probe_func_t_ce8c6199(hamlib_port_t* arg0, int arg1, void* arg2);

