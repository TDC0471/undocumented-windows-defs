#pragma once
/* ------------------ */

#include <_CELL_DATA.h>

//0x54 bytes (sizeof)
struct _CM_CACHED_VALUE_INDEX
{
    ULONG CellIndex;                                                        //0x0
    union
    {
        struct _CELL_DATA CellData;                                         //0x4
        ULONG List[1];                                                      //0x4
    } Data;                                                                 //0x4
};
