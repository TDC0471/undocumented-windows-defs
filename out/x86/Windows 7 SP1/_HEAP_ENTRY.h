#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _HEAP_ENTRY
{
    union
    {
        struct
        {
            USHORT Size;                                                    //0x0
            UCHAR Flags;                                                    //0x2
            UCHAR SmallTagIndex;                                            //0x3
        };
        struct
        {
            VOID* volatile SubSegmentCode;                                  //0x0
            USHORT PreviousSize;                                            //0x4
            union
            {
                UCHAR SegmentOffset;                                        //0x6
                UCHAR LFHFlags;                                             //0x6
            };
            UCHAR UnusedBytes;                                              //0x7
        };
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
            USHORT Code2;                                                   //0x4
            UCHAR Code3;                                                    //0x6
            UCHAR Code4;                                                    //0x7
        };
        ULONGLONG AgregateCode;                                             //0x0
    };
};
/* Used in */
// _HEAP
// _HEAP_SEGMENT
// _HEAP_VIRTUAL_ALLOC_ENTRY

