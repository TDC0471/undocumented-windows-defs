#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _HV_GET_CELL_CONTEXT
{
    union
    {
        ULONG Cell;                                                         //0x0
        struct
        {
            ULONG IsInTempBin:1;                                            //0x0
            ULONG Reserved:31;                                              //0x0
        };
    };
};
/* Used in */
// _HHIVE

