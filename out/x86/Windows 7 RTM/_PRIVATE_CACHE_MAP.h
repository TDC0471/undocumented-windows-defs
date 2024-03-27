#pragma once
/* ------------------ */

#include <_PRIVATE_CACHE_MAP_FLAGS.h>
#include <_FILE_OBJECT.h>
#include <_LARGE_INTEGER.h>
#include <_LIST_ENTRY.h>

//0x58 bytes (sizeof)
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
    ULONG SequentialReadCount;                                              //0x30
    ULONG ReadAheadLength;                                                  //0x34
    union _LARGE_INTEGER ReadAheadOffset;                                   //0x38
    union _LARGE_INTEGER ReadAheadBeyondLastByte;                           //0x40
    ULONG ReadAheadSpinLock;                                                //0x48
    struct _LIST_ENTRY PrivateLinks;                                        //0x4c
    VOID* ReadAheadWorkItem;                                                //0x54
};
/* Used in */
// _SHARED_CACHE_MAP

