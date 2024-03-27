#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _KERNEL_SHADOW_STACK_LIMIT
{
    ULONGLONG AllFields;                                                    //0x0
    ULONGLONG ShadowStackType:3;                                            //0x0
    ULONGLONG Unused:9;                                                     //0x0
    ULONGLONG ShadowStackLimitPfn:52;                                       //0x0
};
/* Used in */
// _KERNEL_STACK_SEGMENT
// _KTHREAD

