#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_IO_STATUS_BLOCK.h>
#include <_IRP.h>
#include <_MODWRITER_FLAGS.h>
#include <_KAPC.h>
#include <_MMPAGING_FILE.h>
#include <_FILE_OBJECT.h>
#include <_CONTROL_AREA.h>
#include <_ERESOURCE.h>
#include <_LARGE_INTEGER.h>
#include <_MI_PARTITION.h>
#include <_MDL.h>

//0xa0 bytes (sizeof)
struct _MMMOD_WRITER_MDL_ENTRY
{
    struct _LIST_ENTRY Links;                                               //0x0
    union
    {
        struct _IO_STATUS_BLOCK IoStatus;                                   //0x8
    } u;                                                                    //0x8
    struct _IRP* Irp;                                                       //0x10
    struct _MODWRITER_FLAGS u1;                                             //0x14
    ULONG StoreWriteRefCount;                                               //0x18
    struct _KAPC StoreWriteCompletionApc;                                   //0x1c
    ULONG ByteCount;                                                        //0x4c
    ULONG ChargedPages;                                                     //0x50
    struct _MMPAGING_FILE* PagingFile;                                      //0x54
    struct _FILE_OBJECT* File;                                              //0x58
    struct _CONTROL_AREA* ControlArea;                                      //0x5c
    struct _ERESOURCE* FileResource;                                        //0x60
    union _LARGE_INTEGER WriteOffset;                                       //0x68
    union _LARGE_INTEGER IssueTime;                                         //0x70
    struct _MI_PARTITION* Partition;                                        //0x78
    struct _MDL* PointerMdl;                                                //0x7c
    struct _MDL Mdl;                                                        //0x80
    ULONG Page[1];                                                          //0x9c
};
/* Used in */
// _MMPAGING_FILE

