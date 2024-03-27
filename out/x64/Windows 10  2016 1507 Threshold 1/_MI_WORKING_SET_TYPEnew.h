#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _MI_WORKING_SET_TYPE
{
    MiWorkingSetTypeSystemCache = 0,
    MiWorkingSetTypePagedPool = 1,
    MiWorkingSetTypeSystemPtes = 2,
    MiWorkingSetTypeMaximum = 3
};
