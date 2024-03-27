#pragma once
/* ------------------ */

#include <_RTL_AVL_TREE.h>
#include <_MMPFN.h>
#include <_KEVENT.h>
#include <_LIST_ENTRY.h>
#include <_WORK_QUEUE_ITEM.h>

//0x110 bytes (sizeof)
struct _MI_PAGELIST_STATE
{
    volatile LONG ActiveSpinLock;                                           //0x0
    struct _RTL_AVL_TREE ActiveThreadTree;                                  //0x8
    volatile LONG ActiveZeroSpinLock;                                       //0x10
    struct _RTL_AVL_TREE ActiveZeroThreadTree;                              //0x18
    struct _MMPFN LargePfnTemplate;                                         //0x20
    struct _MMPFN LargePfnBasePageTemplate;                                 //0x50
    ULONG NumberOfLargePageListHeads;                                       //0x80
    struct _KEVENT Phase1BootComplete;                                      //0x88
    struct _RTL_AVL_TREE PendingBadPageTree;                                //0xa0
    ULONGLONG PendingBadPageCount;                                          //0xa8
    volatile LONG PendingBadPageTreeLock;                                   //0xb0
    ULONGLONG PendingBadPagesWithoutNodesCount;                             //0xb8
    struct _LIST_ENTRY PendingBadPageNodesAwaitingDeleteList;               //0xc0
    ULONGLONG PendingBadPageNodesAwaitingDeleteCount;                       //0xd0
    UCHAR PendingBadPageNodeDeleteActive;                                   //0xd8
    struct _WORK_QUEUE_ITEM PendingBadPageNodeDeleteWorkItem;               //0xe0
    struct _RTL_AVL_TREE BadHugePageTree;                                   //0x100
    ULONGLONG BadHugePageCount;                                             //0x108
};
/* Used in */
// _MI_SYSTEM_INFORMATION

