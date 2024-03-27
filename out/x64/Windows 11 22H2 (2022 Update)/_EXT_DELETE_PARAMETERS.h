#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _EXT_DELETE_PARAMETERS
{
    ULONG Version;                                                          //0x0
    ULONG Reserved;                                                         //0x4
    VOID (*DeleteCallback)(VOID* arg1);                                     //0x8
    VOID* DeleteContext;                                                    //0x10
};
