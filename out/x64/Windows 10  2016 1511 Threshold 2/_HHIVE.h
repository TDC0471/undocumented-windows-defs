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

//0xa68 bytes (sizeof)
struct _HHIVE
{
    ULONG Signature;                                                        //0x0
    struct _CELL_DATA* (*GetCellRoutine)(struct _HHIVE* arg1, ULONG arg2, struct _HV_GET_CELL_CONTEXT* arg3); //0x8
    VOID (*ReleaseCellRoutine)(struct _HHIVE* arg1, struct _HV_GET_CELL_CONTEXT* arg2); //0x10
    VOID* (*Allocate)(ULONG arg1, UCHAR arg2, ULONG arg3);                  //0x18
    VOID (*Free)(VOID* arg1, ULONG arg2);                                   //0x20
    UCHAR (*FileWrite)(struct _HHIVE* arg1, ULONG arg2, struct CMP_OFFSET_ARRAY* arg3, ULONG arg4, ULONG* arg5, ULONG arg6); //0x28
    UCHAR (*FileRead)(struct _HHIVE* arg1, ULONG arg2, ULONG* arg3, VOID* arg4, ULONG arg5); //0x30
    VOID* HiveLoadFailure;                                                  //0x38
    struct _HBASE_BLOCK* BaseBlock;                                         //0x40
    struct _RTL_BITMAP DirtyVector;                                         //0x48
    ULONG DirtyCount;                                                       //0x58
    ULONG DirtyAlloc;                                                       //0x5c
    struct _RTL_BITMAP UnreconciledVector;                                  //0x60
    ULONG UnreconciledCount;                                                //0x70
    ULONG BaseBlockAlloc;                                                   //0x74
    ULONG Cluster;                                                          //0x78
    UCHAR Flat:1;                                                           //0x7c
    UCHAR ReadOnly:1;                                                       //0x7c
    UCHAR SystemCacheBacked:1;                                              //0x7c
    UCHAR Reserved:5;                                                       //0x7c
    UCHAR DirtyFlag;                                                        //0x7d
    ULONG HvBinHeadersUse;                                                  //0x80
    ULONG HvFreeCellsUse;                                                   //0x84
    ULONG HvUsedCellsUse;                                                   //0x88
    ULONG CmUsedCellsUse;                                                   //0x8c
    ULONG HiveFlags;                                                        //0x90
    ULONG CurrentLog;                                                       //0x94
    ULONG CurrentLogSequence;                                               //0x98
    ULONG CurrentLogMinimumSequence;                                        //0x9c
    ULONG CurrentLogOffset;                                                 //0xa0
    ULONG MinimumLogSequence;                                               //0xa4
    ULONG LogFileSizeCap;                                                   //0xa8
    UCHAR LogDataPresent[2];                                                //0xac
    UCHAR PrimaryFileValid;                                                 //0xae
    UCHAR BaseBlockDirty;                                                   //0xaf
    union _LARGE_INTEGER LastLogSwapTime;                                   //0xb0
    union
    {
        struct
        {
            USHORT FirstLogFile:3;                                          //0xb8
            USHORT SecondLogFile:3;                                         //0xb8
            USHORT HeaderRecovered:1;                                       //0xb8
            USHORT LegacyRecoveryIndicated:1;                               //0xb8
            USHORT RecoveryInformationReserved:8;                           //0xb8
        };
        USHORT RecoveryInformation;                                         //0xb8
    };
    UCHAR LogEntriesRecovered[2];                                           //0xba
    ULONG RefreshCount;                                                     //0xbc
    ULONG StorageTypeCount;                                                 //0xc0
    ULONG Version;                                                          //0xc4
    struct _HVIEW_MAP ViewMap;                                              //0xc8
    struct _DUAL Storage[2];                                                //0x578
};
/* Used in */
// _CMHIVE
// _CM_KEY_CONTROL_BLOCK
// _CM_KEY_HASH
// _CM_KEY_REFERENCE
// _HHIVE
// _HIVE_LOAD_FAILURE

