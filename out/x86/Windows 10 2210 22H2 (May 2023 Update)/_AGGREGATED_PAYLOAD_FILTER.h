#pragma once
/* ------------------ */

#include <_GUID.h>
#include <_EVENT_PAYLOAD_PREDICATE.h>

//0x50 bytes (sizeof)
struct _AGGREGATED_PAYLOAD_FILTER
{
    USHORT MagicValue:12;                                                   //0x0
    USHORT DescriptorVersion:4;                                             //0x0
    USHORT Size;                                                            //0x2
    USHORT PredicateCount;                                                  //0x4
    USHORT Reserved;                                                        //0x6
    ULONGLONG HashedEventIdBitmap;                                          //0x8
    struct _GUID ProviderGuid;                                              //0x10
    USHORT EachEventTableOffset;                                            //0x20
    USHORT EachEventTableLength;                                            //0x22
    USHORT PayloadDecoderTableOffset;                                       //0x24
    USHORT PayloadDecoderTableLength;                                       //0x26
    USHORT EventFilterTableOffset;                                          //0x28
    USHORT EventFilterTableLength;                                          //0x2a
    USHORT UNICODEStringTableOffset;                                        //0x2c
    USHORT UNICODEStringTableLength;                                        //0x2e
    USHORT ANSIStringTableOffset;                                           //0x30
    USHORT ANSIStringTableLength;                                           //0x32
    struct _EVENT_PAYLOAD_PREDICATE PredicateTable[1];                      //0x38
};
/* Used in */
// _ETW_PAYLOAD_FILTER

