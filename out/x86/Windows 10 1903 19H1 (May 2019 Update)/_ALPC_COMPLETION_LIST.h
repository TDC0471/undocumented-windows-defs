#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_EPROCESS.h>
#include <_EX_PUSH_LOCK.h>
#include <_MDL.h>
#include <_ALPC_COMPLETION_LIST_HEADER.h>

//0x58 bytes (sizeof)
struct _ALPC_COMPLETION_LIST
{
    struct _LIST_ENTRY Entry;                                               //0x0
    struct _EPROCESS* OwnerProcess;                                         //0x8
    struct _EX_PUSH_LOCK CompletionListLock;                                //0xc
    struct _MDL* Mdl;                                                       //0x10
    VOID* UserVa;                                                           //0x14
    VOID* UserLimit;                                                        //0x18
    VOID* DataUserVa;                                                       //0x1c
    VOID* SystemVa;                                                         //0x20
    ULONG TotalSize;                                                        //0x24
    struct _ALPC_COMPLETION_LIST_HEADER* Header;                            //0x28
    VOID* List;                                                             //0x2c
    ULONG ListSize;                                                         //0x30
    VOID* Bitmap;                                                           //0x34
    ULONG BitmapSize;                                                       //0x38
    VOID* Data;                                                             //0x3c
    ULONG DataSize;                                                         //0x40
    ULONG BitmapLimit;                                                      //0x44
    ULONG BitmapNextHint;                                                   //0x48
    ULONG ConcurrencyCount;                                                 //0x4c
    ULONG AttributeFlags;                                                   //0x50
    ULONG AttributeSize;                                                    //0x54
};
/* Used in */
// _ALPC_PORT

