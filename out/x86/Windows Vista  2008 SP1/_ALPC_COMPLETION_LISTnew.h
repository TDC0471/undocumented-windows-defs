#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_EPROCESS.h>
#include <_MDL.h>
#include <_ALPC_COMPLETION_LIST_HEADER.h>

//0x54 bytes (sizeof)
struct _ALPC_COMPLETION_LIST
{
    struct _LIST_ENTRY Entry;                                               //0x0
    struct _EPROCESS* OwnerProcess;                                         //0x8
    struct _MDL* Mdl;                                                       //0xc
    VOID* UserVa;                                                           //0x10
    VOID* UserLimit;                                                        //0x14
    VOID* DataUserVa;                                                       //0x18
    VOID* SystemVa;                                                         //0x1c
    ULONG TotalSize;                                                        //0x20
    struct _ALPC_COMPLETION_LIST_HEADER* Header;                            //0x24
    VOID* List;                                                             //0x28
    ULONG ListSize;                                                         //0x2c
    VOID* Bitmap;                                                           //0x30
    ULONG BitmapSize;                                                       //0x34
    VOID* Data;                                                             //0x38
    ULONG DataSize;                                                         //0x3c
    ULONG BitmapLimit;                                                      //0x40
    ULONG BitmapNextHint;                                                   //0x44
    ULONG ConcurrencyCount;                                                 //0x48
    ULONG AttributeFlags;                                                   //0x4c
    ULONG AttributeSize;                                                    //0x50
};
/* Used in */
// _ALPC_PORT

