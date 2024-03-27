#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_DIRTY_PAGE_STATISTICS.h>
#include <_DIRTY_PAGE_THRESHOLDS.h>
#include <_FILE_OBJECT.h>

//0x68 bytes (sizeof)
struct _LOG_HANDLE_CONTEXT
{
    VOID* LogHandle;                                                        //0x0
    VOID (*FlushToLsnRoutine)(VOID* arg1, union _LARGE_INTEGER arg2);       //0x4
    VOID (*QueryLogHandleInfoRoutine)(VOID* arg1, USHORT* arg2);            //0x8
    struct _DIRTY_PAGE_STATISTICS DirtyPageStatistics;                      //0xc
    struct _DIRTY_PAGE_THRESHOLDS DirtyPageThresholds;                      //0x18
    ULONG AdditionalPagesToWrite;                                           //0x40
    ULONG CcLWScanDPThreshold;                                              //0x44
    union _LARGE_INTEGER LargestLsnForCurrentLWScan;                        //0x48
    struct _FILE_OBJECT* RelatedFileObject;                                 //0x50
    ULONG LargestLsnFileObjectKey;                                          //0x54
    union _LARGE_INTEGER LastLWTimeStamp;                                   //0x58
    ULONG Flags;                                                            //0x60
};
/* Used in */
// _LOGGED_STREAM_CALLBACK_V2
// _VOLUME_CACHE_MAP

