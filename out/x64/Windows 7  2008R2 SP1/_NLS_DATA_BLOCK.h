#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _NLS_DATA_BLOCK
{
    VOID* AnsiCodePageData;                                                 //0x0
    VOID* OemCodePageData;                                                  //0x8
    VOID* UnicodeCaseTableData;                                             //0x10
};
/* Used in */
// _LOADER_PARAMETER_BLOCK

