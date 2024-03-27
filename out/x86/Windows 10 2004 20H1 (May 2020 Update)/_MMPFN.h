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

//0x1c bytes (sizeof)
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
                ULONG Flink;                                                //0x0
                struct _MI_ACTIVE_PFN Active;                               //0x0
            } u1;                                                           //0x0
            union
            {
                struct _MMPTE* PteAddress;                                  //0x4
                ULONG PteLong;                                              //0x4
            };
            struct _MMPTE OriginalPte;                                      //0x8
        };
    };
    struct _MIPFNBLINK u2;                                                  //0x10
    union
    {
        struct
        {
            USHORT ReferenceCount;                                          //0x14
            struct _MMPFNENTRY1 e1;                                         //0x16
        };
        struct
        {
            struct _MMPFNENTRY3 e3;                                         //0x17
        struct
        {
            USHORT ReferenceCount;                                          //0x14
        } e2;                                                               //0x14
        };
        struct
        {
            ULONG EntireField;                                              //0x14
        } e4;                                                               //0x14
    } u3;                                                                   //0x14
    union
    {
        ULONG PteFrame:24;                                                  //0x18
        ULONG LargePageSize:2;                                              //0x18
        ULONG ModifiedListBucketIndex:2;                                    //0x18
        ULONG PageIdentity:3;                                               //0x18
        ULONG PrototypePte:1;                                               //0x18
        ULONG EntireField;                                                  //0x18
    } u4;                                                                   //0x18
};
/* Used in */
// _MI_COMMON_PAGE_STATE
// _MI_HARD_FAULT_STATE
// _MI_SECTION_STATE
// _MI_SYSTEM_NODE_INFORMATION
// _MI_SYSTEM_PTE_STATE
// _MMINPAGE_SUPPORT

