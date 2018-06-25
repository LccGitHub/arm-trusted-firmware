/*
 * Copyright (c) 2015-2018, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef __DENVER_H__
#define __DENVER_H__

/* MIDR values for Denver */
#define DENVER_MIDR_PN0			U(0x4E0F0000)
#define DENVER_MIDR_PN1			U(0x4E0F0010)
#define DENVER_MIDR_PN2			U(0x4E0F0020)
#define DENVER_MIDR_PN3			U(0x4E0F0030)
#define DENVER_MIDR_PN4			U(0x4E0F0040)

/* Implementer code in the MIDR register */
#define DENVER_IMPL			U(0x4E)

/* CPU state ids - implementation defined */
#define DENVER_CPU_STATE_POWER_DOWN	U(0x3)

/* Core power management states */
#define DENVER_CPU_PMSTATE_C1		U(0x1)
#define DENVER_CPU_PMSTATE_C6		U(0x6)
#define DENVER_CPU_PMSTATE_C7		U(0x7)
#define DENVER_CPU_PMSTATE_MASK		U(0xF)

#ifndef __ASSEMBLY__

/* Disable Dynamic Code Optimisation */
void denver_disable_dco(void);

#endif

#endif /* __DENVER_H__ */
