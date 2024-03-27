#pragma once
/* ------------------ */

#include <_EXCEPTION_REGISTRATION_RECORD.h>
#include <_NT_TIB.h>

//0x38 bytes (sizeof)
struct _NT_TIB
{
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList;                   //0x0
    VOID* StackBase;                                                        //0x8
    VOID* StackLimit;                                                       //0x10
    VOID* SubSystemTib;                                                     //0x18
    union
    {
        VOID* FiberData;                                                    //0x20
        ULONG Version;                                                      //0x20
    };
    VOID* ArbitraryUserPointer;                                             //0x28
    struct _NT_TIB* Self;                                                   //0x30
};
/* Used in */
// _KPCR
// _NT_TIB
// _TEB

