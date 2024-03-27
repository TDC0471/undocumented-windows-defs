#pragma once
/* ------------------ */

#include <_HEAP_VS_CHUNK_HEADER.h>
#include <_RTL_BALANCED_NODE.h>

//0x20 bytes (sizeof)
struct _HEAP_VS_CHUNK_FREE_HEADER
{
    union
    {
        struct _HEAP_VS_CHUNK_HEADER Header;                                //0x0
        struct
        {
            ULONGLONG OverlapsHeader;                                       //0x0
            struct _RTL_BALANCED_NODE Node;                                 //0x8
        };
    };
};
