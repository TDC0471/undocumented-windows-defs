#pragma once
/* ------------------ */

#include <_CELL_DATA.h>
#include <_HHIVE.h>
#include <_HV_GET_CELL_CONTEXT.h>
#include <CMP_OFFSET_ARRAY.h>
#include <_HBASE_BLOCK.h>
#include <_RTL_BITMAP.h>
#include <_LARGE_INTEGER.h>
#include <_HVIEW_MAP.h>
#include <_DUAL.h>

//0x6f0 bytes (sizeof)
struct _HHIVE
{
    ULONG Signature;                                                        //0x0
    struct _CELL_DATA* (*GetCellRoutine)(struct _HHIVE* arg1, ULONG arg2, struct _HV_GET_CELL_CONTEXT* arg3); //0x4
    VOID (*ReleaseCellRoutine)(struct _HHIVE* arg1, struct _HV_GET_CELL_CONTEXT* arg2); //0x8
    VOID* (*Allocate)(ULONG arg1, UCHAR arg2, ULONG arg3);                  //0xc
    VOID (*Free)(VOID* arg1, ULONG arg2);                                   //0x10
    UCHAR (*FileWrite)(struct _HHIVE* arg1, ULONG arg2, struct CMP_OFFSET_ARRAY* arg3, ULONG arg4, ULONG* arg5, ULONG arg6); //0x14
    UCHAR (*FileRead)(struct _HHIVE* arg1, ULONG arg2, ULONG* arg3, VOID* arg4, ULONG arg5); //0x18
    VOID* HiveLoadFailure;                                                  //0x1c
    struct _HBASE_BLOCK* BaseBlock;                                         //0x20
    struct _RTL_BITMAP DirtyVector;                                         //0x24
    ULONG DirtyCount;                                                       //0x2c
    ULONG DirtyAlloc;                                                       //0x30
    struct _RTL_BITMAP UnreconciledVector;                                  //0x34
    ULONG UnreconciledCount;                                                //0x3c
    ULONG BaseBlockAlloc;                                                   //0x40
    ULONG Cluster;                                                          //0x44
    UCHAR Flat:1;                                                           //0x48
    UCHAR ReadOnly:1;                                                       //0x48
    UCHAR SystemCacheBacked:1;                                              //0x48
    UCHAR Reserved:5;                                                       //0x48
    UCHAR DirtyFlag;                                                        //0x49
    ULONG HvBinHeadersUse;                                                  //0x4c
    ULONG HvFreeCellsUse;                                                   //0x50
    ULONG HvUsedCellsUse;                                                   //0x54
    ULONG CmUsedCellsUse;                                                   //0x58
    ULONG HiveFlags;                                                        //0x5c
    ULONG CurrentLog;                                                       //0x60
    ULONG CurrentLogSequence;                                               //0x64
    ULONG CurrentLogMinimumSequence;                                        //0x68
    ULONG CurrentLogOffset;                                                 //0x6c
    ULONG MinimumLogSequence;                                               //0x70
    ULONG LogFileSizeCap;                                                   //0x74
    UCHAR LogDataPresent[2];                                                //0x78
    UCHAR PrimaryFileValid;                                                 //0x7a
    UCHAR BaseBlockDirty;                                                   //0x7b
    union _LARGE_INTEGER LastLogSwapTime;                                   //0x80
    union
    {
        struct
        {
            USHORT FirstLogFile:3;                                          //0x88
            USHORT SecondLogFile:3;                                         //0x88
            USHORT HeaderRecovered:1;                                       //0x88
            USHORT LegacyRecoveryIndicated:1;                               //0x88
            USHORT RecoveryInformationReserved:8;                           //0x88
        };
        USHORT RecoveryInformation;                                         //0x88
    };
    UCHAR LogEntriesRecovered[2];                                           //0x8a
    ULONG RefreshCount;                                                     //0x8c
    ULONG StorageTypeCount;                                                 //0x90
    ULONG Version;                                                          //0x94
    struct _HVIEW_MAP ViewMap;                                              //0x98
    struct _DUAL Storage[2];                                                //0x3b8
};
/* Used in */
// _CMHIVE
// _CM_KEY_CONTROL_BLOCK
// _CM_KEY_HASH
// _CM_KEY_REFERENCE
// _HHIVE
// _HIVE_LOAD_FAILURE

