#pragma once
/* ------------------ */

#include <_ERESOURCE.h>
#include <_LARGE_INTEGER.h>
#include <_FAST_MUTEX.h>
#include <_LIST_ENTRY.h>
#include <_EX_PUSH_LOCK.h>

//0x68 bytes (sizeof)
struct _FSRTL_ADVANCED_FCB_HEADER
{
    SHORT NodeTypeCode;                                                     //0x0
    SHORT NodeByteSize;                                                     //0x2
    UCHAR Flags;                                                            //0x4
    UCHAR IsFastIoPossible;                                                 //0x5
    UCHAR Flags2;                                                           //0x6
    UCHAR Reserved:4;                                                       //0x7
    UCHAR Version:4;                                                        //0x7
    struct _ERESOURCE* Resource;                                            //0x8
    struct _ERESOURCE* PagingIoResource;                                    //0x10
    union _LARGE_INTEGER AllocationSize;                                    //0x18
    union _LARGE_INTEGER FileSize;                                          //0x20
    union _LARGE_INTEGER ValidDataLength;                                   //0x28
    struct _FAST_MUTEX* FastMutex;                                          //0x30
    struct _LIST_ENTRY FilterContexts;                                      //0x38
    struct _EX_PUSH_LOCK PushLock;                                          //0x48
    VOID** FileContextSupportPointer;                                       //0x50
    union
    {
        VOID* Oplock;                                                       //0x58
        VOID* ReservedForRemote;                                            //0x58
    };
    VOID* ReservedContext;                                                  //0x60
};
