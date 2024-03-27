#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_CM_INTENT_LOCK.h>
#include <_CM_KEY_CONTROL_BLOCK.h>
#include <_CM_TRANS.h>
#include <UoWActionType.h>
#include <HSTORAGE_TYPE.h>
#include <_LARGE_INTEGER.h>

//0x60 bytes (sizeof)
struct _CM_KCB_UOW
{
    struct _LIST_ENTRY TransactionListEntry;                                //0x0
    struct _CM_INTENT_LOCK* KCBLock;                                        //0x10
    struct _CM_INTENT_LOCK* KeyLock;                                        //0x18
    struct _LIST_ENTRY KCBListEntry;                                        //0x20
    struct _CM_KEY_CONTROL_BLOCK* KeyControlBlock;                          //0x30
    struct _CM_TRANS* Transaction;                                          //0x38
    ULONG UoWState;                                                         //0x40
    enum UoWActionType ActionType;                                          //0x44
    enum HSTORAGE_TYPE StorageType;                                         //0x48
    union
    {
        struct _CM_KEY_CONTROL_BLOCK* ChildKCB;                             //0x50
        ULONG VolatileKeyCell;                                              //0x50
        struct
        {
            ULONG OldValueCell;                                             //0x50
            ULONG NewValueCell;                                             //0x54
        };
        ULONG UserFlags;                                                    //0x50
        union _LARGE_INTEGER LastWriteTime;                                 //0x50
        ULONG TxSecurityCell;                                               //0x50
        struct
        {
            struct _CM_KEY_CONTROL_BLOCK* OldChildKCB;                      //0x50
            struct _CM_KEY_CONTROL_BLOCK* NewChildKCB;                      //0x58
        };
        struct
        {
            struct _CM_KEY_CONTROL_BLOCK* OtherChildKCB;                    //0x50
            ULONG ThisVolatileKeyCell;                                      //0x58
        };
    };
};
/* Used in */
// _CM_INTENT_LOCK

