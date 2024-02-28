/*
 * Copyright (c) 2019 Nordic Semiconductor ASA
 *
 * SPDX-License-Identifier: LicenseRef-Nordic-5-Clause
 */

#ifndef ZEPHYR_INCLUDE_PMW3389_H_
#define ZEPHYR_INCLUDE_PMW3389_H_

/**
 * @file pmw3389.h
 *
 * @brief Header file for the pmw3389 driver.
 */

#include "../pixart.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Sensor specific attributes of PMW3389. */
enum pmw3389_attribute {
	/** Sensor CPI for both X and Y axes. */
	PMW3389_ATTR_CPI = SENSOR_ATTR_PRIV_START,

	/** Enable or disable sleep modes. */
	PMW3389_ATTR_REST_ENABLE,

	/** Entering time from Run mode to REST1 mode [ms]. */
	PMW3389_ATTR_RUN_DOWNSHIFT_TIME,

	/** Entering time from REST1 mode to REST2 mode [ms]. */
	PMW3389_ATTR_REST1_DOWNSHIFT_TIME,

	/** Entering time from REST2 mode to REST3 mode [ms]. */
	PMW3389_ATTR_REST2_DOWNSHIFT_TIME,

	/** Sampling frequency time during REST1 mode [ms]. */
	PMW3389_ATTR_REST1_SAMPLE_TIME,

	/** Sampling frequency time during REST2 mode [ms]. */
	PMW3389_ATTR_REST2_SAMPLE_TIME,

	/** Sampling frequency time during REST3 mode [ms]. */
	PMW3389_ATTR_REST3_SAMPLE_TIME,
};

#ifdef __cplusplus
}
#endif

/**
 * @}
 */

#endif /* ZEPHYR_INCLUDE_PMW3389_H_ */