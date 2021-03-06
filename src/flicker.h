/*
 * LED pattern detection and identification
 * Copyright 2015 Philipp Zabel
 * SPDX-License-Identifier:	LGPL-2.0+ or BSL-1.0
 */
#ifndef __FLICKER_H__
#define __FLICKER_H__

#include <stdbool.h>
#include <stdint.h>

struct flicker;
struct blob;
struct leds;

struct flicker *flicker_new();
void flicker_process(struct flicker *fl, struct blob *blobs, int num_blobs,
		     int skipped, struct leds *leds);

#endif /* __BLOBWATCH_H__*/
