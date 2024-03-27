#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_INTERRUPT_LINE_TYPE.h>
#include <_INTERRUPT_LINE_SUBTYPE.h>
#include <_INTERRUPT_LINE_STATE.h>
#include <_INTERRUPT_LINE_INTERNAL_STATE.h>
#include <_RTL_BITMAP.h>

//0x58 bytes (sizeof)
struct _INTERRUPT_LINES
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    ULONG ControllerId;                                                     //0x10
    LONG MinLine;                                                           //0x14
    LONG MaxLine;                                                           //0x18
    ULONG GsiBase;                                                          //0x1c
    enum _INTERRUPT_LINE_TYPE Type;                                         //0x20
    enum _INTERRUPT_LINE_SUBTYPE SubType;                                   //0x24
    struct _INTERRUPT_LINE_STATE* State;                                    //0x28
    struct _INTERRUPT_LINE_INTERNAL_STATE* InternalState;                   //0x30
    ULONGLONG MsiAddress;                                                   //0x38
    ULONG MsiData;                                                          //0x40
    struct _RTL_BITMAP MsiInUse;                                            //0x48
};
