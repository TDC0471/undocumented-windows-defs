#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_CMHIVE.h>
#include <_ERESOURCE.h>

//0x58 bytes (sizeof)
struct _CM_RM
{
    struct _LIST_ENTRY RmListEntry;                                         //0x0
    struct _LIST_ENTRY TransactionListHead;                                 //0x8
    VOID* TmHandle;                                                         //0x10
    VOID* Tm;                                                               //0x14
    VOID* RmHandle;                                                         //0x18
    VOID* KtmRm;                                                            //0x1c
    ULONG RefCount;                                                         //0x20
    ULONG ContainerNum;                                                     //0x24
    ULONGLONG ContainerSize;                                                //0x28
    struct _CMHIVE* CmHive;                                                 //0x30
    VOID* LogFileObject;                                                    //0x34
    VOID* MarshallingContext;                                               //0x38
    ULONG RmFlags;                                                          //0x3c
    LONG LogStartStatus1;                                                   //0x40
    LONG LogStartStatus2;                                                   //0x44
    ULONGLONG BaseLsn;                                                      //0x48
    struct _ERESOURCE* RmLock;                                              //0x50
};
/* Used in */
// _CMHIVE
// _CM_TRANS

