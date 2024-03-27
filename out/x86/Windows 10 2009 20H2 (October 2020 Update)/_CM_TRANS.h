#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_CM_TRANS_PTR.h>
#include <_CM_RM.h>
#include <_KENLISTMENT.h>
#include <_GUID.h>
#include <_CMHIVE.h>

//0x70 bytes (sizeof)
struct _CM_TRANS
{
    struct _LIST_ENTRY TransactionListEntry;                                //0x0
    struct _LIST_ENTRY KCBUoWListHead;                                      //0x8
    struct _LIST_ENTRY LazyCommitListEntry;                                 //0x10
    union
    {
        struct
        {
            ULONG Prepared:1;                                               //0x18
            ULONG Aborted:1;                                                //0x18
            ULONG Committed:1;                                              //0x18
            ULONG Initializing:1;                                           //0x18
            ULONG Invalid:1;                                                //0x18
            ULONG UseReservation:1;                                         //0x18
            ULONG TmCallbacksActive:1;                                      //0x18
            ULONG LightWeight:1;                                            //0x18
            ULONG Freed1:1;                                                 //0x18
            ULONG Freed2:1;                                                 //0x18
            ULONG Spare1:2;                                                 //0x18
            ULONG Freed:1;                                                  //0x18
            ULONG Spare:19;                                                 //0x18
        };
        ULONG TransState;                                                   //0x18
    };
    union _CM_TRANS_PTR Trans;                                              //0x1c
    struct _CM_RM* CmRm;                                                    //0x20
    struct _KENLISTMENT* KtmEnlistmentObject;                               //0x24
    VOID* KtmEnlistmentHandle;                                              //0x28
    struct _GUID KtmUow;                                                    //0x2c
    ULONGLONG StartLsn;                                                     //0x40
    ULONG HiveCount;                                                        //0x48
    struct _CMHIVE* HiveArray[8];                                           //0x4c
};
/* Used in */
// _CM_KCB_UOW
// _CM_KEY_CONTROL_BLOCK

