#pragma once
/* ------------------ */

#include <_CELL_DATA.h>
#include <_HHIVE.h>
#include <_HV_GET_CELL_CONTEXT.h>
#include <CMP_OFFSET_ARRAY.h>
#include <_HBASE_BLOCK.h>
#include <_CMSI_RW_LOCK.h>
#include <_RTL_BITMAP.h>
#include <_LARGE_INTEGER.h>
#include <_HVP_VIEW_MAP.h>
#include <_DUAL.h>

//0x608 bytes (sizeof)
struct _HHIVE
{
    ULONG Signature;                                                        //0x0
    struct _CELL_DATA* (*GetCellRoutine)(struct _HHIVE* arg1, ULONG arg2, struct _HV_GET_CELL_CONTEXT* arg3); //0x8
    VOID (*ReleaseCellRoutine)(struct _HHIVE* arg1, struct _HV_GET_CELL_CONTEXT* arg2); //0x10
    VOID* (*Allocate)(ULONG arg1, UCHAR arg2, ULONG arg3);                  //0x18
    VOID (*Free)(VOID* arg1, ULONG arg2);                                   //0x20
    LONG (*FileWrite)(struct _HHIVE* arg1, ULONG arg2, struct CMP_OFFSET_ARRAY* arg3, ULONG arg4, ULONG arg5); //0x28
    LONG (*FileRead)(struct _HHIVE* arg1, ULONG arg2, ULONG arg3, VOID* arg4, ULONG arg5); //0x30
    VOID* HiveLoadFailure;                                                  //0x38
    struct _HBASE_BLOCK* BaseBlock;                                         //0x40
    struct _CMSI_RW_LOCK FlusherLock;                                       //0x48
    struct _CMSI_RW_LOCK WriterLock;                                        //0x50
    struct _RTL_BITMAP DirtyVector;                                         //0x58
    ULONG DirtyCount;                                                       //0x68
    ULONG DirtyAlloc;                                                       //0x6c
    struct _RTL_BITMAP UnreconciledVector;                                  //0x70
    ULONG UnreconciledCount;                                                //0x80
    ULONG BaseBlockAlloc;                                                   //0x84
    ULONG Cluster;                                                          //0x88
    UCHAR Flat:1;                                                           //0x8c
    UCHAR ReadOnly:1;                                                       //0x8c
    UCHAR Reserved:6;                                                       //0x8c
    UCHAR DirtyFlag;                                                        //0x8d
    ULONG HvBinHeadersUse;                                                  //0x90
    ULONG HvFreeCellsUse;                                                   //0x94
    ULONG HvUsedCellsUse;                                                   //0x98
    ULONG CmUsedCellsUse;                                                   //0x9c
    ULONG HiveFlags;                                                        //0xa0
    ULONG FlusherFlags;                                                     //0xa4
    ULONG CurrentLog;                                                       //0xa8
    ULONG CurrentLogSequence;                                               //0xac
    ULONG CurrentLogMinimumSequence;                                        //0xb0
    ULONG CurrentLogOffset;                                                 //0xb4
    ULONG MinimumLogSequence;                                               //0xb8
    ULONG LogFileSizeCap;                                                   //0xbc
    UCHAR LogDataPresent[2];                                                //0xc0
    UCHAR PrimaryFileValid;                                                 //0xc2
    UCHAR BaseBlockDirty;                                                   //0xc3
    union _LARGE_INTEGER LastLogSwapTime;                                   //0xc8
    union
    {
        struct
        {
            USHORT FirstLogFile:3;                                          //0xd0
            USHORT SecondLogFile:3;                                         //0xd0
            USHORT HeaderRecovered:1;                                       //0xd0
            USHORT LegacyRecoveryIndicated:1;                               //0xd0
            USHORT RecoveryInformationReserved:8;                           //0xd0
        };
        USHORT RecoveryInformation;                                         //0xd0
    };
    UCHAR LogEntriesRecovered[2];                                           //0xd2
    ULONG RefreshCount;                                                     //0xd4
    ULONG StorageTypeCount;                                                 //0xd8
    ULONG Version;                                                          //0xdc
    struct _HVP_VIEW_MAP ViewMap;                                           //0xe0
    struct _DUAL Storage[2];                                                //0x118
};
/* Used in */
// _CMHIVE
// _CM_KEY_CONTROL_BLOCK
// _CM_KEY_HASH
// _CM_KEY_REFERENCE
// _HHIVE

