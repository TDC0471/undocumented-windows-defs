#pragma once
/* ------------------ */


//0x80 bytes (sizeof)
struct _POP_PER_PROCESSOR_CONTEXT
{
    UCHAR* UncompressedData;                                                //0x0
    VOID* MappingVa;                                                        //0x8
    VOID* XpressEncodeWorkspace;                                            //0x10
    UCHAR* CompressedDataBuffer;                                            //0x18
    ULONGLONG CopyTicks;                                                    //0x20
    ULONGLONG CompressTicks;                                                //0x28
    ULONGLONG BytesCopied;                                                  //0x30
    ULONGLONG PagesProcessed;                                               //0x38
    ULONGLONG DecompressTicks;                                              //0x40
    ULONGLONG ResumeCopyTicks;                                              //0x48
    ULONGLONG SharedBufferTicks;                                            //0x50
    ULONGLONG DecompressTicksByMethod[2];                                   //0x58
    ULONGLONG DecompressSizeByMethod[2];                                    //0x68
    ULONG CompressCount;                                                    //0x78
    ULONG HuffCompressCount;                                                //0x7c
};
/* Used in */
// _POP_HIBER_CONTEXT

