#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _HAL_LBR_ENTRY
{
    VOID* FromAddress;                                                      //0x0
    VOID* ToAddress;                                                        //0x4
    VOID* Reserved;                                                         //0x8
};
/* Used in */
// HAL_PRIVATE_DISPATCH

