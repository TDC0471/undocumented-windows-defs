#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_EPROCESS.h>
#include <_EX_PUSH_LOCK.h>
#include <_MDL.h>
#include <_ALPC_COMPLETION_LIST_HEADER.h>

//0xa0 bytes (sizeof)
struct _ALPC_COMPLETION_LIST
{
    struct _LIST_ENTRY Entry;                                               //0x0
    struct _EPROCESS* OwnerProcess;                                         //0x10
    struct _EX_PUSH_LOCK CompletionListLock;                                //0x18
    struct _MDL* Mdl;                                                       //0x20
    VOID* UserVa;                                                           //0x28
    VOID* UserLimit;                                                        //0x30
    VOID* DataUserVa;                                                       //0x38
    VOID* SystemVa;                                                         //0x40
    ULONGLONG TotalSize;                                                    //0x48
    struct _ALPC_COMPLETION_LIST_HEADER* Header;                            //0x50
    VOID* List;                                                             //0x58
    ULONGLONG ListSize;                                                     //0x60
    VOID* Bitmap;                                                           //0x68
    ULONGLONG BitmapSize;                                                   //0x70
    VOID* Data;                                                             //0x78
    ULONGLONG DataSize;                                                     //0x80
    ULONG BitmapLimit;                                                      //0x88
    ULONG BitmapNextHint;                                                   //0x8c
    ULONG ConcurrencyCount;                                                 //0x90
    ULONG AttributeFlags;                                                   //0x94
    ULONG AttributeSize;                                                    //0x98
};
/* Used in */
// _ALPC_PORT

