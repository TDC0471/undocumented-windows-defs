#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_CM_TRANS_PTR.h>
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
    union
    {
        struct
        {
            ULONG Prepared:1;                                               //0x30
            ULONG Aborted:1;                                                //0x30
            ULONG Committed:1;                                              //0x30
            ULONG Initializing:1;                                           //0x30
            ULONG Invalid:1;                                                //0x30
            ULONG UseReservation:1;                                         //0x30
            ULONG TmCallbacksActive:1;                                      //0x30
            ULONG LightWeight:1;                                            //0x30
            ULONG Freed1:1;                                                 //0x30
            ULONG Freed2:1;                                                 //0x30
            ULONG Spare1:2;                                                 //0x30
            ULONG Freed:1;                                                  //0x30
            ULONG Spare:19;                                                 //0x30
        };
        ULONG TransState;                                                   //0x30
    };
    union _CM_TRANS_PTR Trans;                                              //0x38
    struct _CM_RM* CmRm;                                                    //0x40
    struct _KENLISTMENT* KtmEnlistmentObject;                               //0x48
    VOID* KtmEnlistmentHandle;                                              //0x50
    struct _GUID KtmUow;                                                    //0x58
    ULONGLONG StartLsn;                                                     //0x68
    ULONG HiveCount;                                                        //0x70
    struct _CMHIVE* HiveArray[7];                                           //0x78
};
/* Used in */
// _CM_KCB_UOW
// _CM_KEY_CONTROL_BLOCK

