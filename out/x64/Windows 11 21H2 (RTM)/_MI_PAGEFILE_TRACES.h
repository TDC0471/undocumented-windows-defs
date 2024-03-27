#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_MDL.h>

//0x78 bytes (sizeof)
struct _MI_PAGEFILE_TRACES
{
    LONG Status;                                                            //0x0
    USHORT PartitionId;                                                     //0x4
    UCHAR Priority;                                                         //0x6
    UCHAR IrpPriority;                                                      //0x7
    UCHAR ReservationWrite;                                                 //0x8
    union _LARGE_INTEGER CurrentTime;                                       //0x10
    ULONGLONG AvailablePages;                                               //0x18
    ULONGLONG ModifiedPagesTotal;                                           //0x20
    ULONGLONG ModifiedPagefilePages;                                        //0x28
    ULONGLONG ModifiedNoWritePages;                                         //0x30
    ULONGLONG ModifiedPagefileNoReservationPages;                           //0x38
    struct
    {
        struct _MDL Mdl;                                                    //0x40
        ULONGLONG Page[1];                                                  //0x70
    } MdlHack;                                                              //0x40
};
/* Used in */
// _MI_VISIBLE_PARTITION

