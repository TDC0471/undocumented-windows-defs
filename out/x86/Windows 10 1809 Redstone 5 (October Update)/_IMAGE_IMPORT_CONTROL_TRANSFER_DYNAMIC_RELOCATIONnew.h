#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _IMAGE_IMPORT_CONTROL_TRANSFER_DYNAMIC_RELOCATION
{
    ULONG PageRelativeOffset:12;                                            //0x0
    ULONG IndirectCall:1;                                                   //0x0
    ULONG IATIndex:19;                                                      //0x0
};
/* Used in */
// _RTL_RETPOLINE_RELOCATION_INDEX

