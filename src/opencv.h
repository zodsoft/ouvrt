/*
 * Pose estimation using OpenCV
 * Copyright 2015 Philipp Zabel
 * SPDX-License-Identifier:	LGPL-2.0+ or BSL-1.0
 */
#ifndef __OPENCV_H__
#define __OPENCV_H__

#include "math.h"

void estimate_initial_pose(struct blob *blobs, int num_blobs,
			   vec3 *leds, int num_leds,
			   dmat3 *camera_matrix, double dist_coeffs[5],
			   dquat *rot, dvec3 *trans, bool use_extrinsic_guess);

#endif /* __OPENCV_H__ */
