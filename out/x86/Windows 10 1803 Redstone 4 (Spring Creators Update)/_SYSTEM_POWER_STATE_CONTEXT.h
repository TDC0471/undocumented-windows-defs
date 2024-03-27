#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _SYSTEM_POWER_STATE_CONTEXT
{
    union
    {
        struct
        {
            ULONG Reserved1:8;                                              //0x0
            ULONG TargetSystemState:4;                                      //0x0
            ULONG EffectiveSystemState:4;                                   //0x0
            ULONG CurrentSystemState:4;                                     //0x0
            ULONG IgnoreHibernationPath:1;                                  //0x0
            ULONG PseudoTransition:1;                                       //0x0
            ULONG KernelSoftReboot:1;                                       //0x0
            ULONG Reserved2:9;                                              //0x0
        };
        ULONG ContextAsUlong;                                               //0x0
    };
};
/* Used in */
// _IO_STACK_LOCATION
// _POP_CURRENT_BROADCAST

