/*****************************************************************************
   LIN2_common.h
   Generated By:
   Raptor 2021b_1.0.14409 (6115)
   Matlab (R2021b) 9.11

   Copyright (c) 2018 New Eagle Products, Inc.
   All rights reserved.

   Code Generated at: Mon May 16 16:32:25 2022
 *****************************************************************************/

#ifndef LIN2_COMMON_H
#define LIN2_COMMON_H
#define LIN2_LIN2_NODE                 0

void LIN2_SetSchedule(uint8_t sched_idx);
uint8_t LIN2_GetSchedule(void);
int16_t LIN2_GetStatus(uint8_t node_idx, uint32_t * tx_counts, uint32_t *
  rx_counts);

#endif
