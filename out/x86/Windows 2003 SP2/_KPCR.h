#pragma once
/* ------------------ */

#include <_NT_TIB.h>
#include <_EXCEPTION_REGISTRATION_RECORD.h>
#include <_KPCR.h>
#include <_KPRCB.h>
#include <_KIDTENTRY.h>
#include <_KGDTENTRY.h>
#include <_KTSS.h>

//0xfe0 bytes (sizeof)
struct _KPCR
{
    union
    {
        struct _NT_TIB NtTib;                                               //0x0
        struct
        {
            struct _EXCEPTION_REGISTRATION_RECORD* Used_ExceptionList;      //0x0
            VOID* Used_StackBase;                                           //0x4
            VOID* PerfGlobalGroupMask;                                      //0x8
            VOID* TssCopy;                                                  //0xc
            ULONG ContextSwitches;                                          //0x10
            ULONG SetMemberCopy;                                            //0x14
            VOID* Used_Self;                                                //0x18
        };
    };
    struct _KPCR* SelfPcr;                                                  //0x1c
    struct _KPRCB* Prcb;                                                    //0x20
    UCHAR Irql;                                                             //0x24
    ULONG IRR;                                                              //0x28
    ULONG IrrActive;                                                        //0x2c
    ULONG IDR;                                                              //0x30
    VOID* KdVersionBlock;                                                   //0x34
    struct _KIDTENTRY* IDT;                                                 //0x38
    struct _KGDTENTRY* GDT;                                                 //0x3c
    struct _KTSS* TSS;                                                      //0x40
    USHORT MajorVersion;                                                    //0x44
    USHORT MinorVersion;                                                    //0x46
    ULONG SetMember;                                                        //0x48
    ULONG StallScaleFactor;                                                 //0x4c
    UCHAR SpareUnused;                                                      //0x50
    UCHAR Number;                                                           //0x51
    UCHAR Spare0;                                                           //0x52
    UCHAR SecondLevelCacheAssociativity;                                    //0x53
    ULONG VdmAlert;                                                         //0x54
    ULONG KernelReserved[14];                                               //0x58
    ULONG SecondLevelCacheSize;                                             //0x90
    ULONG HalReserved[16];                                                  //0x94
    ULONG InterruptMode;                                                    //0xd4
    UCHAR Spare1;                                                           //0xd8
    ULONG KernelReserved2[17];                                              //0xdc
    struct _KPRCB PrcbData;                                                 //0x120
};
/* Used in */
// _KPCR

