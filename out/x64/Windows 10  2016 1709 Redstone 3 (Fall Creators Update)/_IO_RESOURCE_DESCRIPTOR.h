#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_IRQ_PRIORITY.h>

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
            USHORT AffinityPolicy;                                          //0x10
            USHORT Group;                                                   //0x12
            enum _IRQ_PRIORITY PriorityPolicy;                              //0x14
            ULONGLONG TargetedProcessors;                                   //0x18
        } Interrupt;                                                        //0x8
        struct
        {
            ULONG MinimumChannel;                                           //0x8
            ULONG MaximumChannel;                                           //0xc
        } Dma;                                                              //0x8
        struct
        {
            ULONG RequestLine;                                              //0x8
            ULONG Reserved;                                                 //0xc
            ULONG Channel;                                                  //0x10
            ULONG TransferWidth;                                            //0x14
        } DmaV3;                                                            //0x8
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
        struct
        {
            ULONG Length40;                                                 //0x8
            ULONG Alignment40;                                              //0xc
            union _LARGE_INTEGER MinimumAddress;                            //0x10
            union _LARGE_INTEGER MaximumAddress;                            //0x18
        } Memory40;                                                         //0x8
        struct
        {
            ULONG Length48;                                                 //0x8
            ULONG Alignment48;                                              //0xc
            union _LARGE_INTEGER MinimumAddress;                            //0x10
            union _LARGE_INTEGER MaximumAddress;                            //0x18
        } Memory48;                                                         //0x8
        struct
        {
            ULONG Length64;                                                 //0x8
            ULONG Alignment64;                                              //0xc
            union _LARGE_INTEGER MinimumAddress;                            //0x10
            union _LARGE_INTEGER MaximumAddress;                            //0x18
        } Memory64;                                                         //0x8
        struct
        {
            UCHAR Class;                                                    //0x8
            UCHAR Type;                                                     //0x9
            UCHAR Reserved1;                                                //0xa
            UCHAR Reserved2;                                                //0xb
            ULONG IdLowPart;                                                //0xc
            ULONG IdHighPart;                                               //0x10
        } Connection;                                                       //0x8
    } u;                                                                    //0x8
};
/* Used in */
// _ARBITER_ALTERNATIVE
// _ARBITER_INSTANCE
// _ARBITER_LIST_ENTRY
// _ARBITER_QUERY_CONFLICT_PARAMETERS
// _IO_RESOURCE_LIST
// _PNP_RESOURCE_CONFLICT_TRACE_CONTEXT

