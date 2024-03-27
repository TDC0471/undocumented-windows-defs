#pragma once
/* ------------------ */

#include <_KLOCK_ENTRY_LOCK_STATE.h>
#include <_RTL_BALANCED_NODE.h>
#include <_RTL_RB_TREE.h>
#include <_KLOCK_ENTRY_BOOST_BITMAP.h>

//0x60 bytes (sizeof)
struct _KLOCK_ENTRY
{
    union
    {
        struct _KLOCK_ENTRY_LOCK_STATE LockState;                           //0x0
        VOID* volatile LockUnsafe;                                          //0x0
        struct
        {
            volatile UCHAR CrossThreadReleasableAndBusyByte;                //0x0
            UCHAR Reserved[6];                                              //0x1
            volatile UCHAR InTreeByte;                                      //0x7
            union
            {
                VOID* SessionState;                                         //0x8
                struct
                {
                    ULONG SessionId;                                        //0x8
                    ULONG SessionPad;                                       //0xc
                };
            };
        };
    };
    union
    {
        ULONG EntryFlags;                                                   //0x10
        struct
        {
            UCHAR EntryIndex;                                               //0x10
            UCHAR WaitingByte;                                              //0x11
            UCHAR AcquiredByte;                                             //0x12
            union
            {
                UCHAR CrossThreadFlags;                                     //0x13
                struct
                {
                    UCHAR HeadNodeBit:1;                                    //0x13
                    UCHAR IoPriorityBit:1;                                  //0x13
                    UCHAR IoQoSWaiter:1;                                    //0x13
                    UCHAR Spare1:5;                                         //0x13
                };
            };
        };
        struct
        {
            ULONG StaticState:8;                                            //0x10
            ULONG AllFlags:24;                                              //0x10
        };
    };
    ULONG SpareFlags;                                                       //0x14
    struct _RTL_BALANCED_NODE TreeNode;                                     //0x18
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
};
/* Used in */
// _ETHREAD

