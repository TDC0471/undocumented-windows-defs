#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_EPROCESS.h>
#include <_MDL.h>
#include <_ALPC_COMPLETION_LIST_HEADER.h>

//0x98 bytes (sizeof)
struct _ALPC_COMPLETION_LIST
{
    struct _LIST_ENTRY Entry;                                               //0x0
    struct _EPROCESS* OwnerProcess;                                         //0x10
    struct _MDL* Mdl;                                                       //0x18
    VOID* UserVa;                                                           //0x20
    VOID* UserLimit;                                                        //0x28
    VOID* DataUserVa;                                                       //0x30
    VOID* SystemVa;                                                         //0x38
    ULONGLONG TotalSize;                                                    //0x40
    struct _ALPC_COMPLETION_LIST_HEADER* Header;                            //0x48
    VOID* List;                                                             //0x50
    ULONGLONG ListSize;                                                     //0x58
    VOID* Bitmap;                                                           //0x60
    ULONGLONG BitmapSize;                                                   //0x68
    VOID* Data;                                                             //0x70
    ULONGLONG DataSize;                                                     //0x78
    ULONG BitmapLimit;                                                      //0x80
    ULONG BitmapNextHint;                                                   //0x84
    ULONG ConcurrencyCount;                                                 //0x88
    ULONG AttributeFlags;                                                   //0x8c
    ULONG AttributeSize;                                                    //0x90
};
/* Used in */
// _ALPC_PORT

