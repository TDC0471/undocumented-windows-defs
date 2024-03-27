#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_WHEA_ERROR_SOURCE_TYPE.h>
#include <_WHEAP_ERROR_RECORD_WRAPPER.h>
#include <_LARGE_INTEGER.h>
#include <_WHEA_ERROR_SOURCE_DESCRIPTOR.h>

//0x420 bytes (sizeof)
struct _WHEAP_ERROR_SOURCE
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    ULONG FailedAllocations;                                                //0x8
    ULONG PlatformErrorSourceId;                                            //0xc
    LONG ErrorCount;                                                        //0x10
    ULONG RecordCount;                                                      //0x14
    ULONG RecordLength;                                                     //0x18
    ULONG PoolTag;                                                          //0x1c
    enum _WHEA_ERROR_SOURCE_TYPE Type;                                      //0x20
    struct _WHEAP_ERROR_RECORD_WRAPPER* Records;                            //0x24
    VOID* Context;                                                          //0x28
    ULONG SectionCount;                                                     //0x2c
    ULONG SectionLength;                                                    //0x30
    union _LARGE_INTEGER TickCountAtLastError;                              //0x38
    ULONG AccumulatedErrors;                                                //0x40
    ULONG TotalErrors;                                                      //0x44
    UCHAR Deferred;                                                         //0x48
    volatile LONG Busy;                                                     //0x4c
    struct _WHEA_ERROR_SOURCE_DESCRIPTOR Descriptor;                        //0x50
};
/* Used in */
// _WHEAP_ERROR_RECORD_WRAPPER

