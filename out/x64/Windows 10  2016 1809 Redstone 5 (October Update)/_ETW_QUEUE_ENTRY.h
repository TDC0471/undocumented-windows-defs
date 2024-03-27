#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_ETWP_NOTIFICATION_HEADER.h>
#include <_ETW_REG_ENTRY.h>

//0x38 bytes (sizeof)
struct _ETW_QUEUE_ENTRY
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    struct _ETWP_NOTIFICATION_HEADER* DataBlock;                            //0x10
    struct _ETW_REG_ENTRY* RegEntry;                                        //0x18
    struct _ETW_REG_ENTRY* ReplyObject;                                     //0x20
    VOID* WakeReference;                                                    //0x28
    USHORT RegIndex;                                                        //0x30
    USHORT ReplyIndex;                                                      //0x32
    ULONG Flags;                                                            //0x34
};
/* Used in */
// _ETW_REG_ENTRY

