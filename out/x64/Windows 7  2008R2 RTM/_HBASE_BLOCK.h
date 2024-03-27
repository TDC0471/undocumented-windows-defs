#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_GUID.h>

//0x1000 bytes (sizeof)
struct _HBASE_BLOCK
{
    ULONG Signature;                                                        //0x0
    ULONG Sequence1;                                                        //0x4
    ULONG Sequence2;                                                        //0x8
    union _LARGE_INTEGER TimeStamp;                                         //0xc
    ULONG Major;                                                            //0x14
    ULONG Minor;                                                            //0x18
    ULONG Type;                                                             //0x1c
    ULONG Format;                                                           //0x20
    ULONG RootCell;                                                         //0x24
    ULONG Length;                                                           //0x28
    ULONG Cluster;                                                          //0x2c
    UCHAR FileName[64];                                                     //0x30
    struct _GUID RmId;                                                      //0x70
    struct _GUID LogId;                                                     //0x80
    ULONG Flags;                                                            //0x90
    struct _GUID TmId;                                                      //0x94
    ULONG GuidSignature;                                                    //0xa4
    ULONG Reserved1[85];                                                    //0xa8
    ULONG CheckSum;                                                         //0x1fc
    ULONG Reserved2[882];                                                   //0x200
    struct _GUID ThawTmId;                                                  //0xfc8
    struct _GUID ThawRmId;                                                  //0xfd8
    struct _GUID ThawLogId;                                                 //0xfe8
    ULONG BootType;                                                         //0xff8
    ULONG BootRecover;                                                      //0xffc
};
/* Used in */
// _HHIVE

