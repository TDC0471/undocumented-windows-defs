#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_CHILD_LIST.h>
#include <_CM_KEY_REFERENCE.h>

//0x50 bytes (sizeof)
struct _CM_KEY_NODE
{
    USHORT Signature;                                                       //0x0
    USHORT Flags;                                                           //0x2
    union _LARGE_INTEGER LastWriteTime;                                     //0x4
    UCHAR AccessBits;                                                       //0xc
    UCHAR LayerSemantics:2;                                                 //0xd
    UCHAR Spare1:5;                                                         //0xd
    UCHAR InheritClass:1;                                                   //0xd
    USHORT Spare2;                                                          //0xe
    ULONG Parent;                                                           //0x10
    ULONG SubKeyCounts[2];                                                  //0x14
    union
    {
        struct
        {
            ULONG SubKeyLists[2];                                           //0x1c
            struct _CHILD_LIST ValueList;                                   //0x24
        };
        struct _CM_KEY_REFERENCE ChildHiveReference;                        //0x1c
    };
    ULONG Security;                                                         //0x2c
    ULONG Class;                                                            //0x30
    ULONG MaxNameLen:16;                                                    //0x34
    ULONG UserFlags:4;                                                      //0x34
    ULONG VirtControlFlags:4;                                               //0x34
    ULONG Debug:8;                                                          //0x34
    ULONG MaxClassLen;                                                      //0x38
    ULONG MaxValueNameLen;                                                  //0x3c
    ULONG MaxValueDataLen;                                                  //0x40
    ULONG WorkVar;                                                          //0x44
    USHORT NameLength;                                                      //0x48
    USHORT ClassLength;                                                     //0x4a
    WCHAR Name[1];                                                          //0x4c
};
/* Used in */
// _u

