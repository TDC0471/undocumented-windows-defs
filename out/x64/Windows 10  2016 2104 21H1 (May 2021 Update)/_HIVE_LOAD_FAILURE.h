#pragma once
/* ------------------ */

#include <_HHIVE.h>
#include <_CM_LOAD_FAILURE_TYPE.h>
#include <_CELL_DATA.h>
#include <_HBIN.h>
#include <_HCELL.h>
#include <_CM_PARSE_DEBUG_INFO.h>

//0x1b0 bytes (sizeof)
struct _HIVE_LOAD_FAILURE
{
    struct _HHIVE* Hive;                                                    //0x0
    USHORT Index;                                                           //0x8
    USHORT RecoverableIndex;                                                //0xa
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
        ULONG Action;                                                       //0xd0
        VOID* Handle;                                                       //0xd8
        LONG Status;                                                        //0xe0
    } RegistryIO;                                                           //0xd0
    struct
    {
        VOID* CheckStack;                                                   //0xe8
    } CheckRegistry2;                                                       //0xe8
    struct
    {
        ULONG Cell;                                                         //0xf0
        struct _CELL_DATA* CellPoint;                                       //0xf8
        VOID* RootPoint;                                                    //0x100
        ULONG Index;                                                        //0x108
    } CheckKey;                                                             //0xf0
    struct
    {
        struct _CELL_DATA* List;                                            //0x110
        ULONG Index;                                                        //0x118
        ULONG Cell;                                                         //0x11c
        struct _CELL_DATA* CellPoint;                                       //0x120
    } CheckValueList;                                                       //0x110
    struct
    {
        ULONG Space;                                                        //0x128
        ULONG MapPoint;                                                     //0x12c
        struct _HBIN* BinPoint;                                             //0x130
    } CheckHive;                                                            //0x128
    struct
    {
        ULONG Space;                                                        //0x138
        ULONG MapPoint;                                                     //0x13c
        struct _HBIN* BinPoint;                                             //0x140
    } CheckHive1;                                                           //0x138
    struct
    {
        struct _HBIN* Bin;                                                  //0x148
        struct _HCELL* CellPoint;                                           //0x150
    } CheckBin;                                                             //0x148
    struct
    {
        ULONG FileOffset;                                                   //0x158
    } RecoverData;                                                          //0x158
    struct _CM_PARSE_DEBUG_INFO LinkDebug;                                  //0x160
};
