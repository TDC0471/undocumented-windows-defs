#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _IO_COMPLETION_CONTEXT
{
    VOID* Port;                                                             //0x0
    VOID* Key;                                                              //0x8
    LONGLONG UsageCount;                                                    //0x10
};
/* Used in */
// _FILE_OBJECT

