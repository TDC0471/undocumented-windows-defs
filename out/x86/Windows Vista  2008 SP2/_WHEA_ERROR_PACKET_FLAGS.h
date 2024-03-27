#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _WHEA_ERROR_PACKET_FLAGS
{
    ULONG PreviousError:1;                                                  //0x0
    ULONG CpuValid:1;                                                       //0x0
    ULONG HypervisorError:1;                                                //0x0
    ULONG Simulated:1;                                                      //0x0
    ULONG Reserved:28;                                                      //0x0
    ULONG AsULONG;                                                          //0x0
};
/* Used in */
// _WHEA_ERROR_PACKET

