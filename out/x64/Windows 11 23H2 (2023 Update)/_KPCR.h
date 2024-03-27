#pragma once
/* ------------------ */

#include <_NT_TIB.h>
#include <_KGDTENTRY64.h>
#include <_KTSS64.h>
#include <_KPCR.h>
#include <_KPRCB.h>
#include <_KSPIN_LOCK_QUEUE.h>
#include <_KIDTENTRY64.h>

//0x178 bytes (sizeof)
struct _KPCR
{
    union
    {
        struct _NT_TIB NtTib;                                               //0x0
        struct
        {
            union _KGDTENTRY64* GdtBase;                                    //0x0
            struct _KTSS64* TssBase;                                        //0x8
            ULONGLONG UserRsp;                                              //0x10
            struct _KPCR* Self;                                             //0x18
            struct _KPRCB* CurrentPrcb;                                     //0x20
            struct _KSPIN_LOCK_QUEUE* LockArray;                            //0x28
            VOID* Used_Self;                                                //0x30
        };
    };
    union _KIDTENTRY64* IdtBase;                                            //0x38
    ULONGLONG Unused[2];                                                    //0x40
    UCHAR Irql;                                                             //0x50
    UCHAR SecondLevelCacheAssociativity;                                    //0x51
    UCHAR ObsoleteNumber;                                                   //0x52
    UCHAR Fill0;                                                            //0x53
    ULONG Unused0[3];                                                       //0x54
    USHORT MajorVersion;                                                    //0x60
    USHORT MinorVersion;                                                    //0x62
    ULONG StallScaleFactor;                                                 //0x64
    VOID* Unused1[3];                                                       //0x68
    ULONG KernelReserved[15];                                               //0x80
    ULONG SecondLevelCacheSize;                                             //0xbc
    ULONG HalReserved[16];                                                  //0xc0
    ULONG Unused2;                                                          //0x100
    VOID* KdVersionBlock;                                                   //0x108
    VOID* Unused3;                                                          //0x110
    ULONG PcrAlign1[24];                                                    //0x118
};
/* Used in */
// _KIST_BASE_FRAME
// _KPCR

