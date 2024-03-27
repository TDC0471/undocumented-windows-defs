#pragma once
/* ------------------ */

#include <_IOP_MC_BUFFER_ENTRY_FLAGS.h>
#include <_LIST_ENTRY.h>
#include <_MDL.h>
#include <_KEVENT.h>
#include <_IOP_MC_BE_PAGE_NODE.h>

//0x80 bytes (sizeof)
struct _IOP_MC_BUFFER_ENTRY
{
    USHORT Type;                                                            //0x0
    USHORT Reserved;                                                        //0x2
    ULONG Size;                                                             //0x4
    LONG ReferenceCount;                                                    //0x8
    enum _IOP_MC_BUFFER_ENTRY_FLAGS Flags;                                  //0xc
    struct _LIST_ENTRY GlobalDataLink;                                      //0x10
    VOID* Address;                                                          //0x20
    ULONG Length;                                                           //0x28
    CHAR AccessMode;                                                        //0x2c
    LONG MdlRef;                                                            //0x30
    struct _MDL* Mdl;                                                       //0x38
    struct _KEVENT MdlRundownEvent;                                         //0x40
    ULONGLONG* PfnArray;                                                    //0x58
    struct _IOP_MC_BE_PAGE_NODE PageNodes[1];                               //0x60
};
/* Used in */
// _IORING_OBJECT

