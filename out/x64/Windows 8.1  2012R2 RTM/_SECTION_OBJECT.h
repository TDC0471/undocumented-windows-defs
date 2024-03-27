#pragma once
/* ------------------ */

#include <_SEGMENT_OBJECT.h>

//0x30 bytes (sizeof)
struct _SECTION_OBJECT
{
    VOID* StartingVa;                                                       //0x0
    VOID* EndingVa;                                                         //0x8
    VOID* Parent;                                                           //0x10
    VOID* LeftChild;                                                        //0x18
    VOID* RightChild;                                                       //0x20
    struct _SEGMENT_OBJECT* Segment;                                        //0x28
};
