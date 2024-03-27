#pragma once
/* ------------------ */

#include <_CELL_DATA.h>

//0x58 bytes (sizeof)
struct _CM_CACHED_VALUE_INDEX
{
    ULONG CellIndex;                                                        //0x0
    union
    {
        struct _CELL_DATA CellData;                                         //0x8
        ULONGLONG List[1];                                                  //0x8
    } Data;                                                                 //0x8
};
