#pragma once
/* ------------------ */

#include <_WNF_TYPE_ID.h>
#include <_SECURITY_DESCRIPTOR.h>

//0xc bytes (sizeof)
struct _WNF_STATE_NAME_REGISTRATION
{
    ULONG MaxStateSize;                                                     //0x0
    struct _WNF_TYPE_ID* TypeId;                                            //0x4
    struct _SECURITY_DESCRIPTOR* SecurityDescriptor;                        //0x8
};
/* Used in */
// _WNF_NAME_INSTANCE

