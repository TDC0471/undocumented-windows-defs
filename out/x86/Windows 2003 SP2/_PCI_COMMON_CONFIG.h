#pragma once
/* ------------------ */

#include <_PCI_HEADER_TYPE_0.h>
#include <_PCI_HEADER_TYPE_1.h>
#include <_PCI_HEADER_TYPE_2.h>

//0x100 bytes (sizeof)
struct _PCI_COMMON_CONFIG
{
    USHORT VendorID;                                                        //0x0
    USHORT DeviceID;                                                        //0x2
    USHORT Command;                                                         //0x4
    USHORT Status;                                                          //0x6
    UCHAR RevisionID;                                                       //0x8
    UCHAR ProgIf;                                                           //0x9
    UCHAR SubClass;                                                         //0xa
    UCHAR BaseClass;                                                        //0xb
    UCHAR CacheLineSize;                                                    //0xc
    UCHAR LatencyTimer;                                                     //0xd
    UCHAR HeaderType;                                                       //0xe
    UCHAR BIST;                                                             //0xf
    union
    {
        struct _PCI_HEADER_TYPE_0 type0;                                    //0x10
        struct _PCI_HEADER_TYPE_1 type1;                                    //0x10
        struct _PCI_HEADER_TYPE_2 type2;                                    //0x10
    } u;                                                                    //0x10
    UCHAR DeviceSpecific[192];                                              //0x40
};
/* Used in */
// _PCI_BUS_INTERFACE_STANDARD
// _PCI_FDO_EXTENSION

