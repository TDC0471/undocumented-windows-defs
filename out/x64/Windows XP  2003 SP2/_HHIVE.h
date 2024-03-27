#pragma once
/* ------------------ */

#include <_CELL_DATA.h>
#include <_HHIVE.h>
#include <CMP_OFFSET_ARRAY.h>
#include <_LARGE_INTEGER.h>
#include <_HBASE_BLOCK.h>
#include <_RTL_BITMAP.h>
#include <_DUAL.h>

//0x578 bytes (sizeof)
struct _HHIVE
{
    ULONG Signature;                                                        //0x0
    struct _CELL_DATA* (*GetCellRoutine)(struct _HHIVE* arg1, ULONG arg2);  //0x8
    VOID (*ReleaseCellRoutine)(struct _HHIVE* arg1, ULONG arg2);            //0x10
    VOID* (*Allocate)(ULONG arg1, UCHAR arg2, ULONG arg3);                  //0x18
    VOID (*Free)(VOID* arg1, ULONG arg2);                                   //0x20
    UCHAR (*FileSetSize)(struct _HHIVE* arg1, ULONG arg2, ULONG arg3, ULONG arg4); //0x28
    UCHAR (*FileWrite)(struct _HHIVE* arg1, ULONG arg2, struct CMP_OFFSET_ARRAY* arg3, ULONG arg4, ULONG* arg5); //0x30
    UCHAR (*FileRead)(struct _HHIVE* arg1, ULONG arg2, ULONG* arg3, VOID* arg4, ULONG arg5); //0x38
    UCHAR (*FileFlush)(struct _HHIVE* arg1, ULONG arg2, union _LARGE_INTEGER* arg3, ULONG arg4); //0x40
    struct _HBASE_BLOCK* BaseBlock;                                         //0x48
    struct _RTL_BITMAP DirtyVector;                                         //0x50
    ULONG DirtyCount;                                                       //0x60
    ULONG DirtyAlloc;                                                       //0x64
    ULONG BaseBlockAlloc;                                                   //0x68
    ULONG Cluster;                                                          //0x6c
    UCHAR Flat;                                                             //0x70
    UCHAR ReadOnly;                                                         //0x71
    UCHAR Log;                                                              //0x72
    UCHAR DirtyFlag;                                                        //0x73
    ULONG HiveFlags;                                                        //0x74
    ULONG LogSize;                                                          //0x78
    ULONG RefreshCount;                                                     //0x7c
    ULONG StorageTypeCount;                                                 //0x80
    ULONG Version;                                                          //0x84
    struct _DUAL Storage[2];                                                //0x88
};
/* Used in */
// _CMHIVE
// _CM_KEY_CONTROL_BLOCK
// _CM_KEY_HASH
// _CM_KEY_REFERENCE
// _HHIVE

