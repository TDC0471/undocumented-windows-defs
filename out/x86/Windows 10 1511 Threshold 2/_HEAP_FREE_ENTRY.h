#pragma once
/* ------------------ */

#include <_HEAP_ENTRY.h>
#include <_HEAP_UNPACKED_ENTRY.h>
#include <_HEAP_EXTENDED_ENTRY.h>
#include <_LIST_ENTRY.h>

//0x10 bytes (sizeof)
struct _HEAP_FREE_ENTRY
{
    union
    {
        struct _HEAP_ENTRY HeapEntry;                                       //0x0
        struct _HEAP_UNPACKED_ENTRY UnpackedEntry;                          //0x0
        struct
        {
            USHORT Size;                                                    //0x0
            UCHAR Flags;                                                    //0x2
            UCHAR SmallTagIndex;                                            //0x3
        };
        struct
        {
            ULONG SubSegmentCode;                                           //0x0
            USHORT PreviousSize;                                            //0x4
            union
            {
                UCHAR SegmentOffset;                                        //0x6
                UCHAR LFHFlags;                                             //0x6
            };
            UCHAR UnusedBytes;                                              //0x7
        };
        struct _HEAP_EXTENDED_ENTRY ExtendedEntry;                          //0x0
        struct
        {
            USHORT FunctionIndex;                                           //0x0
            USHORT ContextValue;                                            //0x2
        };
        struct
        {
            ULONG InterceptorValue;                                         //0x0
            USHORT UnusedBytesLength;                                       //0x4
            UCHAR EntryOffset;                                              //0x6
            UCHAR ExtendedBlockSignature;                                   //0x7
        };
        struct
        {
            ULONG Code1;                                                    //0x0
            union
            {
                struct
                {
                    USHORT Code2;                                           //0x4
                    UCHAR Code3;                                            //0x6
                    UCHAR Code4;                                            //0x7
                };
                ULONG Code234;                                              //0x4
            };
        };
        ULONGLONG AgregateCode;                                             //0x0
    };
    struct _LIST_ENTRY FreeList;                                            //0x8
};