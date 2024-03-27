#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _WNF_SUBSCRIPTION_STATE
{
    WNF_SUB_STATE_QUIESCENT = 0,
    WNF_SUB_STATE_READY_TO_DELIVER = 1,
    WNF_SUB_STATE_IN_DELIVERY = 2,
    WNF_SUB_STATE_RETRY = 3
};
/* Used in */
// _WNF_SUBSCRIPTION

