#pragma once
/* ------------------ */

#include <_FILE_OBJECT.h>
#include <_LIST_ENTRY.h>
#include <_KEVENT.h>

//0x48 bytes (sizeof)
struct _DEFERRED_WRITE
{
    SHORT NodeTypeCode;                                                     //0x0
    SHORT NodeByteSize;                                                     //0x2
    struct _FILE_OBJECT* FileObject;                                        //0x8
    ULONG BytesToWrite;                                                     //0x10
    struct _LIST_ENTRY DeferredWriteLinks;                                  //0x18
    struct _KEVENT* Event;                                                  //0x28
    VOID (*PostRoutine)(VOID* arg1, VOID* arg2);                            //0x30
    VOID* Context1;                                                         //0x38
    VOID* Context2;                                                         //0x40
};
