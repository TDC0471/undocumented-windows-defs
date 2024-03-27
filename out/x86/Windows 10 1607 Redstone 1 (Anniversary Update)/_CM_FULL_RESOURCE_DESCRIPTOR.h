#pragma once
/* ------------------ */

#include <_INTERFACE_TYPE.h>
#include <_CM_PARTIAL_RESOURCE_LIST.h>

//0x20 bytes (sizeof)
struct _CM_FULL_RESOURCE_DESCRIPTOR
{
    enum _INTERFACE_TYPE InterfaceType;                                     //0x0
    ULONG BusNumber;                                                        //0x4
    struct _CM_PARTIAL_RESOURCE_LIST PartialResourceList;                   //0x8
};
/* Used in */
// _CM_RESOURCE_LIST

