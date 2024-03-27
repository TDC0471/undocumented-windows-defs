#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_MDL.h>
#include <_ADAPTER_OBJECT.h>
#include <_GUID.h>

//0x70 bytes (sizeof)
struct _DUMP_INITIALIZATION_CONTEXT
{
    ULONG Length;                                                           //0x0
    ULONG Reserved;                                                         //0x4
    VOID* MemoryBlock;                                                      //0x8
    VOID* CommonBuffer[2];                                                  //0xc
    union _LARGE_INTEGER PhysicalAddress[2];                                //0x18
    VOID (*StallRoutine)(ULONG arg1);                                       //0x28
    UCHAR (*OpenRoutine)(union _LARGE_INTEGER arg1);                        //0x2c
    LONG (*WriteRoutine)(union _LARGE_INTEGER* arg1, struct _MDL* arg2);    //0x30
    VOID (*FinishRoutine)();                                                //0x34
    struct _ADAPTER_OBJECT* AdapterObject;                                  //0x38
    VOID* MappedRegisterBase;                                               //0x3c
    VOID* PortConfiguration;                                                //0x40
    UCHAR CrashDump;                                                        //0x44
    ULONG MaximumTransferSize;                                              //0x48
    ULONG CommonBufferSize;                                                 //0x4c
    VOID* TargetAddress;                                                    //0x50
    LONG (*WritePendingRoutine)(LONG arg1, union _LARGE_INTEGER* arg2, struct _MDL* arg3, VOID* arg4); //0x54
    ULONG PartitionStyle;                                                   //0x58
    union
    {
        struct
        {
            ULONG Signature;                                                //0x5c
            ULONG CheckSum;                                                 //0x60
        } Mbr;                                                              //0x5c
        struct
        {
            struct _GUID DiskId;                                            //0x5c
        } Gpt;                                                              //0x5c
    } DiskInfo;                                                             //0x5c
};
/* Used in */
// _DUMP_STACK_CONTEXT

