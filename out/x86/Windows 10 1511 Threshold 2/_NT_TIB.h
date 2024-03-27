#pragma once
/* ------------------ */

#include <_EXCEPTION_REGISTRATION_RECORD.h>
#include <_NT_TIB.h>

//0x1c bytes (sizeof)
struct _NT_TIB
{
    struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList;                   //0x0
    VOID* StackBase;                                                        //0x4
    VOID* StackLimit;                                                       //0x8
    VOID* SubSystemTib;                                                     //0xc
    union
    {
        VOID* FiberData;                                                    //0x10
        ULONG Version;                                                      //0x10
    };
    VOID* ArbitraryUserPointer;                                             //0x14
    struct _NT_TIB* Self;                                                   //0x18
};
/* Used in */
// _KPCR
// _NT_TIB
// _TEB

