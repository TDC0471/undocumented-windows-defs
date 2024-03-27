#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_CM_RM.h>
#include <_KENLISTMENT.h>
#include <_GUID.h>
#include <_CMHIVE.h>

//0xb0 bytes (sizeof)
struct _CM_TRANS
{
    struct _LIST_ENTRY TransactionListEntry;                                //0x0
    struct _LIST_ENTRY KCBUoWListHead;                                      //0x10
    struct _LIST_ENTRY LazyCommitListEntry;                                 //0x20
    VOID* KtmTrans;                                                         //0x30
    struct _CM_RM* CmRm;                                                    //0x38
    struct _KENLISTMENT* KtmEnlistmentObject;                               //0x40
    VOID* KtmEnlistmentHandle;                                              //0x48
    struct _GUID KtmUow;                                                    //0x50
    ULONGLONG StartLsn;                                                     //0x60
    ULONG TransState;                                                       //0x68
    ULONG HiveCount;                                                        //0x6c
    struct _CMHIVE* HiveArray[8];                                           //0x70
};
/* Used in */
// _CM_KCB_UOW
// _CM_KEY_CONTROL_BLOCK

