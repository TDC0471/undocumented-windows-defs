#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_CM_INTENT_LOCK.h>
#include <_CM_KEY_CONTROL_BLOCK.h>
#include <_CM_TRANS.h>
#include <UoWActionType.h>
#include <HSTORAGE_TYPE.h>
#include <_CM_KCB_UOW.h>
#include <_LARGE_INTEGER.h>
#include <_CM_UOW_SET_SD_DATA.h>
#include <_CM_UOW_KEY_STATE_MODIFICATION.h>
#include <_CM_UOW_SET_VALUE_LIST_DATA.h>
#include <_CM_UOW_SET_VALUE_KEY_DATA.h>
#include <_CMP_DISCARD_AND_REPLACE_KCB_CONTEXT.h>

//0x78 bytes (sizeof)
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
    struct _CM_KCB_UOW* ParentUoW;                                          //0x50
    union
    {
        struct _CM_KEY_CONTROL_BLOCK* ChildKCB;                             //0x58
        ULONG VolatileKeyCell;                                              //0x58
        struct
        {
            ULONG OldValueCell;                                             //0x58
            ULONG NewValueCell;                                             //0x5c
        };
        ULONG UserFlags;                                                    //0x58
        union _LARGE_INTEGER LastWriteTime;                                 //0x58
        ULONG TxSecurityCell;                                               //0x58
        struct
        {
            struct _CM_KEY_CONTROL_BLOCK* OldChildKCB;                      //0x58
            struct _CM_KEY_CONTROL_BLOCK* NewChildKCB;                      //0x60
        };
        struct
        {
            struct _CM_KEY_CONTROL_BLOCK* OtherChildKCB;                    //0x58
            ULONG ThisVolatileKeyCell;                                      //0x60
        };
    };
    union
    {
        VOID* PrepareDataPointer;                                           //0x68
        struct _CM_UOW_SET_SD_DATA* SecurityData;                           //0x68
        struct _CM_UOW_KEY_STATE_MODIFICATION* ModifyKeysData;              //0x68
        struct _CM_UOW_SET_VALUE_LIST_DATA* SetValueData;                   //0x68
    };
    union
    {
        struct _CM_UOW_SET_VALUE_KEY_DATA* ValueData;                       //0x70
        struct _CMP_DISCARD_AND_REPLACE_KCB_CONTEXT* DiscardReplaceContext; //0x70
    };
};
/* Used in */
// _CM_INTENT_LOCK
// _CM_KCB_UOW

