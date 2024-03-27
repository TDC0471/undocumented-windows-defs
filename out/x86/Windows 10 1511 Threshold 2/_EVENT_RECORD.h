#pragma once
/* ------------------ */

#include <_EVENT_HEADER.h>
#include <_ETW_BUFFER_CONTEXT.h>
#include <_EVENT_HEADER_EXTENDED_DATA_ITEM.h>

//0x68 bytes (sizeof)
struct _EVENT_RECORD
{
    struct _EVENT_HEADER EventHeader;                                       //0x0
    struct _ETW_BUFFER_CONTEXT BufferContext;                               //0x50
    USHORT ExtendedDataCount;                                               //0x54
    USHORT UserDataLength;                                                  //0x56
    struct _EVENT_HEADER_EXTENDED_DATA_ITEM* ExtendedData;                  //0x58
    VOID* UserData;                                                         //0x5c
    VOID* UserContext;                                                      //0x60
};
