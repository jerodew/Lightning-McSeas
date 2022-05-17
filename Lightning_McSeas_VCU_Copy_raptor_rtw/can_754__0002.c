/*****************************************************************************
   can_754__0002.c
   Generated By:
   Raptor 2021b_1.0.14409 (6115)
   Matlab (R2021b) 9.11

   Copyright (c) 2018 New Eagle Products, Inc.
   All rights reserved.

   Code Generated at: Mon May 16 16:32:25 2022
 *****************************************************************************/

/* CAN interface: CAN2 */
/*   HW Resource: CAN2 */
#include "Lightning_McSeas_VCU_Copy.h"
#include "can_754__0002.h"
#include "sdk_can.h"
#include "can.h"
#define MAX_AGE                        65535

int started_754__0002 = 0;
const uint32_T CAN_CAN2_baud_rate = 250000;
uint32_T CAN_CAN2_get_baud_rate(void)
{
  return(CAN_CAN2_baud_rate);
}

/* Message Receive data storage */

/* Transmit CAN Object Declarations */

/* Functions */
void pre_start_CAN_754__0002(void)
{
}                                      // end pre_start_CAN_754__0002

void CAN_ReceiveDispatch_754__0002(boolean extended, uint32_t id, uint8_t * data,
  uint8_t data_len)
{
}

void post_start_CAN_754__0002(void)
{
  if (started_754__0002) {
    return;
  }

  started_754__0002 = 1;
  start_CAN(CAN2, CAN_CAN2_baud_rate );
  can_register_rx_callback( CAN2, CAN_ReceiveDispatch_754__0002 );
}                                      // end post_start_CAN_754__0002
