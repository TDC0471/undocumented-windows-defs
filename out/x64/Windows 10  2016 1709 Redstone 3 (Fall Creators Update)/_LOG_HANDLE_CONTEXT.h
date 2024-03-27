#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_DIRTY_PAGE_STATISTICS.h>
#include <_DIRTY_PAGE_THRESHOLDS.h>
#include <_FILE_OBJECT.h>

//0x98 bytes (sizeof)
struct _LOG_HANDLE_CONTEXT
{
    VOID* LogHandle;                                                        //0x0
    VOID (*FlushToLsnRoutine)(VOID* arg1, union _LARGE_INTEGER arg2);       //0x8
    VOID (*QueryLogHandleInfoRoutine)(VOID* arg1, USHORT* arg2);            //0x10
    struct _DIRTY_PAGE_STATISTICS DirtyPageStatistics;                      //0x18
    struct _DIRTY_PAGE_THRESHOLDS DirtyPageThresholds;                      //0x30
    ULONG AdditionalPagesToWrite;                                           //0x68
    ULONG CcLWScanDPThreshold;                                              //0x6c
    union _LARGE_INTEGER LargestLsnForCurrentLWScan;                        //0x70
    struct _FILE_OBJECT* RelatedFileObject;                                 //0x78
    ULONGLONG LargestLsnFileObjectKey;                                      //0x80
    union _LARGE_INTEGER LastLWTimeStamp;                                   //0x88
    ULONG Flags;                                                            //0x90
};
/* Used in */
// _LOGGED_STREAM_CALLBACK_V2
// _VOLUME_CACHE_MAP

