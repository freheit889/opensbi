/*
 * Copyright (c) 2018 Western Digital Corporation or its affiliates.
 *
 * Authors:
 *   Anup Patel <anup.patel@wdc.com>
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#ifndef __SBI_INIT_H__
#define __SBI_INIT_H__

#include <sbi/sbi_types.h>

struct sbi_scratch;

void __attribute__((noreturn)) sbi_init(struct sbi_scratch *scratch);

#endif
