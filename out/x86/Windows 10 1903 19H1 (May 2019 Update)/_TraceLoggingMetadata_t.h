#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _TraceLoggingMetadata_t
{
    ULONG Signature;                                                        //0x0
    USHORT Size;                                                            //0x4
    UCHAR Version;                                                          //0x6
    UCHAR Flags;                                                            //0x7
    ULONGLONG Magic;                                                        //0x8
};
