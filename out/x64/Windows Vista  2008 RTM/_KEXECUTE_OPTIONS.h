#pragma once
/* ------------------ */


//0x1 bytes (sizeof)
struct _KEXECUTE_OPTIONS
{
    UCHAR ExecuteDisable:1;                                                 //0x0
    UCHAR ExecuteEnable:1;                                                  //0x0
    UCHAR DisableThunkEmulation:1;                                          //0x0
    UCHAR Permanent:1;                                                      //0x0
    UCHAR ExecuteDispatchEnable:1;                                          //0x0
    UCHAR ImageDispatchEnable:1;                                            //0x0
    UCHAR Spare:2;                                                          //0x0
};
/* Used in */
// _KPROCESS

