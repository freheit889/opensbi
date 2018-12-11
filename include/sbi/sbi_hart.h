/*
 * Copyright (c) 2018 Western Digital Corporation or its affiliates.
 *
 * Authors:
 *   Anup Patel <anup.patel@wdc.com>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#ifndef __SBI_HART_H__
#define __SBI_HART_H__

#include <sbi/sbi_types.h>

struct sbi_scratch;

int sbi_hart_init(struct sbi_scratch *scratch, u32 hartid);

void sbi_hart_pmp_dump(void);

void __attribute__((noreturn)) sbi_hart_hang(void);

void __attribute__((noreturn)) sbi_hart_boot_next(unsigned long arg0,
						  unsigned long arg1,
						  unsigned long next_addr,
						  unsigned long next_mode);

void sbi_hart_mark_available(u32 hartid);

ulong sbi_hart_available_mask(void);

void sbi_hart_unmark_available(u32 hartid);

struct sbi_scratch *sbi_hart_id_to_scratch(struct sbi_scratch *scratch,
					   u32 hartid);

void sbi_hart_wait_for_coldboot(struct sbi_scratch *scratch, u32 hartid);

void sbi_hart_wake_coldboot_harts(struct sbi_scratch *scratch);

#endif
