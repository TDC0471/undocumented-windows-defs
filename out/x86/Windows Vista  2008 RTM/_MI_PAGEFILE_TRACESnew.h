#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_MDL.h>

//0x40 bytes (sizeof)
struct _MI_PAGEFILE_TRACES
{
    LONG Status;                                                            //0x0
    UCHAR Priority;                                                         //0x4
    UCHAR IrpPriority;                                                      //0x5
    union _LARGE_INTEGER CurrentTime;                                       //0x8
    ULONG AvailablePages;                                                   //0x10
    ULONG ModifiedPagesTotal;                                               //0x14
    ULONG ModifiedPagefilePages;                                            //0x18
    ULONG ModifiedNoWritePages;                                             //0x1c
    struct
    {
        struct _MDL Mdl;                                                    //0x20
        ULONG Page[1];                                                      //0x3c
    } MdlHack;                                                              //0x20
};
