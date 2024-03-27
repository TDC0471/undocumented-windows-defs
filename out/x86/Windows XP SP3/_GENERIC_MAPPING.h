#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _GENERIC_MAPPING
{
    ULONG GenericRead;                                                      //0x0
    ULONG GenericWrite;                                                     //0x4
    ULONG GenericExecute;                                                   //0x8
    ULONG GenericAll;                                                       //0xc
};
/* Used in */
// _OBJECT_TYPE_INITIALIZER

