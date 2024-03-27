#pragma once
/* ------------------ */

#include <_HHIVE.h>
#include <_CM_LOAD_FAILURE_TYPE.h>
#include <_CELL_DATA.h>
#include <_HBIN.h>
#include <_HCELL.h>

//0x120 bytes (sizeof)
struct _HIVE_LOAD_FAILURE
{
    struct _HHIVE* Hive;                                                    //0x0
    ULONG Index;                                                            //0x4
    ULONG RecoverableIndex;                                                 //0x8
    struct
    {
        enum _CM_LOAD_FAILURE_TYPE Failure;                                 //0xc
        LONG Status;                                                        //0x10
        ULONG Point;                                                        //0x14
    } Locations[8];                                                         //0xc
    struct
    {
        enum _CM_LOAD_FAILURE_TYPE Failure;                                 //0x6c
        LONG Status;                                                        //0x70
        ULONG Point;                                                        //0x74
    } RecoverableLocations[8];                                              //0x6c
    struct
    {
        ULONG Action;                                                       //0xcc
        VOID* Handle;                                                       //0xd0
        LONG Status;                                                        //0xd4
    } RegistryIO;                                                           //0xcc
    struct
    {
        VOID* CheckStack;                                                   //0xd8
    } CheckRegistry2;                                                       //0xd8
    struct
    {
        ULONG Cell;                                                         //0xdc
        struct _CELL_DATA* CellPoint;                                       //0xe0
        VOID* RootPoint;                                                    //0xe4
        ULONG Index;                                                        //0xe8
    } CheckKey;                                                             //0xdc
    struct
    {
        struct _CELL_DATA* List;                                            //0xec
        ULONG Index;                                                        //0xf0
        ULONG Cell;                                                         //0xf4
        struct _CELL_DATA* CellPoint;                                       //0xf8
    } CheckValueList;                                                       //0xec
    struct
    {
        ULONG Space;                                                        //0xfc
        ULONG MapPoint;                                                     //0x100
        struct _HBIN* BinPoint;                                             //0x104
    } CheckHive;                                                            //0xfc
    struct
    {
        ULONG Space;                                                        //0x108
        ULONG MapPoint;                                                     //0x10c
        struct _HBIN* BinPoint;                                             //0x110
    } CheckHive1;                                                           //0x108
    struct
    {
        struct _HBIN* Bin;                                                  //0x114
        struct _HCELL* CellPoint;                                           //0x118
    } CheckBin;                                                             //0x114
    struct
    {
        ULONG FileOffset;                                                   //0x11c
    } RecoverData;                                                          //0x11c
};
