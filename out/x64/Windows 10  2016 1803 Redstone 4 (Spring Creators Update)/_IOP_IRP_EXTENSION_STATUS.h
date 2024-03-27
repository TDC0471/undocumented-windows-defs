#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _IOP_IRP_EXTENSION_STATUS
{
    ULONG Flags;                                                            //0x0
    ULONG ActivityId;                                                       //0x4
    ULONG IoTracking;                                                       //0x8
};
