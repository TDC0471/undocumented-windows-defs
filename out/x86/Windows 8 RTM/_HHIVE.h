#pragma once
/* ------------------ */

#include <_CELL_DATA.h>
#include <_HHIVE.h>
#include <CMP_OFFSET_ARRAY.h>
#include <_HBASE_BLOCK.h>
#include <_RTL_BITMAP.h>
#include <_DUAL.h>

//0x3a0 bytes (sizeof)
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
    ULONG BaseBlockAlloc;                                                   //0x30
    ULONG Cluster;                                                          //0x34
    UCHAR Flat;                                                             //0x38
    UCHAR ReadOnly;                                                         //0x39
    UCHAR DirtyFlag;                                                        //0x3a
    ULONG HvBinHeadersUse;                                                  //0x3c
    ULONG HvFreeCellsUse;                                                   //0x40
    ULONG HvUsedCellsUse;                                                   //0x44
    ULONG CmUsedCellsUse;                                                   //0x48
    ULONG HiveFlags;                                                        //0x4c
    ULONG CurrentLog;                                                       //0x50
    ULONG LogSize[2];                                                       //0x54
    ULONG RefreshCount;                                                     //0x5c
    ULONG StorageTypeCount;                                                 //0x60
    ULONG Version;                                                          //0x64
    struct _DUAL Storage[2];                                                //0x68
};
/* Used in */
// _CMHIVE
// _CM_KEY_CONTROL_BLOCK
// _CM_KEY_HASH
// _CM_KEY_REFERENCE
// _HHIVE
// _HIVE_LOAD_FAILURE

