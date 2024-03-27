#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>

//0x38 bytes (sizeof)
struct _RTLP_RANGE_LIST_ENTRY
{
    ULONGLONG Start;                                                        //0x0
    ULONGLONG End;                                                          //0x8
    union
    {
        struct
        {
            VOID* UserData;                                                 //0x10
            VOID* Owner;                                                    //0x18
        } Allocated;                                                        //0x10
        struct
        {
            struct _LIST_ENTRY ListHead;                                    //0x10
        } Merged;                                                           //0x10
    };
    UCHAR Attributes;                                                       //0x20
    UCHAR PublicFlags;                                                      //0x21
    USHORT PrivateFlags;                                                    //0x22
    struct _LIST_ENTRY ListEntry;                                           //0x28
};
