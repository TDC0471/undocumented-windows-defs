#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_RTL_BALANCED_NODE.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_MI_ACTIVE_PFN.h>
#include <_MMPTE.h>
#include <_MIPFNBLINK.h>
#include <_MMPFNENTRY1.h>
#include <_MMPFNENTRY3.h>
#include <_MI_PFN_ULONG5.h>

//0x30 bytes (sizeof)
struct _MMPFN
{
    union
    {
        struct _LIST_ENTRY ListEntry;                                       //0x0
        struct _RTL_BALANCED_NODE TreeNode;                                 //0x0
        struct
        {
            union
            {
                struct _SINGLE_LIST_ENTRY NextSlistPfn;                     //0x0
                VOID* Next;                                                 //0x0
                ULONGLONG Flink:40;                                         //0x0
                ULONGLONG NodeFlinkLow:24;                                  //0x0
                struct _MI_ACTIVE_PFN Active;                               //0x0
            } u1;                                                           //0x0
            union
            {
                struct _MMPTE* PteAddress;                                  //0x8
                ULONGLONG PteLong;                                          //0x8
            };
            struct _MMPTE OriginalPte;                                      //0x10
        };
    };
    struct _MIPFNBLINK u2;                                                  //0x18
    union
    {
        struct
        {
            USHORT ReferenceCount;                                          //0x20
            struct _MMPFNENTRY1 e1;                                         //0x22
        };
        struct
        {
            struct _MMPFNENTRY3 e3;                                         //0x23
        struct
        {
            USHORT ReferenceCount;                                          //0x20
        } e2;                                                               //0x20
        };
        struct
        {
            ULONG EntireField;                                              //0x20
        } e4;                                                               //0x20
    } u3;                                                                   //0x20
    struct _MI_PFN_ULONG5 u5;                                               //0x24
    union
    {
        ULONGLONG PteFrame:40;                                              //0x28
        ULONGLONG ResidentPage:1;                                           //0x28
        ULONGLONG Unused1:1;                                                //0x28
        ULONGLONG Unused2:1;                                                //0x28
        ULONGLONG Partition:10;                                             //0x28
        ULONGLONG FileOnly:1;                                               //0x28
        ULONGLONG PfnExists:1;                                              //0x28
        ULONGLONG NodeFlinkHigh:5;                                          //0x28
        ULONGLONG PageIdentity:3;                                           //0x28
        ULONGLONG PrototypePte:1;                                           //0x28
        ULONGLONG EntireField;                                              //0x28
    } u4;                                                                   //0x28
};
/* Used in */
// _MI_COMMON_PAGE_STATE
// _MI_HARD_FAULT_STATE
// _MI_PAGELIST_STATE
// _MI_REMOVAL_REQUESTED_PAGE
// _MI_SECTION_STATE
// _MI_SYSTEM_NODE_NONPAGED_POOL
// _MI_SYSTEM_PTE_STATE
// _MMINPAGE_SUPPORT
// _MMPFNLIST

