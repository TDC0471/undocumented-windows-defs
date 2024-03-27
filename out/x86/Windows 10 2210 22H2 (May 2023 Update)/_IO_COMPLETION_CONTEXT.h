#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _IO_COMPLETION_CONTEXT
{
    VOID* Port;                                                             //0x0
    VOID* Key;                                                              //0x4
    LONG UsageCount;                                                        //0x8
};
/* Used in */
// _FILE_OBJECT

