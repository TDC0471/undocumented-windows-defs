#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _WHEA_ERROR_PACKET_FLAGS
{
    ULONG PreviousError:1;                                                  //0x0
    ULONG Reserved1:1;                                                      //0x0
    ULONG HypervisorError:1;                                                //0x0
    ULONG Simulated:1;                                                      //0x0
    ULONG PlatformPfaControl:1;                                             //0x0
    ULONG PlatformDirectedOffline:1;                                        //0x0
    ULONG Reserved2:26;                                                     //0x0
    ULONG AsULONG;                                                          //0x0
};
/* Used in */
// _WHEA_ERROR_PACKET_V2

