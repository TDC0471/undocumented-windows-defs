#pragma once
/* ------------------ */

#include <_CELL_DATA.h>
#include <_HHIVE.h>
#include <CMP_OFFSET_ARRAY.h>
#include <_HBASE_BLOCK.h>
#include <_RTL_BITMAP.h>
#include <_DUAL.h>

//0x3bc bytes (sizeof)
struct _HHIVE
{
    ULONG Signature;                                                        //0x0
    struct _CELL_DATA* (*GetCellRoutine)(struct _HHIVE* arg1, ULONG arg2);  //0x4
    VOID* (*Allocate)(ULONG arg1, UCHAR arg2, ULONG arg3);                  //0x8
    VOID (*Free)(VOID* arg1, ULONG arg2);                                   //0xc
    UCHAR (*FileWrite)(struct _HHIVE* arg1, ULONG arg2, struct CMP_OFFSET_ARRAY* arg3, ULONG arg4, ULONG* arg5, ULONG arg6); //0x10
    UCHAR (*FileRead)(struct _HHIVE* arg1, ULONG arg2, ULONG* arg3, VOID* arg4, ULONG arg5); //0x14
    VOID* HiveLoadFailure;                                                  //0x18
    struct _HBASE_BLOCK* BaseBlock;                                         //0x1c
    struct _RTL_BITMAP DirtyVector;                                         //0x20
    ULONG DirtyCount;                                                       //0x28
    ULONG DirtyAlloc;                                                       //0x2c
    struct _RTL_BITMAP UnreconciledVector;                                  //0x30
    ULONG UnreconciledCount;                                                //0x38
    ULONG BaseBlockAlloc;                                                   //0x3c
    ULONG Cluster;                                                          //0x40
    UCHAR Flat:1;                                                           //0x44
    UCHAR ReadOnly:1;                                                       //0x44
    UCHAR Reserved:6;                                                       //0x44
    UCHAR DirtyFlag;                                                        //0x45
    ULONG HvBinHeadersUse;                                                  //0x48
    ULONG HvFreeCellsUse;                                                   //0x4c
    ULONG HvUsedCellsUse;                                                   //0x50
    ULONG CmUsedCellsUse;                                                   //0x54
    ULONG HiveFlags;                                                        //0x58
    ULONG CurrentLog;                                                       //0x5c
    ULONG CurrentLogSequence;                                               //0x60
    ULONG CurrentLogOffset;                                                 //0x64
    ULONG MinimumLogSequence;                                               //0x68
    ULONG LogFileSizeCap;                                                   //0x6c
    UCHAR LogDataPresent[2];                                                //0x70
    UCHAR PrimaryFileValid;                                                 //0x72
    UCHAR BaseBlockDirty;                                                   //0x73
    union
    {
        struct
        {
            USHORT FirstLogFile:3;                                          //0x74
            USHORT SecondLogFile:3;                                         //0x74
            USHORT HeaderRecovered:1;                                       //0x74
            USHORT LegacyRecoveryIndicated:1;                               //0x74
            USHORT RecoveryInformationReserved:8;                           //0x74
        };
        USHORT RecoveryInformation;                                         //0x74
    };
    UCHAR LogEntriesRecovered[2];                                           //0x76
    ULONG RefreshCount;                                                     //0x78
    ULONG StorageTypeCount;                                                 //0x7c
    ULONG Version;                                                          //0x80
    struct _DUAL Storage[2];                                                //0x84
};
/* Used in */
// _CMHIVE
// _CM_KEY_CONTROL_BLOCK
// _CM_KEY_HASH
// _CM_KEY_REFERENCE
// _HHIVE
// _HIVE_LOAD_FAILURE

