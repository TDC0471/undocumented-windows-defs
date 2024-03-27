#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _WHEA_NMI_ERROR_FLAGS
{
    ULONG HypervisorError:1;                                                //0x0
    ULONG Reserved:31;                                                      //0x0
    ULONG AsULONG;                                                          //0x0
};
/* Used in */
// _WHEA_NMI_ERROR

