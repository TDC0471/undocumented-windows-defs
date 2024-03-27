#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x14 bytes (sizeof)
struct _CM_PARTIAL_RESOURCE_DESCRIPTOR
{
    UCHAR Type;                                                             //0x0
    UCHAR ShareDisposition;                                                 //0x1
    USHORT Flags;                                                           //0x2
    union
    {
        struct
        {
            union _LARGE_INTEGER Start;                                     //0x4
            ULONG Length;                                                   //0xc
        } Generic;                                                          //0x4
        struct
        {
            union _LARGE_INTEGER Start;                                     //0x4
            ULONG Length;                                                   //0xc
        } Port;                                                             //0x4
        struct
        {
            ULONG Level;                                                    //0x4
            ULONG Vector;                                                   //0x8
            ULONGLONG Affinity;                                             //0xc
        } Interrupt;                                                        //0x4
        struct
        {
            union _LARGE_INTEGER Start;                                     //0x4
            ULONG Length;                                                   //0xc
        } Memory;                                                           //0x4
        struct
        {
            ULONG Channel;                                                  //0x4
            ULONG Port;                                                     //0x8
            ULONG Reserved1;                                                //0xc
        } Dma;                                                              //0x4
        struct
        {
            ULONG Data[3];                                                  //0x4
        } DevicePrivate;                                                    //0x4
        struct
        {
            ULONG Start;                                                    //0x4
            ULONG Length;                                                   //0x8
            ULONG Reserved;                                                 //0xc
        } BusNumber;                                                        //0x4
        struct
        {
            ULONG DataSize;                                                 //0x4
            ULONG Reserved1;                                                //0x8
            ULONG Reserved2;                                                //0xc
        } DeviceSpecificData;                                               //0x4
    } u;                                                                    //0x4
};
/* Used in */
// PCI_FUNCTION_RESOURCES
// _ARBITER_INSTANCE
// _ARBITER_LIST_ENTRY
// _ARBITER_PARAMETERS
// _CM_PARTIAL_RESOURCE_LIST

