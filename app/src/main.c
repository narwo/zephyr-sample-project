/*
 * Copyright (c) 2020 Mark Olsson <mark@markolsson.se>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <zephyr.h>
#include <sys/printk.h>

void main(void) {
	printk("Hello from Zephyr, using board %s\n", CONFIG_BOARD);
}
