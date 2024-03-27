#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_WHEA_ERROR_SOURCE_TYPE.h>
#include <_WHEAP_ERROR_RECORD_WRAPPER.h>
#include <_LARGE_INTEGER.h>
#include <_WHEA_ERROR_SOURCE_DESCRIPTOR.h>

//0x430 bytes (sizeof)
struct _WHEAP_ERROR_SOURCE
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    ULONG FailedAllocations;                                                //0x10
    ULONG PlatformErrorSourceId;                                            //0x14
    LONG ErrorCount;                                                        //0x18
    ULONG RecordCount;                                                      //0x1c
    ULONG RecordLength;                                                     //0x20
    ULONG PoolTag;                                                          //0x24
    enum _WHEA_ERROR_SOURCE_TYPE Type;                                      //0x28
    struct _WHEAP_ERROR_RECORD_WRAPPER* Records;                            //0x30
    VOID* Context;                                                          //0x38
    ULONG SectionCount;                                                     //0x40
    ULONG SectionLength;                                                    //0x44
    union _LARGE_INTEGER TickCountAtLastError;                              //0x48
    ULONG AccumulatedErrors;                                                //0x50
    ULONG TotalErrors;                                                      //0x54
    UCHAR Deferred;                                                         //0x58
    volatile LONG Busy;                                                     //0x5c
    struct _WHEA_ERROR_SOURCE_DESCRIPTOR Descriptor;                        //0x60
};
/* Used in */
// _WHEAP_ERROR_RECORD_WRAPPER

