#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_KLOCK_ENTRY_LOCK_STATE.h>
#include <_RTL_RB_TREE.h>
#include <_KLOCK_ENTRY_BOOST_BITMAP.h>

//0x60 bytes (sizeof)
struct _KLOCK_ENTRY
{
    union
    {
        struct _RTL_BALANCED_NODE TreeNode;                                 //0x0
        struct _SINGLE_LIST_ENTRY FreeListEntry;                            //0x0
    };
    union
    {
        ULONG EntryFlags;                                                   //0x18
        struct
        {
            UCHAR EntryOffset;                                              //0x18
            union
            {
                UCHAR ThreadLocalFlags;                                     //0x19
                struct
                {
                    UCHAR WaitingBit:1;                                     //0x19
                    UCHAR Spare0:7;                                         //0x19
                };
            };
            union
            {
                UCHAR AcquiredByte;                                         //0x1a
                UCHAR AcquiredBit:1;                                        //0x1a
            };
            union
            {
                UCHAR CrossThreadFlags;                                     //0x1b
                struct
                {
                    UCHAR HeadNodeBit:1;                                    //0x1b
                    UCHAR IoPriorityBit:1;                                  //0x1b
                    UCHAR IoQoSWaiter:1;                                    //0x1b
                    UCHAR Spare1:5;                                         //0x1b
                };
            };
        };
        struct
        {
            ULONG StaticState:8;                                            //0x18
            ULONG AllFlags:24;                                              //0x18
        };
    };
    ULONG SpareFlags;                                                       //0x1c
    union
    {
        struct _KLOCK_ENTRY_LOCK_STATE LockState;                           //0x20
        VOID* volatile LockUnsafe;                                          //0x20
        struct
        {
            volatile UCHAR CrossThreadReleasableAndBusyByte;                //0x20
            UCHAR Reserved[6];                                              //0x21
            volatile UCHAR InTreeByte;                                      //0x27
            union
            {
                VOID* SessionState;                                         //0x28
                struct
                {
                    ULONG SessionId;                                        //0x28
                    ULONG SessionPad;                                       //0x2c
                };
            };
        };
    };
    union
    {
        struct
        {
            struct _RTL_RB_TREE OwnerTree;                                  //0x30
            struct _RTL_RB_TREE WaiterTree;                                 //0x40
        };
        CHAR CpuPriorityKey;                                                //0x30
    };
    ULONGLONG EntryLock;                                                    //0x50
    union _KLOCK_ENTRY_BOOST_BITMAP BoostBitmap;                            //0x58
    ULONG SparePad;                                                         //0x5c
};
/* Used in */
// _ETHREAD
// _KTHREAD

