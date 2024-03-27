#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x20 bytes (sizeof)
struct _HEAP_FREE_ENTRY
{
    union
    {
        struct
        {
            VOID* PreviousBlockPrivateData;                                 //0x0
            union
            {
                struct
                {
                    USHORT Size;                                            //0x8
                    UCHAR Flags;                                            //0xa
                    UCHAR SmallTagIndex;                                    //0xb
                    USHORT PreviousSize;                                    //0xc
                    union
                    {
                        UCHAR SegmentOffset;                                //0xe
                        UCHAR LFHFlags;                                     //0xe
                    };
                    UCHAR UnusedBytes;                                      //0xf
                };
                ULONGLONG CompactHeader;                                    //0x8
            };
        };
        struct
        {
            VOID* Reserved;                                                 //0x0
            union
            {
                struct
                {
                    USHORT FunctionIndex;                                   //0x8
                    USHORT ContextValue;                                    //0xa
                };
                ULONG InterceptorValue;                                     //0x8
            };
            USHORT UnusedBytesLength;                                       //0xc
            UCHAR EntryOffset;                                              //0xe
            UCHAR ExtendedBlockSignature;                                   //0xf
        };
        struct
        {
            VOID* ReservedForAlignment;                                     //0x0
            union
            {
                struct
                {
                    ULONG Code1;                                            //0x8
                    union
                    {
                        struct
                        {
                            USHORT Code2;                                   //0xc
                            UCHAR Code3;                                    //0xe
                            UCHAR Code4;                                    //0xf
                        };
                        ULONG Code234;                                      //0xc
                    };
                };
                ULONGLONG AgregateCode;                                     //0x8
            };
        };
    };
    struct _LIST_ENTRY FreeList;                                            //0x10
};
