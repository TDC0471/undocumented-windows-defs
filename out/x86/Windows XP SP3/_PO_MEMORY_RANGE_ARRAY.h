#pragma once
/* ------------------ */

#include <_PO_MEMORY_RANGE_ARRAY.h>

//0x10 bytes (sizeof)
struct _PO_MEMORY_RANGE_ARRAY
{
    union
    {
        struct
        {
            ULONG PageNo;                                                   //0x0
            ULONG StartPage;                                                //0x4
            ULONG EndPage;                                                  //0x8
            ULONG CheckSum;                                                 //0xc
        } Range;                                                            //0x0
        struct
        {
            struct _PO_MEMORY_RANGE_ARRAY* Next;                            //0x0
            ULONG NextTable;                                                //0x4
            ULONG CheckSum;                                                 //0x8
            ULONG EntryCount;                                               //0xc
        } Link;                                                             //0x0
    };
};
/* Used in */
// _POP_HIBER_CONTEXT
// _PO_MEMORY_RANGE_ARRAY

