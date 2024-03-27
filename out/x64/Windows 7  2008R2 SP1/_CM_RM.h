#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_CMHIVE.h>
#include <_ERESOURCE.h>

//0x88 bytes (sizeof)
struct _CM_RM
{
    struct _LIST_ENTRY RmListEntry;                                         //0x0
    struct _LIST_ENTRY TransactionListHead;                                 //0x10
    VOID* TmHandle;                                                         //0x20
    VOID* Tm;                                                               //0x28
    VOID* RmHandle;                                                         //0x30
    VOID* KtmRm;                                                            //0x38
    ULONG RefCount;                                                         //0x40
    ULONG ContainerNum;                                                     //0x44
    ULONGLONG ContainerSize;                                                //0x48
    struct _CMHIVE* CmHive;                                                 //0x50
    VOID* LogFileObject;                                                    //0x58
    VOID* MarshallingContext;                                               //0x60
    ULONG RmFlags;                                                          //0x68
    LONG LogStartStatus1;                                                   //0x6c
    LONG LogStartStatus2;                                                   //0x70
    ULONGLONG BaseLsn;                                                      //0x78
    struct _ERESOURCE* RmLock;                                              //0x80
};
/* Used in */
// _CMHIVE
// _CM_TRANS

