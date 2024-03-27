#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _MMVAD_FLAGS3
{
    ULONGLONG PreferredNode:6;                                              //0x0
    ULONGLONG Teb:1;                                                        //0x0
    ULONGLONG Spare:1;                                                      //0x0
    ULONGLONG SequentialAccess:1;                                           //0x0
    ULONGLONG LastSequentialTrim:15;                                        //0x0
    ULONGLONG Spare2:8;                                                     //0x0
    ULONGLONG LargePageCreating:1;                                          //0x0
    ULONGLONG Spare3:31;                                                    //0x0
};
/* Used in */
// _MMVAD
// _MMVAD_LONG
// _MMVAD_SHORT

