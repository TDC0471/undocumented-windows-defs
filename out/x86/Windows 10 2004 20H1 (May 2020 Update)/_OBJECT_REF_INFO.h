#pragma once
/* ------------------ */

#include <_OBJECT_HEADER.h>
#include <_OBJECT_REF_STACK_INFO.h>

//0x1c bytes (sizeof)
struct _OBJECT_REF_INFO
{
    struct _OBJECT_HEADER* ObjectHeader;                                    //0x0
    VOID* NextRef;                                                          //0x4
    UCHAR ImageFileName[16];                                                //0x8
    USHORT NextPos;                                                         //0x18
    USHORT MaxStacks;                                                       //0x1a
    struct _OBJECT_REF_STACK_INFO StackInfo[0];                             //0x1c
};
