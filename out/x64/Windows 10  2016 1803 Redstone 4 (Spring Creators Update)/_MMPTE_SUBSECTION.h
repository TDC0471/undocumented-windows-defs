#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _MMPTE_SUBSECTION
{
    ULONGLONG Valid:1;                                                      //0x0
    ULONGLONG Unused0:4;                                                    //0x0
    ULONGLONG Protection:5;                                                 //0x0
    ULONGLONG Prototype:1;                                                  //0x0
    ULONGLONG ColdPage:1;                                                   //0x0
    ULONGLONG Unused1:3;                                                    //0x0
    ULONGLONG ExecutePrivilege:1;                                           //0x0
    LONGLONG SubsectionAddress:48;                                          //0x0
};
/* Used in */
// _MMPTE

