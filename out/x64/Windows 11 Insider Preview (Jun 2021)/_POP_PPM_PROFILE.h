#pragma once
/* ------------------ */

#include <_GUID.h>
#include <_PPM_ENGINE_SETTINGS.h>

//0x21b0 bytes (sizeof)
struct _POP_PPM_PROFILE
{
    WCHAR* Name;                                                            //0x0
    UCHAR Id;                                                               //0x8
    struct _GUID Guid;                                                      //0xc
    ULONG Flags;                                                            //0x1c
    UCHAR Priority;                                                         //0x20
    struct _PPM_ENGINE_SETTINGS Settings[2];                                //0x28
    ULONGLONG StartTime;                                                    //0x2188
    ULONGLONG Count;                                                        //0x2190
    ULONGLONG MaxDuration;                                                  //0x2198
    ULONGLONG MinDuration;                                                  //0x21a0
    ULONGLONG TotalDuration;                                                //0x21a8
};
