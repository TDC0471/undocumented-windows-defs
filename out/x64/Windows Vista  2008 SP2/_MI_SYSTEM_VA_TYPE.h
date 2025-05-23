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
    MiVaSpecialPool = 7,
    MiVaSystemCache = 8,
    MiVaSystemPtes = 9,
    MiVaHal = 10,
    MiVaSessionGlobalSpace = 11,
    MiVaDriverImages = 12,
    MiVaMaximumType = 13
};
