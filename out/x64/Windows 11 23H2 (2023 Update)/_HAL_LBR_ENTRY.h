#pragma once
/* ------------------ */


//0x18 bytes (sizeof)
struct _HAL_LBR_ENTRY
{
    VOID* FromAddress;                                                      //0x0
    VOID* ToAddress;                                                        //0x8
    VOID* Reserved;                                                         //0x10
};
/* Used in */
// HAL_PRIVATE_DISPATCH

