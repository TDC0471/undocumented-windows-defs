#pragma once
/* ------------------ */

#include <_RTL_BALANCED_LINKS.h>
#include <_RTL_GENERIC_COMPARE_RESULTS.h>
#include <_RTL_AVL_TABLE.h>

//0x38 bytes (sizeof)
struct _RTL_AVL_TABLE
{
    struct _RTL_BALANCED_LINKS BalancedRoot;                                //0x0
    VOID* OrderedPointer;                                                   //0x10
    ULONG WhichOrderedElement;                                              //0x14
    ULONG NumberGenericTableElements;                                       //0x18
    ULONG DepthOfTree;                                                      //0x1c
    struct _RTL_BALANCED_LINKS* RestartKey;                                 //0x20
    ULONG DeleteCount;                                                      //0x24
    enum _RTL_GENERIC_COMPARE_RESULTS (*CompareRoutine)(struct _RTL_AVL_TABLE* arg1, VOID* arg2, VOID* arg3); //0x28
    VOID* (*AllocateRoutine)(struct _RTL_AVL_TABLE* arg1, ULONG arg2);      //0x2c
    VOID (*FreeRoutine)(struct _RTL_AVL_TABLE* arg1, VOID* arg2);           //0x30
    VOID* TableContext;                                                     //0x34
};
/* Used in */
// _KTMOBJECT_NAMESPACE
// _RTL_AVL_TABLE

