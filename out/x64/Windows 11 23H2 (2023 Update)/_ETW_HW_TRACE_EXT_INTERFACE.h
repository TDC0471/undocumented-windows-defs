#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _ETW_HW_TRACE_EXT_INTERFACE
{
    LONG (*StartProcessorTraceOnEachCore)(ULONGLONG arg1, VOID** arg2);     //0x0
    LONG (*StopProcessorTraceOnEachCore)(VOID* arg1);                       //0x8
    LONG (*LogProcessorTraceOnCurrentCore)(VOID* arg1, VOID* arg2);         //0x10
};
/* Used in */
// _ETW_IPT_SUPPORT

