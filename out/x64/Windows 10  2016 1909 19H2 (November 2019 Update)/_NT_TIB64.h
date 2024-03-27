#pragma once
/* ------------------ */


//0x38 bytes (sizeof)
struct _NT_TIB64
{
    ULONGLONG ExceptionList;                                                //0x0
    ULONGLONG StackBase;                                                    //0x8
    ULONGLONG StackLimit;                                                   //0x10
    ULONGLONG SubSystemTib;                                                 //0x18
    union
    {
        ULONGLONG FiberData;                                                //0x20
        ULONG Version;                                                      //0x20
    };
    ULONGLONG ArbitraryUserPointer;                                         //0x28
    ULONGLONG Self;                                                         //0x30
};
/* Used in */
// _TEB64

