#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_MDL.h>

//0x68 bytes (sizeof)
struct _MI_PAGEFILE_TRACES
{
    LONG Status;                                                            //0x0
    UCHAR Priority;                                                         //0x4
    UCHAR IrpPriority;                                                      //0x5
    union _LARGE_INTEGER CurrentTime;                                       //0x8
    ULONGLONG AvailablePages;                                               //0x10
    ULONGLONG ModifiedPagesTotal;                                           //0x18
    ULONGLONG ModifiedPagefilePages;                                        //0x20
    ULONGLONG ModifiedNoWritePages;                                         //0x28
    struct
    {
        struct _MDL Mdl;                                                    //0x30
        ULONGLONG Page[1];                                                  //0x60
    } MdlHack;                                                              //0x30
};
