#pragma once
/* ------------------ */

#include <_LARGE_INTEGER.h>
#include <_MDL.h>

//0x50 bytes (sizeof)
struct _MI_PAGEFILE_TRACES
{
    LONG Status;                                                            //0x0
    USHORT PartitionId;                                                     //0x4
    UCHAR Priority;                                                         //0x6
    UCHAR IrpPriority;                                                      //0x7
    UCHAR ReservationWrite;                                                 //0x8
    union _LARGE_INTEGER CurrentTime;                                       //0x10
    ULONG AvailablePages;                                                   //0x18
    ULONG ModifiedPagesTotal;                                               //0x1c
    ULONG ModifiedPagefilePages;                                            //0x20
    ULONG ModifiedNoWritePages;                                             //0x24
    ULONG ModifiedPagefileNoReservationPages;                               //0x28
    struct
    {
        struct _MDL Mdl;                                                    //0x2c
        ULONG Page[1];                                                      //0x48
    } MdlHack;                                                              //0x2c
};
/* Used in */
// _MI_VISIBLE_PARTITION

