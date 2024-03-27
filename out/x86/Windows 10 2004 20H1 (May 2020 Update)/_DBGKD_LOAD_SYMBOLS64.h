#pragma once
/* ------------------ */


//0x28 bytes (sizeof)
struct _DBGKD_LOAD_SYMBOLS64
{
    ULONG PathNameLength;                                                   //0x0
    ULONGLONG BaseOfDll;                                                    //0x8
    ULONGLONG ProcessId;                                                    //0x10
    ULONG CheckSum;                                                         //0x18
    ULONG SizeOfImage;                                                      //0x1c
    UCHAR UnloadSymbols;                                                    //0x20
};
