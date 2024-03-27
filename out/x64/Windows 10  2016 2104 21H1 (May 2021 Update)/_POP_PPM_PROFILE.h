#pragma once
/* ------------------ */

#include <_GUID.h>
#include <_PPM_ENGINE_SETTINGS.h>

//0x15b0 bytes (sizeof)
struct _POP_PPM_PROFILE
{
    WCHAR* Name;                                                            //0x0
    UCHAR Id;                                                               //0x8
    struct _GUID Guid;                                                      //0xc
    ULONG Flags;                                                            //0x1c
    UCHAR Priority;                                                         //0x20
    struct _PPM_ENGINE_SETTINGS Settings[2];                                //0x28
    ULONGLONG StartTime;                                                    //0x1588
    ULONGLONG Count;                                                        //0x1590
    ULONGLONG MaxDuration;                                                  //0x1598
    ULONGLONG MinDuration;                                                  //0x15a0
    ULONGLONG TotalDuration;                                                //0x15a8
};
