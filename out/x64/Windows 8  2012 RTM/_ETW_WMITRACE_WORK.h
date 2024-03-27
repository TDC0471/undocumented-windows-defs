#pragma once
/* ------------------ */

#include <_GUID.h>

//0xf0 bytes (sizeof)
struct _ETW_WMITRACE_WORK
{
    ULONG LoggerId;                                                         //0x0
    ULONG SpareUlong;                                                       //0x4
    union
    {
        struct
        {
            CHAR LoggerName[65];                                            //0x8
            CHAR FileName[129];                                             //0x49
            ULONG MaximumFileSize;                                          //0xcc
            ULONG MinBuffers;                                               //0xd0
            ULONG MaxBuffers;                                               //0xd4
            ULONG BufferSize;                                               //0xd8
            ULONG Mode;                                                     //0xdc
            ULONG FlushTimer;                                               //0xe0
        };
        struct
        {
            ULONGLONG MatchAny;                                             //0x8
            ULONGLONG MatchAll;                                             //0x10
            ULONG EnableProperty;                                           //0x18
            struct _GUID Guid;                                              //0x1c
            UCHAR Level;                                                    //0x2c
        };
    };
    LONG Status;                                                            //0xe8
};
