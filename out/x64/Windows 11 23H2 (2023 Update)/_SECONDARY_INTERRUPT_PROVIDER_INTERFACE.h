#pragma once
/* ------------------ */

#include <_DRIVER_OBJECT.h>

//0x58 bytes (sizeof)
struct _SECONDARY_INTERRUPT_PROVIDER_INTERFACE
{
    USHORT Size;                                                            //0x0
    USHORT Version;                                                         //0x2
    VOID* Context;                                                          //0x8
    ULONG GsivBase;                                                         //0x10
    USHORT GsivSize;                                                        //0x14
    struct _DRIVER_OBJECT* DriverObject;                                    //0x18
    VOID* Reserved1;                                                        //0x20
    VOID* Reserved2;                                                        //0x28
    VOID* Reserved3;                                                        //0x30
    VOID* Reserved4;                                                        //0x38
    VOID* Reserved5;                                                        //0x40
    VOID* Reserved6;                                                        //0x48
    VOID* Reserved7;                                                        //0x50
};
/* Used in */
// _SECONDARY_IC_LIST_ENTRY

