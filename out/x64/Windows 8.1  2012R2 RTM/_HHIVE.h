#pragma once
/* ------------------ */

#include <_CELL_DATA.h>
#include <_HHIVE.h>
#include <CMP_OFFSET_ARRAY.h>
#include <_HBASE_BLOCK.h>
#include <_RTL_BITMAP.h>
#include <_DUAL.h>

//0x5a0 bytes (sizeof)
struct _HHIVE
{
    ULONG Signature;                                                        //0x0
    struct _CELL_DATA* (*GetCellRoutine)(struct _HHIVE* arg1, ULONG arg2);  //0x8
    VOID* (*Allocate)(ULONG arg1, UCHAR arg2, ULONG arg3);                  //0x10
    VOID (*Free)(VOID* arg1, ULONG arg2);                                   //0x18
    UCHAR (*FileWrite)(struct _HHIVE* arg1, ULONG arg2, struct CMP_OFFSET_ARRAY* arg3, ULONG arg4, ULONG* arg5, ULONG arg6); //0x20
    UCHAR (*FileRead)(struct _HHIVE* arg1, ULONG arg2, ULONG* arg3, VOID* arg4, ULONG arg5); //0x28
    VOID* HiveLoadFailure;                                                  //0x30
    struct _HBASE_BLOCK* BaseBlock;                                         //0x38
    struct _RTL_BITMAP DirtyVector;                                         //0x40
    ULONG DirtyCount;                                                       //0x50
    ULONG DirtyAlloc;                                                       //0x54
    struct _RTL_BITMAP UnreconciledVector;                                  //0x58
    ULONG UnreconciledCount;                                                //0x68
    ULONG BaseBlockAlloc;                                                   //0x6c
    ULONG Cluster;                                                          //0x70
    UCHAR Flat:1;                                                           //0x74
    UCHAR ReadOnly:1;                                                       //0x74
    UCHAR Reserved:6;                                                       //0x74
    UCHAR DirtyFlag;                                                        //0x75
    ULONG HvBinHeadersUse;                                                  //0x78
    ULONG HvFreeCellsUse;                                                   //0x7c
    ULONG HvUsedCellsUse;                                                   //0x80
    ULONG CmUsedCellsUse;                                                   //0x84
    ULONG HiveFlags;                                                        //0x88
    ULONG CurrentLog;                                                       //0x8c
    ULONG CurrentLogSequence;                                               //0x90
    ULONG CurrentLogOffset;                                                 //0x94
    ULONG MinimumLogSequence;                                               //0x98
    UCHAR LogDataPresent[2];                                                //0x9c
    UCHAR PrimaryFileValid;                                                 //0x9e
    UCHAR BaseBlockDirty;                                                   //0x9f
    union
    {
        struct
        {
            USHORT FirstLogFile:3;                                          //0xa0
            USHORT SecondLogFile:3;                                         //0xa0
            USHORT HeaderRecovered:1;                                       //0xa0
            USHORT LegacyRecoveryIndicated:1;                               //0xa0
            USHORT RecoveryInformationReserved:8;                           //0xa0
        };
        USHORT RecoveryInformation;                                         //0xa0
    };
    UCHAR LogEntriesRecovered[2];                                           //0xa2
    ULONG RefreshCount;                                                     //0xa4
    ULONG StorageTypeCount;                                                 //0xa8
    ULONG Version;                                                          //0xac
    struct _DUAL Storage[2];                                                //0xb0
};
/* Used in */
// _CMHIVE
// _CM_KEY_CONTROL_BLOCK
// _CM_KEY_HASH
// _CM_KEY_REFERENCE
// _HHIVE
// _HIVE_LOAD_FAILURE

