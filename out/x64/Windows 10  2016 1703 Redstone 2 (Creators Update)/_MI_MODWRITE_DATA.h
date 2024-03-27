#pragma once
/* ------------------ */

#include <_MI_RESERVATION_CLUSTER_INFO.h>

//0x40 bytes (sizeof)
struct _MI_MODWRITE_DATA
{
    LONGLONG PagesLoad;                                                     //0x0
    ULONGLONG PagesAverage;                                                 //0x8
    ULONGLONG AverageAvailablePages;                                        //0x10
    ULONGLONG PagesWritten;                                                 //0x18
    ULONG WritesIssued;                                                     //0x20
    ULONG IgnoredReservationsCount;                                         //0x24
    ULONG FreedReservationsCount;                                           //0x28
    ULONG WriteBurstCount;                                                  //0x2c
    ULONGLONG IgnoreReservationsStartTime;                                  //0x30
    unionvolatile _MI_RESERVATION_CLUSTER_INFO ReservationClusterInfo;      //0x38
    USHORT IgnoreReservations:1;                                            //0x3c
    USHORT Spare:15;                                                        //0x3c
    USHORT Spare1;                                                          //0x3e
};
/* Used in */
// _MI_PARTITION_MODWRITES

