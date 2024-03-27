#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _NLS_DATA_BLOCK
{
    VOID* AnsiCodePageData;                                                 //0x0
    VOID* OemCodePageData;                                                  //0x4
    VOID* UnicodeCaseTableData;                                             //0x8
};
/* Used in */
// _LOADER_PARAMETER_BLOCK

