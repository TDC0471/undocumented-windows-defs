#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_CM_INTENT_LOCK.h>
#include <_CM_KEY_CONTROL_BLOCK.h>
#include <_CM_TRANS.h>
#include <UoWActionType.h>
#include <HSTORAGE_TYPE.h>
#include <_LARGE_INTEGER.h>

//0x38 bytes (sizeof)
struct _CM_KCB_UOW
{
    struct _LIST_ENTRY TransactionListEntry;                                //0x0
    struct _CM_INTENT_LOCK* KCBLock;                                        //0x8
    struct _CM_INTENT_LOCK* KeyLock;                                        //0xc
    struct _LIST_ENTRY KCBListEntry;                                        //0x10
    struct _CM_KEY_CONTROL_BLOCK* KeyControlBlock;                          //0x18
    struct _CM_TRANS* Transaction;                                          //0x1c
    ULONG UoWState;                                                         //0x20
    enum UoWActionType ActionType;                                          //0x24
    enum HSTORAGE_TYPE StorageType;                                         //0x28
    union
    {
        struct _CM_KEY_CONTROL_BLOCK* ChildKCB;                             //0x30
        ULONG VolatileKeyCell;                                              //0x30
        struct
        {
            ULONG OldValueCell;                                             //0x30
            ULONG NewValueCell;                                             //0x34
        };
        ULONG UserFlags;                                                    //0x30
        union _LARGE_INTEGER LastWriteTime;                                 //0x30
        ULONG TxSecurityCell;                                               //0x30
        struct
        {
            struct _CM_KEY_CONTROL_BLOCK* OldChildKCB;                      //0x30
            struct _CM_KEY_CONTROL_BLOCK* NewChildKCB;                      //0x34
        };
        struct
        {
            struct _CM_KEY_CONTROL_BLOCK* OtherChildKCB;                    //0x30
            ULONG ThisVolatileKeyCell;                                      //0x34
        };
    };
};
/* Used in */
// _CM_INTENT_LOCK

