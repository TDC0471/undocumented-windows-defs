#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _EX_HEAP_TYPE
{
    ExHeapTypeNonPagedMin = 0,
    ExHeapTypeNonPaged = 0,
    ExHeapTypeNonPagedMax = 1,
    ExHeapTypeNonPagedNx = 1,
    ExHeapTypePagedMin = 2,
    ExHeapTypePaged = 2,
    ExHeapTypePagedMax = 3,
    ExHeapTypeSpecialMax = 3,
    ExHeapTypeMmSt = 3,
    ExHeapTypeMax = 4
};
