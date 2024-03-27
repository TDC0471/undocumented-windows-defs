#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>
#include <_MDL.h>
#include <_EPROCESS.h>

//0x4c bytes (sizeof)
struct _LOCK_TRACKER
{
    struct _RTL_BALANCED_NODE LockTrackerNode;                              //0x0
    struct _MDL* Mdl;                                                       //0xc
    VOID* StartVa;                                                          //0x10
    ULONG Count;                                                            //0x14
    ULONG Offset;                                                           //0x18
    ULONG Length;                                                           //0x1c
    ULONG Page;                                                             //0x20
    VOID* StackTrace[8];                                                    //0x24
    ULONG Who;                                                              //0x44
    struct _EPROCESS* Process;                                              //0x48
};
