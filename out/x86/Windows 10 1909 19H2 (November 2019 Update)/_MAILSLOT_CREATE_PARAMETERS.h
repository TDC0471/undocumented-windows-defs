#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x18 bytes (sizeof)
struct _MAILSLOT_CREATE_PARAMETERS
{
    ULONG MailslotQuota;                                                    //0x0
    ULONG MaximumMessageSize;                                               //0x4
    union _LARGE_INTEGER ReadTimeout;                                       //0x8
    UCHAR TimeoutSpecified;                                                 //0x10
};
/* Used in */
// _IO_STACK_LOCATION

