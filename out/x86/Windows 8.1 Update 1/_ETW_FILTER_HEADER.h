#pragma once
/* ------------------ */

#include <_ETW_FILTER_PID.h>
#include <_ETW_FILTER_STRING_TOKEN.h>
#include <_ETW_PERFECT_HASH_FUNCTION.h>
#include <_ETW_PAYLOAD_FILTER.h>
#include <_EVENT_FILTER_HEADER.h>

//0x24 bytes (sizeof)
struct _ETW_FILTER_HEADER
{
    LONG FilterFlags;                                                       //0x0
    struct _ETW_FILTER_PID* PidFilter;                                      //0x4
    struct _ETW_FILTER_STRING_TOKEN* ExeFilter;                             //0x8
    struct _ETW_FILTER_STRING_TOKEN* PkgIdFilter;                           //0xc
    struct _ETW_FILTER_STRING_TOKEN* PkgAppIdFilter;                        //0x10
    struct _ETW_PERFECT_HASH_FUNCTION* StackWalkFilter;                     //0x14
    struct _ETW_PERFECT_HASH_FUNCTION* EventIdFilter;                       //0x18
    struct _ETW_PAYLOAD_FILTER* PayloadFilter;                              //0x1c
    struct _EVENT_FILTER_HEADER* ProviderSideFilter;                        //0x20
};
/* Used in */
// _ETW_GUID_ENTRY

