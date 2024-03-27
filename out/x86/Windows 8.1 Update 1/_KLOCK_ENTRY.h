#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_KLOCK_ENTRY_LOCK_STATE.h>
#include <_RTL_RB_TREE.h>

//0x30 bytes (sizeof)
struct _KLOCK_ENTRY
{
    union
    {
        struct _RTL_BALANCED_NODE TreeNode;                                 //0x0
        struct _SINGLE_LIST_ENTRY FreeListEntry;                            //0x0
    };
    union
    {
        VOID* ThreadUnsafe;                                                 //0xc
        struct
        {
            volatile UCHAR HeadNodeByte;                                    //0xc
            UCHAR Reserved1[2];                                             //0xd
            volatile UCHAR AcquiredByte;                                    //0xf
        };
    };
    union
    {
        struct _KLOCK_ENTRY_LOCK_STATE LockState;                           //0x10
        VOID* volatile LockUnsafe;                                          //0x10
        struct
        {
            volatile UCHAR WaitingAndBusyByte;                              //0x10
            UCHAR Reserved[2];                                              //0x11
            volatile UCHAR InTreeByte;                                      //0x13
            union
            {
                VOID* SessionState;                                         //0x14
                ULONG SessionId;                                            //0x14
            };
        };
    };
    union
    {
        struct
        {
            struct _RTL_RB_TREE OwnerTree;                                  //0x18
            struct _RTL_RB_TREE WaiterTree;                                 //0x20
        };
        CHAR CpuPriorityKey;                                                //0x18
    };
    ULONG EntryLock;                                                        //0x28
    union
    {
        USHORT AllBoosts;                                                   //0x2c
        struct
        {
            USHORT IoBoost:1;                                               //0x2c
            USHORT CpuBoostsBitmap:15;                                      //0x2c
        };
    };
    USHORT IoNormalPriorityWaiterCount:15;                                  //0x2e
    USHORT IoPriorityBit:1;                                                 //0x2e
};
/* Used in */
// _KTHREAD

