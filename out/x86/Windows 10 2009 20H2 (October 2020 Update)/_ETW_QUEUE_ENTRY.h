#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_ETWP_NOTIFICATION_HEADER.h>
#include <_ETW_REG_ENTRY.h>

//0x20 bytes (sizeof)
struct _ETW_QUEUE_ENTRY
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    struct _ETWP_NOTIFICATION_HEADER* DataBlock;                            //0x8
    struct _ETW_REG_ENTRY* RegEntry;                                        //0xc
    struct _ETW_REG_ENTRY* ReplyObject;                                     //0x10
    VOID* WakeReference;                                                    //0x14
    USHORT RegIndex;                                                        //0x18
    USHORT ReplyIndex;                                                      //0x1a
    ULONG Flags;                                                            //0x1c
};
/* Used in */
// _ETW_REG_ENTRY

