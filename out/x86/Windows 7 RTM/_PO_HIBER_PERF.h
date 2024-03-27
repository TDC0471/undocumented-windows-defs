#pragma once
/* ------------------ */


//0x58 bytes (sizeof)
struct _PO_HIBER_PERF
{
    ULONGLONG IoTicks;                                                      //0x0
    ULONGLONG InitTicks;                                                    //0x8
    ULONGLONG CopyTicks;                                                    //0x10
    ULONGLONG ElapsedTicks;                                                 //0x18
    ULONGLONG CompressTicks;                                                //0x20
    ULONGLONG ResumeAppTime;                                                //0x28
    ULONGLONG HiberFileResumeTime;                                          //0x30
    ULONGLONG BytesCopied;                                                  //0x38
    ULONGLONG PagesProcessed;                                               //0x40
    ULONG PagesWritten;                                                     //0x48
    ULONG DumpCount;                                                        //0x4c
    ULONG FileRuns;                                                         //0x50
};
/* Used in */
// PO_MEMORY_IMAGE

