#pragma once
/* ------------------ */

#include <_PRIVATE_CACHE_MAP_FLAGS.h>
#include <_FILE_OBJECT.h>
#include <_LARGE_INTEGER.h>
#include <_LIST_ENTRY.h>

//0x68 bytes (sizeof)
struct _PRIVATE_CACHE_MAP
{
    union
    {
        SHORT NodeTypeCode;                                                 //0x0
        struct _PRIVATE_CACHE_MAP_FLAGS Flags;                              //0x0
        ULONG UlongFlags;                                                   //0x0
    };
    ULONG ReadAheadMask;                                                    //0x4
    struct _FILE_OBJECT* FileObject;                                        //0x8
    union _LARGE_INTEGER FileOffset1;                                       //0x10
    union _LARGE_INTEGER BeyondLastByte1;                                   //0x18
    union _LARGE_INTEGER FileOffset2;                                       //0x20
    union _LARGE_INTEGER BeyondLastByte2;                                   //0x28
    union _LARGE_INTEGER ReadAheadOffset[2];                                //0x30
    ULONG ReadAheadLength[2];                                               //0x40
    ULONGLONG ReadAheadSpinLock;                                            //0x48
    struct _LIST_ENTRY PrivateLinks;                                        //0x50
    VOID* ReadAheadWorkItem;                                                //0x60
};
/* Used in */
// _SHARED_CACHE_MAP

