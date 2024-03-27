#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MI_SYSTEM_REGION_ANCHOR
{
    ULONG ReferenceCount:31;                                                //0x0
    ULONG BeingDeleted:1;                                                   //0x0
};
/* Used in */
// _MI_SYSTEM_REGION_REFERENCE

