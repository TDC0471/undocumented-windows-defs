#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _MI_SHARED_USER_PAGE_TYPES
{
    MiSharedUserPageKernel = 0,
    MiSharedUserPageHypervisor = 1,
    MiSharedUserPageMaximum = 2
};
