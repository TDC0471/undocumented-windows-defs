#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _MI_PAGELIST_LOCK_TYPES
{
    MiPageListPreviousGlobal = 0,
    MiPageListNextGlobal = 1,
    MiPageListPreviousNode = 2,
    MiPageListNextNode = 3,
    MiPageListPageMaximum = 4
};
