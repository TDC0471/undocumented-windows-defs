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
#include <_CM_KEY_SECURITY_CACHE.h>
#include <_CM_UOW_SET_SD_DATA.h>
#include <_CM_UOW_KEY_STATE_MODIFICATION.h>
#include <_CM_UOW_SET_VALUE_LIST_DATA.h>
#include <_CM_UOW_SET_VALUE_KEY_DATA.h>
#include <_CMP_DISCARD_AND_REPLACE_KCB_CONTEXT.h>

//0x40 bytes (sizeof)
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
    struct _CM_KCB_UOW* ParentUoW;                                          //0x2c
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
        struct
        {
            struct _CM_KEY_SECURITY_CACHE* TxCachedSecurity;                //0x30
            ULONG TxSecurityCell;                                           //0x34
        };
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
    union
    {
        VOID* PrepareDataPointer;                                           //0x38
        struct _CM_UOW_SET_SD_DATA* SecurityData;                           //0x38
        struct _CM_UOW_KEY_STATE_MODIFICATION* ModifyKeysData;              //0x38
        struct _CM_UOW_SET_VALUE_LIST_DATA* SetValueData;                   //0x38
    };
    union
    {
        struct _CM_UOW_SET_VALUE_KEY_DATA* ValueData;                       //0x3c
        struct _CMP_DISCARD_AND_REPLACE_KCB_CONTEXT* DiscardReplaceContext; //0x3c
    };
};
/* Used in */
// _CM_INTENT_LOCK
// _CM_KCB_UOW

