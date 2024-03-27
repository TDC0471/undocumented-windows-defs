#pragma once
/* ------------------ */

#include <_HHIVE.h>
#include <_CM_LOAD_FAILURE_TYPE.h>
#include <_CELL_DATA.h>
#include <_HBIN.h>
#include <_HCELL.h>
#include <_CM_PARSE_DEBUG_INFO.h>

//0x154 bytes (sizeof)
struct _HIVE_LOAD_FAILURE
{
    struct _HHIVE* Hive;                                                    //0x0
    USHORT Index;                                                           //0x4
    USHORT RecoverableIndex;                                                //0x6
    struct
    {
        enum _CM_LOAD_FAILURE_TYPE Failure;                                 //0x8
        LONG Status;                                                        //0xc
        ULONG Point;                                                        //0x10
    } Locations[8];                                                         //0x8
    struct
    {
        enum _CM_LOAD_FAILURE_TYPE Failure;                                 //0x68
        LONG Status;                                                        //0x6c
        ULONG Point;                                                        //0x70
    } RecoverableLocations[8];                                              //0x68
    struct
    {
        ULONG Action;                                                       //0xc8
        VOID* Handle;                                                       //0xcc
        LONG Status;                                                        //0xd0
    } RegistryIO;                                                           //0xc8
    struct
    {
        VOID* CheckStack;                                                   //0xd4
    } CheckRegistry2;                                                       //0xd4
    struct
    {
        ULONG Cell;                                                         //0xd8
        struct _CELL_DATA* CellPoint;                                       //0xdc
        VOID* RootPoint;                                                    //0xe0
        ULONG Index;                                                        //0xe4
    } CheckKey;                                                             //0xd8
    struct
    {
        struct _CELL_DATA* List;                                            //0xe8
        ULONG Index;                                                        //0xec
        ULONG Cell;                                                         //0xf0
        struct _CELL_DATA* CellPoint;                                       //0xf4
    } CheckValueList;                                                       //0xe8
    struct
    {
        ULONG Space;                                                        //0xf8
        ULONG MapPoint;                                                     //0xfc
        struct _HBIN* BinPoint;                                             //0x100
    } CheckHive;                                                            //0xf8
    struct
    {
        ULONG Space;                                                        //0x104
        ULONG MapPoint;                                                     //0x108
        struct _HBIN* BinPoint;                                             //0x10c
    } CheckHive1;                                                           //0x104
    struct
    {
        struct _HBIN* Bin;                                                  //0x110
        struct _HCELL* CellPoint;                                           //0x114
    } CheckBin;                                                             //0x110
    struct
    {
        ULONG FileOffset;                                                   //0x118
    } RecoverData;                                                          //0x118
    struct _CM_PARSE_DEBUG_INFO LinkDebug;                                  //0x11c
};
