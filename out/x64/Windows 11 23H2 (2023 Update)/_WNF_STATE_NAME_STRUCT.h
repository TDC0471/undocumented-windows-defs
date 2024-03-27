#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _WNF_STATE_NAME_STRUCT
{
    ULONGLONG Version:4;                                                    //0x0
    ULONGLONG NameLifetime:2;                                               //0x0
    ULONGLONG DataScope:4;                                                  //0x0
    ULONGLONG PermanentData:1;                                              //0x0
    ULONGLONG Sequence:53;                                                  //0x0
};
/* Used in */
// _WNF_NAME_INSTANCE
// _WNF_SUBSCRIPTION

