#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _MM_PAGE_ACCESS_INFO_FLAGS
{
    struct
    {
        ULONG FilePointerIndex:9;                                           //0x0
        ULONG HardFault:1;                                                  //0x0
        ULONG Image:1;                                                      //0x0
        ULONG Spare0:1;                                                     //0x0
    } File;                                                                 //0x0
    struct
    {
        ULONG FilePointerIndex:9;                                           //0x0
        ULONG HardFault:1;                                                  //0x0
        ULONG Spare1:2;                                                     //0x0
    } Private;                                                              //0x0
};
/* Used in */
// _MM_PAGE_ACCESS_INFO

