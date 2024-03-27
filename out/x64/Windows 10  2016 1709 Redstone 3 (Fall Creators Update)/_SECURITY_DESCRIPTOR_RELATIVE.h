#pragma once
/* ------------------ */


//0x14 bytes (sizeof)
struct _SECURITY_DESCRIPTOR_RELATIVE
{
    UCHAR Revision;                                                         //0x0
    UCHAR Sbz1;                                                             //0x1
    USHORT Control;                                                         //0x2
    ULONG Owner;                                                            //0x4
    ULONG Group;                                                            //0x8
    ULONG Sacl;                                                             //0xc
    ULONG Dacl;                                                             //0x10
};
/* Used in */
// _CM_KEY_SECURITY
// _CM_KEY_SECURITY_CACHE

