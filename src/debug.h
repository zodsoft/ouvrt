/*
 * Debug output helpers
 * Copyright 2015 Philipp Zabel
 * SPDX-License-Identifier:	GPL-2.0+
 */
#ifndef __DEBUG_H__
#define __DEBUG_H__

#include <stdint.h>

#define DEBUG_MODE_SHM	1
#define DEBUG_MODE_X	2
#define DEBUG_MODE_PNG	3

#include "blobwatch.h"
#include "imu.h"
#include "math.h"

extern int debug_mode;

struct ouvrt_debug_attachment {
	struct blobservation blobservation;
	dquat rot;
	dvec3 trans;
	int num_imu_samples;
	struct imu_state imu_samples[32];
	double timestamps[4];
};

int debug_parse_arg(const char *arg);

unsigned int debug_imu_fifo_in(struct imu_state *samples, unsigned int n);
unsigned int debug_imu_fifo_out(struct imu_state *samples, unsigned int n);

#endif /* __DEBUG_H__ */
