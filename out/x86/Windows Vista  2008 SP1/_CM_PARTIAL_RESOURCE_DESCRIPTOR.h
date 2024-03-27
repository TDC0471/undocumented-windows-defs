#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>

//0x10 bytes (sizeof)
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
            ULONG Affinity;                                                 //0xc
        } Interrupt;                                                        //0x4
        struct
        {
            union
            {
                struct
                {
                    USHORT Reserved;                                        //0x4
                    USHORT MessageCount;                                    //0x6
                    ULONG Vector;                                           //0x8
                    ULONG Affinity;                                         //0xc
                } Raw;                                                      //0x4
                struct
                {
                    ULONG Level;                                            //0x4
                    ULONG Vector;                                           //0x8
                    ULONG Affinity;                                         //0xc
                } Translated;                                               //0x4
            };
        } MessageInterrupt;                                                 //0x4
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
        struct
        {
            union _LARGE_INTEGER Start;                                     //0x4
            ULONG Length40;                                                 //0xc
        } Memory40;                                                         //0x4
        struct
        {
            union _LARGE_INTEGER Start;                                     //0x4
            ULONG Length48;                                                 //0xc
        } Memory48;                                                         //0x4
        struct
        {
            union _LARGE_INTEGER Start;                                     //0x4
            ULONG Length64;                                                 //0xc
        } Memory64;                                                         //0x4
    } u;                                                                    //0x4
};
/* Used in */
// _ARBITER_INSTANCE
// _ARBITER_LIST_ENTRY
// _ARBITER_RETEST_ALLOCATION_PARAMETERS
// _ARBITER_TEST_ALLOCATION_PARAMETERS
// _CM_PARTIAL_RESOURCE_LIST

