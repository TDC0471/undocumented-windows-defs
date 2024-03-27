#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _DBGKD_LOAD_SYMBOLS32
{
    ULONG PathNameLength;                                                   //0x0
    ULONG BaseOfDll;                                                        //0x4
    ULONG ProcessId;                                                        //0x8
    ULONG CheckSum;                                                         //0xc
    ULONG SizeOfImage;                                                      //0x10
    UCHAR UnloadSymbols;                                                    //0x14
};
