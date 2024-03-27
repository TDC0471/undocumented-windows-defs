#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MMSECURE_FLAGS
{
    ULONG ReadOnly:1;                                                       //0x0
    ULONG ReadWrite:1;                                                      //0x0
    ULONG SecNoChange:1;                                                    //0x0
    ULONG NoDelete:1;                                                       //0x0
    ULONG RequiresPteReversal:1;                                            //0x0
    ULONG ExclusiveSecure:1;                                                //0x0
    ULONG UserModeOnly:1;                                                   //0x0
    ULONG NoInherit:1;                                                      //0x0
    ULONG CheckVad:1;                                                       //0x0
    ULONG Spare:3;                                                          //0x0
};
/* Used in */
// _MMADDRESS_LIST

