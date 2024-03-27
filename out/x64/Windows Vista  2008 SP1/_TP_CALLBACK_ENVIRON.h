#pragma once
/* ------------------ */

#include <_TP_POOL.h>
#include <_TP_CLEANUP_GROUP.h>
#include <_ACTIVATION_CONTEXT.h>
#include <_TP_CALLBACK_INSTANCE.h>

//0x40 bytes (sizeof)
struct _TP_CALLBACK_ENVIRON
{
    ULONG Version;                                                          //0x0
    struct _TP_POOL* Pool;                                                  //0x8
    struct _TP_CLEANUP_GROUP* CleanupGroup;                                 //0x10
    VOID (*CleanupGroupCancelCallback)(VOID* arg1, VOID* arg2);             //0x18
    VOID* RaceDll;                                                          //0x20
    struct _ACTIVATION_CONTEXT* ActivationContext;                          //0x28
    VOID (*FinalizationCallback)(struct _TP_CALLBACK_INSTANCE* arg1, VOID* arg2); //0x30
    union
    {
        ULONG Flags;                                                        //0x38
        struct
        {
            ULONG LongFunction:1;                                           //0x38
            ULONG Private:31;                                               //0x38
        } s;                                                                //0x38
    } u;                                                                    //0x38
};
