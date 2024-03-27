#pragma once
/* ------------------ */

#include <_RTL_BALANCED_LINKS.h>
#include <_RTL_GENERIC_COMPARE_RESULTS.h>
#include <_RTL_AVL_TABLE.h>

//0x68 bytes (sizeof)
struct _RTL_AVL_TABLE
{
    struct _RTL_BALANCED_LINKS BalancedRoot;                                //0x0
    VOID* OrderedPointer;                                                   //0x20
    ULONG WhichOrderedElement;                                              //0x28
    ULONG NumberGenericTableElements;                                       //0x2c
    ULONG DepthOfTree;                                                      //0x30
    struct _RTL_BALANCED_LINKS* RestartKey;                                 //0x38
    ULONG DeleteCount;                                                      //0x40
    enum _RTL_GENERIC_COMPARE_RESULTS (*CompareRoutine)(struct _RTL_AVL_TABLE* arg1, VOID* arg2, VOID* arg3); //0x48
    VOID* (*AllocateRoutine)(struct _RTL_AVL_TABLE* arg1, ULONG arg2);      //0x50
    VOID (*FreeRoutine)(struct _RTL_AVL_TABLE* arg1, VOID* arg2);           //0x58
    VOID* TableContext;                                                     //0x60
};
/* Used in */
// _KTMOBJECT_NAMESPACE
// _RTL_AVL_TABLE
// _VF_AVL_TABLE

