#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _MI_SLAB_ALLOCATOR_PROTECTION
{
    MiSlabAllocatorProtectionReadExecute = 0,
    MiSlabAllocatorProtectionReadOnly = 1,
    MiSlabAllocatorProtectionNoAccess = 2,
    MiSlabAllocatorProtectionMax = 3
};
/* Used in */
// _MI_SLAB_ALLOCATOR_CONTEXT

