#pragma once
/* ------------------ */

#include <_GUID.h>
#include <_PPM_ENGINE_SETTINGS.h>

//0x218 bytes (sizeof)
struct _POP_PPM_PROFILE
{
    WCHAR* Name;                                                            //0x0
    UCHAR Id;                                                               //0x4
    struct _GUID Guid;                                                      //0x8
    ULONG Flags;                                                            //0x18
    UCHAR Priority;                                                         //0x1c
    struct _PPM_ENGINE_SETTINGS Settings[2];                                //0x20
    ULONGLONG StartTime;                                                    //0x1f0
    ULONGLONG Count;                                                        //0x1f8
    ULONGLONG MaxDuration;                                                  //0x200
    ULONGLONG MinDuration;                                                  //0x208
    ULONGLONG TotalDuration;                                                //0x210
};
