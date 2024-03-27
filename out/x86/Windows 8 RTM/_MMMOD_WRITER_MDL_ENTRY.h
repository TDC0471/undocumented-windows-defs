#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_IO_STATUS_BLOCK.h>
#include <_IRP.h>
#include <_MODWRITER_FLAGS.h>
#include <_MMPAGING_FILE.h>
#include <_FILE_OBJECT.h>
#include <_CONTROL_AREA.h>
#include <_ERESOURCE.h>
#include <_LARGE_INTEGER.h>
#include <_MDL.h>

//0x68 bytes (sizeof)
struct _MMMOD_WRITER_MDL_ENTRY
{
    struct _LIST_ENTRY Links;                                               //0x0
    union
    {
        struct _IO_STATUS_BLOCK IoStatus;                                   //0x8
    } u;                                                                    //0x8
    struct _IRP* Irp;                                                       //0x10
    struct _MODWRITER_FLAGS u1;                                             //0x14
    ULONG ByteCount;                                                        //0x18
    struct _MMPAGING_FILE* PagingFile;                                      //0x1c
    struct _FILE_OBJECT* File;                                              //0x20
    struct _CONTROL_AREA* ControlArea;                                      //0x24
    struct _ERESOURCE* FileResource;                                        //0x28
    union _LARGE_INTEGER WriteOffset;                                       //0x30
    union _LARGE_INTEGER IssueTime;                                         //0x38
    struct _MDL* PointerMdl;                                                //0x40
    struct _MDL Mdl;                                                        //0x44
    ULONG Page[1];                                                          //0x60
};
/* Used in */
// _MMPAGING_FILE

