#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _MMLISTS
{
    ZeroedPageList = 0,
    FreePageList = 1,
    StandbyPageList = 2,
    ModifiedPageList = 3,
    ModifiedNoWritePageList = 4,
    BadPageList = 5,
    ActiveAndValid = 6,
    TransitionPage = 7
};
/* Used in */
// _MMPFNLIST

