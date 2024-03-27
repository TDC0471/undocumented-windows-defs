#pragma once
/* ------------------ */

#include <_SECURITY_QUALITY_OF_SERVICE.h>
#include <_ACCESS_STATE.h>

//0x18 bytes (sizeof)
struct _IO_SECURITY_CONTEXT
{
    struct _SECURITY_QUALITY_OF_SERVICE* SecurityQos;                       //0x0
    struct _ACCESS_STATE* AccessState;                                      //0x8
    ULONG DesiredAccess;                                                    //0x10
    ULONG FullCreateOptions;                                                //0x14
};
/* Used in */
// _IO_STACK_LOCATION

