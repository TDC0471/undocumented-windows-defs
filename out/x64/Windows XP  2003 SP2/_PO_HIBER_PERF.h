#pragma once
/* ------------------ */


//0x48 bytes (sizeof)
struct _PO_HIBER_PERF
{
    ULONGLONG IoTicks;                                                      //0x0
    ULONGLONG InitTicks;                                                    //0x8
    ULONGLONG CopyTicks;                                                    //0x10
    ULONGLONG StartCount;                                                   //0x18
    ULONG ElapsedTime;                                                      //0x20
    ULONG IoTime;                                                           //0x24
    ULONG CopyTime;                                                         //0x28
    ULONG InitTime;                                                         //0x2c
    ULONG PagesWritten;                                                     //0x30
    ULONG PagesProcessed;                                                   //0x34
    ULONG BytesCopied;                                                      //0x38
    ULONG DumpCount;                                                        //0x3c
    ULONG FileRuns;                                                         //0x40
};
/* Used in */
// PO_MEMORY_IMAGE
// _POP_HIBER_CONTEXT

