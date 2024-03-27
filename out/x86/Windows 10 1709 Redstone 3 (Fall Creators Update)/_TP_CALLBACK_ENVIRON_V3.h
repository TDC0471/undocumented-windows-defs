#pragma once
/* ------------------ */

#include <_TP_POOL.h>
#include <_TP_CLEANUP_GROUP.h>
#include <_ACTIVATION_CONTEXT.h>
#include <_TP_CALLBACK_INSTANCE.h>
#include <_TP_CALLBACK_PRIORITY.h>

//0x28 bytes (sizeof)
struct _TP_CALLBACK_ENVIRON_V3
{
    ULONG Version;                                                          //0x0
    struct _TP_POOL* Pool;                                                  //0x4
    struct _TP_CLEANUP_GROUP* CleanupGroup;                                 //0x8
    VOID (*CleanupGroupCancelCallback)(VOID* arg1, VOID* arg2);             //0xc
    VOID* RaceDll;                                                          //0x10
    struct _ACTIVATION_CONTEXT* ActivationContext;                          //0x14
    VOID (*FinalizationCallback)(struct _TP_CALLBACK_INSTANCE* arg1, VOID* arg2); //0x18
    union
    {
        ULONG Flags;                                                        //0x1c
        struct
        {
            ULONG LongFunction:1;                                           //0x1c
            ULONG Persistent:1;                                             //0x1c
            ULONG Private:30;                                               //0x1c
        } s;                                                                //0x1c
    } u;                                                                    //0x1c
    enum _TP_CALLBACK_PRIORITY CallbackPriority;                            //0x20
    ULONG Size;                                                             //0x24
};
