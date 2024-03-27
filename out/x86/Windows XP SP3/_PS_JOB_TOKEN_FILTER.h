#pragma once
/* ------------------ */

#include <_SID_AND_ATTRIBUTES.h>
#include <_LUID_AND_ATTRIBUTES.h>

//0x24 bytes (sizeof)
struct _PS_JOB_TOKEN_FILTER
{
    ULONG CapturedSidCount;                                                 //0x0
    struct _SID_AND_ATTRIBUTES* CapturedSids;                               //0x4
    ULONG CapturedSidsLength;                                               //0x8
    ULONG CapturedGroupCount;                                               //0xc
    struct _SID_AND_ATTRIBUTES* CapturedGroups;                             //0x10
    ULONG CapturedGroupsLength;                                             //0x14
    ULONG CapturedPrivilegeCount;                                           //0x18
    struct _LUID_AND_ATTRIBUTES* CapturedPrivileges;                        //0x1c
    ULONG CapturedPrivilegesLength;                                         //0x20
};
/* Used in */
// _EJOB

