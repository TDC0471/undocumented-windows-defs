#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_UNICODE_STRING.h>
#include <_ACTIVATION_CONTEXT.h>

//0x98 bytes (sizeof)
struct _LDR_DATA_TABLE_ENTRY
{
    struct _LIST_ENTRY InLoadOrderLinks;                                    //0x0
    struct _LIST_ENTRY InMemoryOrderLinks;                                  //0x10
    struct _LIST_ENTRY InInitializationOrderLinks;                          //0x20
    VOID* DllBase;                                                          //0x30
    VOID* EntryPoint;                                                       //0x38
    ULONG SizeOfImage;                                                      //0x40
    struct _UNICODE_STRING FullDllName;                                     //0x48
    struct _UNICODE_STRING BaseDllName;                                     //0x58
    ULONG Flags;                                                            //0x68
    USHORT LoadCount;                                                       //0x6c
    USHORT TlsIndex;                                                        //0x6e
    union
    {
        struct _LIST_ENTRY HashLinks;                                       //0x70
        struct
        {
            VOID* SectionPointer;                                           //0x70
            ULONG CheckSum;                                                 //0x78
        };
    };
    union
    {
        ULONG TimeDateStamp;                                                //0x80
        VOID* LoadedImports;                                                //0x80
    };
    struct _ACTIVATION_CONTEXT* EntryPointActivationContext;                //0x88
    VOID* PatchInformation;                                                 //0x90
};
