#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_CM_RM.h>
#include <_KENLISTMENT.h>
#include <_GUID.h>
#include <_CMHIVE.h>

//0x68 bytes (sizeof)
struct _CM_TRANS
{
    struct _LIST_ENTRY TransactionListEntry;                                //0x0
    struct _LIST_ENTRY KCBUoWListHead;                                      //0x8
    struct _LIST_ENTRY LazyCommitListEntry;                                 //0x10
    VOID* KtmTrans;                                                         //0x18
    struct _CM_RM* CmRm;                                                    //0x1c
    struct _KENLISTMENT* KtmEnlistmentObject;                               //0x20
    VOID* KtmEnlistmentHandle;                                              //0x24
    struct _GUID KtmUow;                                                    //0x28
    ULONGLONG StartLsn;                                                     //0x38
    ULONG TransState;                                                       //0x40
    ULONG HiveCount;                                                        //0x44
    struct _CMHIVE* HiveArray[7];                                           //0x48
};
/* Used in */
// _CM_KCB_UOW
// _CM_KEY_CONTROL_BLOCK

