#pragma once
/* ------------------ */


//0x70 bytes (sizeof)
struct _POP_PER_PROCESSOR_CONTEXT
{
    UCHAR* UncompressedData;                                                //0x0
    VOID* MappingVa;                                                        //0x4
    VOID* XpressEncodeWorkspace;                                            //0x8
    UCHAR* CompressedDataBuffer;                                            //0xc
    ULONGLONG CopyTicks;                                                    //0x10
    ULONGLONG CompressTicks;                                                //0x18
    ULONGLONG BytesCopied;                                                  //0x20
    ULONGLONG PagesProcessed;                                               //0x28
    ULONGLONG DecompressTicks;                                              //0x30
    ULONGLONG ResumeCopyTicks;                                              //0x38
    ULONGLONG SharedBufferTicks;                                            //0x40
    ULONGLONG DecompressTicksByMethod[2];                                   //0x48
    ULONGLONG DecompressSizeByMethod[2];                                    //0x58
    ULONG CompressCount;                                                    //0x68
    ULONG HuffCompressCount;                                                //0x6c
};
/* Used in */
// _POP_HIBER_CONTEXT

