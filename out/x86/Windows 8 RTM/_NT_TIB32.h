#pragma once
/* ------------------ */


//0x1c bytes (sizeof)
struct _NT_TIB32
{
    ULONG ExceptionList;                                                    //0x0
    ULONG StackBase;                                                        //0x4
    ULONG StackLimit;                                                       //0x8
    ULONG SubSystemTib;                                                     //0xc
    union
    {
        ULONG FiberData;                                                    //0x10
        ULONG Version;                                                      //0x10
    };
    ULONG ArbitraryUserPointer;                                             //0x14
    ULONG Self;                                                             //0x18
};
/* Used in */
// _TEB32

