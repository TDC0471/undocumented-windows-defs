#pragma once
/* ------------------ */

#include <_WHEA_EVENT_LOG_ENTRY_TYPE.h>
#include <_WHEA_EVENT_LOG_ENTRY_ID.h>
#include <_WHEA_EVENT_LOG_ENTRY_FLAGS.h>

//0x20 bytes (sizeof)
struct _WHEA_EVENT_LOG_ENTRY_HEADER
{
    ULONG Signature;                                                        //0x0
    ULONG Version;                                                          //0x4
    ULONG Length;                                                           //0x8
    enum _WHEA_EVENT_LOG_ENTRY_TYPE Type;                                   //0xc
    ULONG OwnerTag;                                                         //0x10
    enum _WHEA_EVENT_LOG_ENTRY_ID Id;                                       //0x14
    union _WHEA_EVENT_LOG_ENTRY_FLAGS Flags;                                //0x18
    ULONG PayloadLength;                                                    //0x1c
};
/* Used in */
// _WHEA_EVENT_LOG_ENTRY

