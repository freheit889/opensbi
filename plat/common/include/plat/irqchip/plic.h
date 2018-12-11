/*
 * Copyright (c) 2018 Western Digital Corporation or its affiliates.
 *
 * Authors:
 *   Anup Patel <anup.patel@wdc.com>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#ifndef __IRQCHIP_PLIC_H__
#define __IRQCHIP_PLIC_H__

#include <sbi/sbi_types.h>

int plic_fdt_fixup(void *fdt, const char *compat);

int plic_warm_irqchip_init(u32 target_hart);

int plic_cold_irqchip_init(unsigned long base,
			   u32 num_sources, u32 hart_count);

#endif
