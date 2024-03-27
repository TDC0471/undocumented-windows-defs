#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_MDL.h>
#include <_ADAPTER_OBJECT.h>
#include <_GUID.h>

//0xa0 bytes (sizeof)
struct _DUMP_INITIALIZATION_CONTEXT
{
    ULONG Length;                                                           //0x0
    ULONG Reserved;                                                         //0x4
    VOID* MemoryBlock;                                                      //0x8
    VOID* CommonBuffer[2];                                                  //0x10
    union _LARGE_INTEGER PhysicalAddress[2];                                //0x20
    VOID (*StallRoutine)(ULONG arg1);                                       //0x30
    UCHAR (*OpenRoutine)(union _LARGE_INTEGER arg1);                        //0x38
    LONG (*WriteRoutine)(union _LARGE_INTEGER* arg1, struct _MDL* arg2);    //0x40
    VOID (*FinishRoutine)();                                                //0x48
    struct _ADAPTER_OBJECT* AdapterObject;                                  //0x50
    VOID* MappedRegisterBase;                                               //0x58
    VOID* PortConfiguration;                                                //0x60
    UCHAR CrashDump;                                                        //0x68
    ULONG MaximumTransferSize;                                              //0x6c
    ULONG CommonBufferSize;                                                 //0x70
    VOID* TargetAddress;                                                    //0x78
    LONG (*WritePendingRoutine)(LONG arg1, union _LARGE_INTEGER* arg2, struct _MDL* arg3, VOID* arg4); //0x80
    ULONG PartitionStyle;                                                   //0x88
    union
    {
        struct
        {
            ULONG Signature;                                                //0x8c
            ULONG CheckSum;                                                 //0x90
        } Mbr;                                                              //0x8c
        struct
        {
            struct _GUID DiskId;                                            //0x8c
        } Gpt;                                                              //0x8c
    } DiskInfo;                                                             //0x8c
};
/* Used in */
// _DUMP_STACK_CONTEXT

