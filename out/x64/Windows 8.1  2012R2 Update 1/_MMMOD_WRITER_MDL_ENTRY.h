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
#include <_MDL.h>

//0x100 bytes (sizeof)
struct _MMMOD_WRITER_MDL_ENTRY
{
    struct _LIST_ENTRY Links;                                               //0x0
    union
    {
        struct _IO_STATUS_BLOCK IoStatus;                                   //0x10
    } u;                                                                    //0x10
    struct _IRP* Irp;                                                       //0x20
    struct _MODWRITER_FLAGS u1;                                             //0x28
    ULONG StoreWriteRefCount;                                               //0x2c
    struct _KAPC StoreWriteCompletionApc;                                   //0x30
    ULONG ByteCount;                                                        //0x88
    struct _MMPAGING_FILE* PagingFile;                                      //0x90
    struct _FILE_OBJECT* File;                                              //0x98
    struct _CONTROL_AREA* ControlArea;                                      //0xa0
    struct _ERESOURCE* FileResource;                                        //0xa8
    union _LARGE_INTEGER WriteOffset;                                       //0xb0
    union _LARGE_INTEGER IssueTime;                                         //0xb8
    struct _MDL* PointerMdl;                                                //0xc0
    struct _MDL Mdl;                                                        //0xc8
    ULONGLONG Page[1];                                                      //0xf8
};
/* Used in */
// _MMPAGING_FILE

