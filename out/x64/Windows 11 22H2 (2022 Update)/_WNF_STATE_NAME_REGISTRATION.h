#pragma once
/* ------------------ */

#include <_WNF_TYPE_ID.h>
#include <_SECURITY_DESCRIPTOR.h>

//0x18 bytes (sizeof)
struct _WNF_STATE_NAME_REGISTRATION
{
    ULONG MaxStateSize;                                                     //0x0
    struct _WNF_TYPE_ID* TypeId;                                            //0x8
    struct _SECURITY_DESCRIPTOR* SecurityDescriptor;                        //0x10
};
/* Used in */
// _WNF_NAME_INSTANCE

