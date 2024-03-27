#pragma once
/* ------------------ */

#include <_SEGMENT_OBJECT.h>

//0x18 bytes (sizeof)
struct _SECTION_OBJECT
{
    VOID* StartingVa;                                                       //0x0
    VOID* EndingVa;                                                         //0x4
    VOID* Parent;                                                           //0x8
    VOID* LeftChild;                                                        //0xc
    VOID* RightChild;                                                       //0x10
    struct _SEGMENT_OBJECT* Segment;                                        //0x14
};
