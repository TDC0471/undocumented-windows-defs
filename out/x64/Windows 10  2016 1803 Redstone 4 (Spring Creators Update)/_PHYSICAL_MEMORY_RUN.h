#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _PHYSICAL_MEMORY_RUN
{
    ULONGLONG BasePage;                                                     //0x0
    ULONGLONG PageCount;                                                    //0x8
};
/* Used in */
// _PHYSICAL_MEMORY_DESCRIPTOR

