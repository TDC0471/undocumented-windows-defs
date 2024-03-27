#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_LARGE_INTEGER.h>
#include <_IO_STATUS_BLOCK.h>
#include <_IRP.h>
#include <_MMMOD_WRITER_LISTHEAD.h>
#include <_MMPAGING_FILE.h>
#include <_FILE_OBJECT.h>
#include <_CONTROL_AREA.h>
#include <_ERESOURCE.h>
#include <_MDL.h>

//0xa8 bytes (sizeof)
struct _MMMOD_WRITER_MDL_ENTRY
{
    struct _LIST_ENTRY Links;                                               //0x0
    union _LARGE_INTEGER WriteOffset;                                       //0x10
    union
    {
        struct _IO_STATUS_BLOCK IoStatus;                                   //0x18
        union _LARGE_INTEGER LastByte;                                      //0x18
    } u;                                                                    //0x18
    struct _IRP* Irp;                                                       //0x28
    ULONGLONG LastPageToWrite;                                              //0x30
    struct _MMMOD_WRITER_LISTHEAD* PagingListHead;                          //0x38
    struct _LIST_ENTRY* CurrentList;                                        //0x40
    struct _MMPAGING_FILE* PagingFile;                                      //0x48
    struct _FILE_OBJECT* File;                                              //0x50
    struct _CONTROL_AREA* ControlArea;                                      //0x58
    struct _ERESOURCE* FileResource;                                        //0x60
    union _LARGE_INTEGER IssueTime;                                         //0x68
    struct _MDL Mdl;                                                        //0x70
    ULONGLONG Page[1];                                                      //0xa0
};
/* Used in */
// _MMPAGING_FILE

