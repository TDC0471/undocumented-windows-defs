#pragma once
/* ------------------ */

#include <_SINGLE_LIST_ENTRY.h>
#include <_MM_PAGE_ACCESS_TYPE.h>
#include <_MM_PAGE_ACCESS_INFO.h>
#include <_EPROCESS.h>

//0x48 bytes (sizeof)
struct _MM_PAGE_ACCESS_INFO_HEADER
{
    struct _SINGLE_LIST_ENTRY Link;                                         //0x0
    enum _MM_PAGE_ACCESS_TYPE Type;                                         //0x8
    union
    {
        ULONG EmptySequenceNumber;                                          //0xc
        ULONG CurrentFileIndex;                                             //0xc
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
            ULONGLONG* FileEntry;                                           //0x28
            ULONGLONG* FirstFileEntry;                                      //0x30
            struct _EPROCESS* Process;                                      //0x38
            ULONG SessionId;                                                //0x40
        };
        struct
        {
            ULONGLONG* PageFrameEntry;                                      //0x20
            ULONGLONG* LastPageFrameEntry;                                  //0x28
        };
    };
};
/* Used in */
// _MI_ACCESS_LOG_STATE
// _MI_STANDBY_STATE

