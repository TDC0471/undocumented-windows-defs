#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_UNICODE_STRING.h>
#include <_ACTIVATION_CONTEXT.h>
#include <_LDR_DDAG_NODE.h>
#include <_LDRP_LOAD_CONTEXT.h>
#include <_RTL_BALANCED_NODE.h>
#include <_LARGE_INTEGER.h>
#include <_LDR_DLL_LOAD_REASON.h>

//0xa0 bytes (sizeof)
struct _LDR_DATA_TABLE_ENTRY
{
    struct _LIST_ENTRY InLoadOrderLinks;                                    //0x0
    struct _LIST_ENTRY InMemoryOrderLinks;                                  //0x8
    struct _LIST_ENTRY InInitializationOrderLinks;                          //0x10
    VOID* DllBase;                                                          //0x18
    VOID* EntryPoint;                                                       //0x1c
    ULONG SizeOfImage;                                                      //0x20
    struct _UNICODE_STRING FullDllName;                                     //0x24
    struct _UNICODE_STRING BaseDllName;                                     //0x2c
    union
    {
        UCHAR FlagGroup[4];                                                 //0x34
        ULONG Flags;                                                        //0x34
        struct
        {
            ULONG PackagedBinary:1;                                         //0x34
            ULONG MarkedForRemoval:1;                                       //0x34
            ULONG ImageDll:1;                                               //0x34
            ULONG LoadNotificationsSent:1;                                  //0x34
            ULONG TelemetryEntryProcessed:1;                                //0x34
            ULONG ProcessStaticImport:1;                                    //0x34
            ULONG InLegacyLists:1;                                          //0x34
            ULONG InIndexes:1;                                              //0x34
            ULONG ShimDll:1;                                                //0x34
            ULONG InExceptionTable:1;                                       //0x34
            ULONG ReservedFlags1:2;                                         //0x34
            ULONG LoadInProgress:1;                                         //0x34
            ULONG LoadConfigProcessed:1;                                    //0x34
            ULONG EntryProcessed:1;                                         //0x34
            ULONG ProtectDelayLoad:1;                                       //0x34
            ULONG ReservedFlags3:2;                                         //0x34
            ULONG DontCallForThreads:1;                                     //0x34
            ULONG ProcessAttachCalled:1;                                    //0x34
            ULONG ProcessAttachFailed:1;                                    //0x34
            ULONG CorDeferredValidate:1;                                    //0x34
            ULONG CorImage:1;                                               //0x34
            ULONG DontRelocate:1;                                           //0x34
            ULONG CorILOnly:1;                                              //0x34
            ULONG ReservedFlags5:3;                                         //0x34
            ULONG Redirected:1;                                             //0x34
            ULONG ReservedFlags6:2;                                         //0x34
            ULONG CompatDatabaseProcessed:1;                                //0x34
        };
    };
    USHORT ObsoleteLoadCount;                                               //0x38
    USHORT TlsIndex;                                                        //0x3a
    struct _LIST_ENTRY HashLinks;                                           //0x3c
    ULONG TimeDateStamp;                                                    //0x44
    struct _ACTIVATION_CONTEXT* EntryPointActivationContext;                //0x48
    VOID* Lock;                                                             //0x4c
    struct _LDR_DDAG_NODE* DdagNode;                                        //0x50
    struct _LIST_ENTRY NodeModuleLink;                                      //0x54
    struct _LDRP_LOAD_CONTEXT* LoadContext;                                 //0x5c
    VOID* ParentDllBase;                                                    //0x60
    VOID* SwitchBackContext;                                                //0x64
    struct _RTL_BALANCED_NODE BaseAddressIndexNode;                         //0x68
    struct _RTL_BALANCED_NODE MappingInfoIndexNode;                         //0x74
    ULONG OriginalBase;                                                     //0x80
    union _LARGE_INTEGER LoadTime;                                          //0x88
    ULONG BaseNameHashValue;                                                //0x90
    enum _LDR_DLL_LOAD_REASON LoadReason;                                   //0x94
    ULONG ImplicitPathOptions;                                              //0x98
    ULONG ReferenceCount;                                                   //0x9c
};
