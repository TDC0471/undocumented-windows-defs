#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _XPF_MCE_FLAGS
{
    ULONG MCG_CapabilityRW:1;                                               //0x0
    ULONG MCG_GlobalControlRW:1;                                            //0x0
    ULONG Reserved:30;                                                      //0x0
    ULONG AsULONG;                                                          //0x0
};
/* Used in */
// _WHEA_XPF_MCE_DESCRIPTOR

