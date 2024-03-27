#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_MDL.h>

//0x80 bytes (sizeof)
struct _MI_PAGEFILE_TRACES
{
    LONG Status;                                                            //0x0
    UCHAR PagefileNumber;                                                   //0x4
    UCHAR Priority;                                                         //0x5
    UCHAR IrpPriority;                                                      //0x6
    UCHAR ReservationWrite;                                                 //0x7
    union _LARGE_INTEGER CurrentTime;                                       //0x8
    ULONGLONG AvailablePages;                                               //0x10
    ULONGLONG ModifiedPagesTotal;                                           //0x18
    ULONGLONG ModifiedPagefilePages;                                        //0x20
    ULONGLONG ModifiedNoWritePages;                                         //0x28
    ULONGLONG ModifiedPagefileNoReservationPages;                           //0x30
    ULONGLONG ModifiedPageFileNoReservationCompressPages;                   //0x38
    ULONGLONG ModifiedPagefileReservationPages;                             //0x40
    struct
    {
        struct _MDL Mdl;                                                    //0x48
        ULONGLONG Page[1];                                                  //0x78
    } MdlHack;                                                              //0x48
};
/* Used in */
// _MI_VISIBLE_PARTITION

