#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_IO_STATUS_BLOCK.h>
#include <_IRP.h>
#include <_MMPAGING_FILE.h>
#include <_FILE_OBJECT.h>
#include <_CONTROL_AREA.h>
#include <_ERESOURCE.h>
#include <_LARGE_INTEGER.h>
#include <_MDL.h>

//0xa0 bytes (sizeof)
struct _MMMOD_WRITER_MDL_ENTRY
{
    struct _LIST_ENTRY Links;                                               //0x0
    union
    {
        struct _IO_STATUS_BLOCK IoStatus;                                   //0x10
    } u;                                                                    //0x10
    struct _IRP* Irp;                                                       //0x20
    union
    {
        ULONGLONG KeepForever;                                              //0x28
    } u1;                                                                   //0x28
    struct _MMPAGING_FILE* PagingFile;                                      //0x30
    struct _FILE_OBJECT* File;                                              //0x38
    struct _CONTROL_AREA* ControlArea;                                      //0x40
    struct _ERESOURCE* FileResource;                                        //0x48
    union _LARGE_INTEGER WriteOffset;                                       //0x50
    union _LARGE_INTEGER IssueTime;                                         //0x58
    struct _MDL* PointerMdl;                                                //0x60
    struct _MDL Mdl;                                                        //0x68
    ULONGLONG Page[1];                                                      //0x98
};
/* Used in */
// _MMPAGING_FILE

