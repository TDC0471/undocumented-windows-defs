#pragma once
/* ------------------ */

#include <_CM_FULL_RESOURCE_DESCRIPTOR.h>

//0x28 bytes (sizeof)
struct _CM_RESOURCE_LIST
{
    ULONG Count;                                                            //0x0
    struct _CM_FULL_RESOURCE_DESCRIPTOR List[1];                            //0x4
};
/* Used in */
// HAL_PRIVATE_DISPATCH
// _ARBITER_INSTANCE
// _BUS_HANDLER
// _DEVICE_NODE
// _IO_STACK_LOCATION
// _PNP_RESOURCE_REQUEST

