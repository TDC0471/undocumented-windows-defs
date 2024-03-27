#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>
#include <_MDL.h>
#include <_EPROCESS.h>

//0x90 bytes (sizeof)
struct _LOCK_TRACKER
{
    struct _RTL_BALANCED_NODE LockTrackerNode;                              //0x0
    struct _MDL* Mdl;                                                       //0x18
    VOID* StartVa;                                                          //0x20
    ULONGLONG Count;                                                        //0x28
    ULONG Offset;                                                           //0x30
    ULONG Length;                                                           //0x34
    ULONGLONG Page;                                                         //0x38
    VOID* StackTrace[8];                                                    //0x40
    ULONG Who;                                                              //0x80
    struct _EPROCESS* Process;                                              //0x88
};
