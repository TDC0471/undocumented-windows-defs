#pragma once
/* ------------------ */

#include <_UNICODE_STRING.h>
#include <_PO_FX_PERF_STATE_UNIT.h>
#include <_PO_FX_PERF_STATE_TYPE.h>
#include <_PO_FX_PERF_STATE.h>

//0x30 bytes (sizeof)
struct _PO_FX_COMPONENT_PERF_SET
{
    struct _UNICODE_STRING Name;                                            //0x0
    ULONGLONG Flags;                                                        //0x10
    enum _PO_FX_PERF_STATE_UNIT Unit;                                       //0x18
    enum _PO_FX_PERF_STATE_TYPE Type;                                       //0x1c
    union
    {
        struct
        {
            ULONG Count;                                                    //0x20
            struct _PO_FX_PERF_STATE* States;                               //0x28
        } Discrete;                                                         //0x20
        struct
        {
            ULONGLONG Minimum;                                              //0x20
            ULONGLONG Maximum;                                              //0x28
        } Range;                                                            //0x20
    };
};
/* Used in */
// _POP_FX_PERF_SET

