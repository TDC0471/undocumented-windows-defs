#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _KERNEL_SHADOW_STACK_TYPE
{
    KernelShadowStackTypeUserThread = 0,
    KernelShadowStackTypeKernelThread = 1,
    KernelShadowStackTypeRstorssp = 2,
    KernelShadowStackTypeSetssbsy = 3,
    KernelShadowStackTypeSetssbsyForSystemStartup = 4,
    KernelShadowStackTypeMax = 5
};
