#pragma once
/* ------------------ */

#include <_CELL_DATA.h>
#include <_HHIVE.h>
#include <CMP_OFFSET_ARRAY.h>
#include <_LARGE_INTEGER.h>
#include <_HBASE_BLOCK.h>
#include <_RTL_BITMAP.h>
#include <_DUAL.h>

//0x2e8 bytes (sizeof)
struct _HHIVE
{
    ULONG Signature;                                                        //0x0
    struct _CELL_DATA* (*GetCellRoutine)(struct _HHIVE* arg1, ULONG arg2);  //0x4
    VOID (*ReleaseCellRoutine)(struct _HHIVE* arg1, ULONG arg2);            //0x8
    VOID* (*Allocate)(ULONG arg1, UCHAR arg2, ULONG arg3);                  //0xc
    VOID (*Free)(VOID* arg1, ULONG arg2);                                   //0x10
    UCHAR (*FileSetSize)(struct _HHIVE* arg1, ULONG arg2, ULONG arg3, ULONG arg4); //0x14
    UCHAR (*FileWrite)(struct _HHIVE* arg1, ULONG arg2, struct CMP_OFFSET_ARRAY* arg3, ULONG arg4, ULONG* arg5); //0x18
    UCHAR (*FileRead)(struct _HHIVE* arg1, ULONG arg2, ULONG* arg3, VOID* arg4, ULONG arg5); //0x1c
    UCHAR (*FileFlush)(struct _HHIVE* arg1, ULONG arg2, union _LARGE_INTEGER* arg3, ULONG arg4); //0x20
    struct _HBASE_BLOCK* BaseBlock;                                         //0x24
    struct _RTL_BITMAP DirtyVector;                                         //0x28
    ULONG DirtyCount;                                                       //0x30
    ULONG DirtyAlloc;                                                       //0x34
    ULONG BaseBlockAlloc;                                                   //0x38
    ULONG Cluster;                                                          //0x3c
    UCHAR Flat;                                                             //0x40
    UCHAR ReadOnly;                                                         //0x41
    UCHAR DirtyFlag;                                                        //0x42
    ULONG HvBinHeadersUse;                                                  //0x44
    ULONG HvFreeCellsUse;                                                   //0x48
    ULONG HvUsedCellsUse;                                                   //0x4c
    ULONG CmUsedCellsUse;                                                   //0x50
    ULONG HiveFlags;                                                        //0x54
    ULONG CurrentLog;                                                       //0x58
    ULONG LogSize[2];                                                       //0x5c
    ULONG RefreshCount;                                                     //0x64
    ULONG StorageTypeCount;                                                 //0x68
    ULONG Version;                                                          //0x6c
    struct _DUAL Storage[2];                                                //0x70
};
/* Used in */
// _CMHIVE
// _CM_KEY_CONTROL_BLOCK
// _CM_KEY_HASH
// _CM_KEY_REFERENCE
// _HHIVE

