#pragma once
/* ------------------ */

#include <_SID_AND_ATTRIBUTES.h>
#include <_LUID_AND_ATTRIBUTES.h>

//0x38 bytes (sizeof)
struct _PS_JOB_TOKEN_FILTER
{
    ULONG CapturedSidCount;                                                 //0x0
    struct _SID_AND_ATTRIBUTES* CapturedSids;                               //0x8
    ULONG CapturedSidsLength;                                               //0x10
    ULONG CapturedGroupCount;                                               //0x14
    struct _SID_AND_ATTRIBUTES* CapturedGroups;                             //0x18
    ULONG CapturedGroupsLength;                                             //0x20
    ULONG CapturedPrivilegeCount;                                           //0x24
    struct _LUID_AND_ATTRIBUTES* CapturedPrivileges;                        //0x28
    ULONG CapturedPrivilegesLength;                                         //0x30
};
/* Used in */
// _EJOB

