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

//0x400 bytes (sizeof)
struct _HHIVE
{
    ULONG Signature;                                                        //0x0
    struct _CELL_DATA* (*GetCellRoutine)(struct _HHIVE* arg1, ULONG arg2, struct _HV_GET_CELL_CONTEXT* arg3); //0x4
    VOID (*ReleaseCellRoutine)(struct _HHIVE* arg1, struct _HV_GET_CELL_CONTEXT* arg2); //0x8
    VOID* (*Allocate)(ULONG arg1, UCHAR arg2, ULONG arg3);                  //0xc
    VOID (*Free)(VOID* arg1, ULONG arg2);                                   //0x10
    LONG (*FileWrite)(struct _HHIVE* arg1, ULONG arg2, struct CMP_OFFSET_ARRAY* arg3, ULONG arg4, ULONG arg5); //0x14
    LONG (*FileRead)(struct _HHIVE* arg1, ULONG arg2, ULONG arg3, VOID* arg4, ULONG arg5); //0x18
    VOID* HiveLoadFailure;                                                  //0x1c
    struct _HBASE_BLOCK* BaseBlock;                                         //0x20
    struct _CMSI_RW_LOCK FlusherLock;                                       //0x24
    struct _CMSI_RW_LOCK WriterLock;                                        //0x28
    struct _RTL_BITMAP DirtyVector;                                         //0x2c
    ULONG DirtyCount;                                                       //0x34
    ULONG DirtyAlloc;                                                       //0x38
    struct _RTL_BITMAP UnreconciledVector;                                  //0x3c
    ULONG UnreconciledCount;                                                //0x44
    ULONG BaseBlockAlloc;                                                   //0x48
    ULONG Cluster;                                                          //0x4c
    UCHAR Flat:1;                                                           //0x50
    UCHAR ReadOnly:1;                                                       //0x50
    UCHAR Reserved:6;                                                       //0x50
    UCHAR DirtyFlag;                                                        //0x51
    ULONG HvBinHeadersUse;                                                  //0x54
    ULONG HvFreeCellsUse;                                                   //0x58
    ULONG HvUsedCellsUse;                                                   //0x5c
    ULONG CmUsedCellsUse;                                                   //0x60
    ULONG HiveFlags;                                                        //0x64
    ULONG CurrentLog;                                                       //0x68
    ULONG CurrentLogSequence;                                               //0x6c
    ULONG CurrentLogMinimumSequence;                                        //0x70
    ULONG CurrentLogOffset;                                                 //0x74
    ULONG MinimumLogSequence;                                               //0x78
    ULONG LogFileSizeCap;                                                   //0x7c
    UCHAR LogDataPresent[2];                                                //0x80
    UCHAR PrimaryFileValid;                                                 //0x82
    UCHAR BaseBlockDirty;                                                   //0x83
    union _LARGE_INTEGER LastLogSwapTime;                                   //0x88
    union
    {
        struct
        {
            USHORT FirstLogFile:3;                                          //0x90
            USHORT SecondLogFile:3;                                         //0x90
            USHORT HeaderRecovered:1;                                       //0x90
            USHORT LegacyRecoveryIndicated:1;                               //0x90
            USHORT RecoveryInformationReserved:8;                           //0x90
        };
        USHORT RecoveryInformation;                                         //0x90
    };
    UCHAR LogEntriesRecovered[2];                                           //0x92
    ULONG RefreshCount;                                                     //0x94
    ULONG StorageTypeCount;                                                 //0x98
    ULONG Version;                                                          //0x9c
    struct _HVP_VIEW_MAP ViewMap;                                           //0xa0
    struct _DUAL Storage[2];                                                //0xc8
};
/* Used in */
// _CMHIVE
// _CM_KEY_CONTROL_BLOCK
// _CM_KEY_HASH
// _CM_KEY_REFERENCE
// _CM_UOW_SET_SD_DATA
// _HHIVE
// _HIVE_LOAD_FAILURE

