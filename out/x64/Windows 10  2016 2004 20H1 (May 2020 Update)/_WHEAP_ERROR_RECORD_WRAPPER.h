#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_WHEAP_ERROR_RECORD_WRAPPER_FLAGS.h>
#include <_WHEAP_ERROR_SOURCE.h>
#include <_WHEA_ERROR_RECORD.h>

//0xf0 bytes (sizeof)
struct _WHEAP_ERROR_RECORD_WRAPPER
{
    struct _LIST_ENTRY WorkEntry;                                           //0x0
    ULONG Length;                                                           //0x10
    ULONG ProcessorNumber;                                                  //0x14
    union _WHEAP_ERROR_RECORD_WRAPPER_FLAGS Flags;                          //0x18
    volatile LONG InUse;                                                    //0x1c
    struct _WHEAP_ERROR_SOURCE* ErrorSource;                                //0x20
    struct _WHEA_ERROR_RECORD ErrorRecord;                                  //0x28
};
/* Used in */
// _WHEAP_ERROR_SOURCE

