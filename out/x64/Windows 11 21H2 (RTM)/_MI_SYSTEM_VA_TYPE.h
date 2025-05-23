#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _MI_SYSTEM_VA_TYPE
{
    MiVaUnused = 0,
    MiVaSessionSpace = 1,
    MiVaProcessSpace = 2,
    MiVaBootLoaded = 3,
    MiVaPfnDatabase = 4,
    MiVaNonPagedPool = 5,
    MiVaPagedPool = 6,
    MiVaSpecialPoolPaged = 7,
    MiVaSystemCache = 8,
    MiVaSystemPtes = 9,
    MiVaHal = 10,
    MiVaSessionGlobalSpace = 11,
    MiVaDriverImages = 12,
    MiVaSystemPtesLarge = 13,
    MiVaKernelStacks = 14,
    MiVaSecureNonPagedPool = 15,
    MiVaKernelShadowStacks = 16,
    MiVaMaximumType = 17
};
/* Used in */
// _MI_SYSTEM_PTE_TYPE

