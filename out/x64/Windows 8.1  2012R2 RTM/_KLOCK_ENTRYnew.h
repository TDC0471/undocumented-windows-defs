#pragma once
/* ------------------ */

#include <_RTL_BALANCED_NODE.h>
#include <_SINGLE_LIST_ENTRY.h>
#include <_KLOCK_ENTRY_LOCK_STATE.h>
#include <_RTL_RB_TREE.h>

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
        VOID* ThreadUnsafe;                                                 //0x18
        struct
        {
            volatile UCHAR HeadNodeByte;                                    //0x18
            UCHAR Reserved1[6];                                             //0x19
            volatile UCHAR AcquiredByte;                                    //0x1f
        };
    };
    union
    {
        struct _KLOCK_ENTRY_LOCK_STATE LockState;                           //0x20
        VOID* volatile LockUnsafe;                                          //0x20
        struct
        {
            volatile UCHAR WaitingAndBusyByte;                              //0x20
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
    union
    {
        USHORT AllBoosts;                                                   //0x58
        struct
        {
            USHORT IoBoost:1;                                               //0x58
            USHORT CpuBoostsBitmap:15;                                      //0x58
        };
    };
    USHORT IoNormalPriorityWaiterCount;                                     //0x5a
    UCHAR IoPriorityBit:1;                                                  //0x5c
    UCHAR AbSpare:7;                                                        //0x5c
    UCHAR SparePad[3];                                                      //0x5d
};
/* Used in */
// _KTHREAD

