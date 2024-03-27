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
        ULONG EntryFlags;                                                   //0xc
        struct
        {
            UCHAR EntryOffset;                                              //0xc
            union
            {
                UCHAR ThreadLocalFlags;                                     //0xd
                struct
                {
                    UCHAR WaitingBit:1;                                     //0xd
                    UCHAR Spare0:7;                                         //0xd
                };
            };
            union
            {
                UCHAR AcquiredByte;                                         //0xe
                UCHAR AcquiredBit:1;                                        //0xe
            };
            union
            {
                UCHAR CrossThreadFlags;                                     //0xf
                struct
                {
                    UCHAR HeadNodeBit:1;                                    //0xf
                    UCHAR IoPriorityBit:1;                                  //0xf
                    UCHAR Spare1:6;                                         //0xf
                };
            };
        };
        struct
        {
            ULONG StaticState:8;                                            //0xc
            ULONG AllFlags:24;                                              //0xc
        };
    };
    union
    {
        struct _KLOCK_ENTRY_LOCK_STATE LockState;                           //0x10
        VOID* volatile LockUnsafe;                                          //0x10
        struct
        {
            volatile UCHAR CrossThreadReleasableAndBusyByte;                //0x10
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
    USHORT IoNormalPriorityWaiterCount;                                     //0x2e
};
/* Used in */
// _KTHREAD

