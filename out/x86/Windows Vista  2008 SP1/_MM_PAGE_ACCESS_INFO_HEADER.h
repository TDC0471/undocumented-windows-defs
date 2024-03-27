#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>
#include <_MM_PAGE_ACCESS_TYPE.h>
#include <_MM_PAGE_ACCESS_INFO.h>
#include <_EPROCESS.h>

//0x38 bytes (sizeof)
struct _MM_PAGE_ACCESS_INFO_HEADER
{
    struct _SINGLE_LIST_ENTRY Link;                                         //0x0
    enum _MM_PAGE_ACCESS_TYPE Type;                                         //0x4
    union
    {
        ULONG EmptySequenceNumber;                                          //0x8
        ULONG CurrentFileIndex;                                             //0x8
    };
    ULONGLONG CreateTime;                                                   //0x10
    union
    {
        ULONGLONG EmptyTime;                                                //0x18
        struct _MM_PAGE_ACCESS_INFO* TempEntry;                             //0x18
    };
    union
    {
        struct
        {
            struct _MM_PAGE_ACCESS_INFO* PageEntry;                         //0x20
            ULONG* FileEntry;                                               //0x24
            ULONG* FirstFileEntry;                                          //0x28
            struct _EPROCESS* Process;                                      //0x2c
            ULONG SessionId;                                                //0x30
        };
        struct
        {
            ULONG* PageFrameEntry;                                          //0x20
            ULONG* LastPageFrameEntry;                                      //0x24
        };
    };
};
