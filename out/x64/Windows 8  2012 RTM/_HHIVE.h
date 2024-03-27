#pragma once
/* ------------------ */

#include <_CELL_DATA.h>
#include <_HHIVE.h>
#include <CMP_OFFSET_ARRAY.h>
#include <_HBASE_BLOCK.h>
#include <_RTL_BITMAP.h>
#include <_DUAL.h>

//0x580 bytes (sizeof)
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
    ULONG BaseBlockAlloc;                                                   //0x58
    ULONG Cluster;                                                          //0x5c
    UCHAR Flat;                                                             //0x60
    UCHAR ReadOnly;                                                         //0x61
    UCHAR DirtyFlag;                                                        //0x62
    ULONG HvBinHeadersUse;                                                  //0x64
    ULONG HvFreeCellsUse;                                                   //0x68
    ULONG HvUsedCellsUse;                                                   //0x6c
    ULONG CmUsedCellsUse;                                                   //0x70
    ULONG HiveFlags;                                                        //0x74
    ULONG CurrentLog;                                                       //0x78
    ULONG LogSize[2];                                                       //0x7c
    ULONG RefreshCount;                                                     //0x84
    ULONG StorageTypeCount;                                                 //0x88
    ULONG Version;                                                          //0x8c
    struct _DUAL Storage[2];                                                //0x90
};
/* Used in */
// _CMHIVE
// _CM_KEY_CONTROL_BLOCK
// _CM_KEY_HASH
// _CM_KEY_REFERENCE
// _HHIVE
// _HIVE_LOAD_FAILURE

