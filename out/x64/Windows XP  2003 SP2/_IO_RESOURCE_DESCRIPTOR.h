#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x20 bytes (sizeof)
struct _IO_RESOURCE_DESCRIPTOR
{
    UCHAR Option;                                                           //0x0
    UCHAR Type;                                                             //0x1
    UCHAR ShareDisposition;                                                 //0x2
    UCHAR Spare1;                                                           //0x3
    USHORT Flags;                                                           //0x4
    USHORT Spare2;                                                          //0x6
    union
    {
        struct
        {
            ULONG Length;                                                   //0x8
            ULONG Alignment;                                                //0xc
            union _LARGE_INTEGER MinimumAddress;                            //0x10
            union _LARGE_INTEGER MaximumAddress;                            //0x18
        } Port;                                                             //0x8
        struct
        {
            ULONG Length;                                                   //0x8
            ULONG Alignment;                                                //0xc
            union _LARGE_INTEGER MinimumAddress;                            //0x10
            union _LARGE_INTEGER MaximumAddress;                            //0x18
        } Memory;                                                           //0x8
        struct
        {
            ULONG MinimumVector;                                            //0x8
            ULONG MaximumVector;                                            //0xc
        } Interrupt;                                                        //0x8
        struct
        {
            ULONG MinimumChannel;                                           //0x8
            ULONG MaximumChannel;                                           //0xc
        } Dma;                                                              //0x8
        struct
        {
            ULONG Length;                                                   //0x8
            ULONG Alignment;                                                //0xc
            union _LARGE_INTEGER MinimumAddress;                            //0x10
            union _LARGE_INTEGER MaximumAddress;                            //0x18
        } Generic;                                                          //0x8
        struct
        {
            ULONG Data[3];                                                  //0x8
        } DevicePrivate;                                                    //0x8
        struct
        {
            ULONG Length;                                                   //0x8
            ULONG MinBusNumber;                                             //0xc
            ULONG MaxBusNumber;                                             //0x10
            ULONG Reserved;                                                 //0x14
        } BusNumber;                                                        //0x8
        struct
        {
            ULONG Priority;                                                 //0x8
            ULONG Reserved1;                                                //0xc
            ULONG Reserved2;                                                //0x10
        } ConfigData;                                                       //0x8
    } u;                                                                    //0x8
};
/* Used in */
// PCI_FUNCTION_RESOURCES
// _ARBITER_ALTERNATIVE
// _ARBITER_INSTANCE
// _ARBITER_LIST_ENTRY
// _ARBITER_PARAMETERS
// _IO_RESOURCE_LIST

