#pragma once
/* ------------------ */

#include <_OBJECT_HEADER.h>
#include <_OBJECT_REF_STACK_INFO.h>

//0x28 bytes (sizeof)
struct _OBJECT_REF_INFO
{
    struct _OBJECT_HEADER* ObjectHeader;                                    //0x0
    VOID* NextRef;                                                          //0x8
    UCHAR ImageFileName[16];                                                //0x10
    USHORT NextPos;                                                         //0x20
    USHORT MaxStacks;                                                       //0x22
    struct _OBJECT_REF_STACK_INFO StackInfo[0];                             //0x24
};
