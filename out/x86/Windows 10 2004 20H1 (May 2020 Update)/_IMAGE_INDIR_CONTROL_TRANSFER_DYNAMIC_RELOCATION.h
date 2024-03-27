#pragma once
/* ------------------ */


//0x2 bytes (sizeof)
struct _IMAGE_INDIR_CONTROL_TRANSFER_DYNAMIC_RELOCATION
{
    USHORT PageRelativeOffset:12;                                           //0x0
    USHORT IndirectCall:1;                                                  //0x0
    USHORT RexWPrefix:1;                                                    //0x0
    USHORT CfgCheck:1;                                                      //0x0
    USHORT Reserved:1;                                                      //0x0
};
/* Used in */
// _RTL_RETPOLINE_RELOCATION_INDEX

