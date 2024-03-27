#pragma once
/* ------------------ */

#include <_MI_RESERVATION_CLUSTER_INFO.h>

//0x30 bytes (sizeof)
struct _MI_MODWRITE_DATA
{
    LONG PagesLoad;                                                         //0x0
    ULONG PagesAverage;                                                     //0x4
    ULONG AverageAvailablePages;                                            //0x8
    ULONG PagesWritten;                                                     //0xc
    ULONG WritesIssued;                                                     //0x10
    ULONG IgnoredReservationsCount;                                         //0x14
    ULONG FreedReservationsCount;                                           //0x18
    ULONG WriteBurstCount;                                                  //0x1c
    ULONGLONG IgnoreReservationsStartTime;                                  //0x20
    unionvolatile _MI_RESERVATION_CLUSTER_INFO ReservationClusterInfo;      //0x28
    USHORT IgnoreReservations:1;                                            //0x2c
    USHORT Spare:15;                                                        //0x2c
    USHORT Spare1;                                                          //0x2e
};
/* Used in */
// _MI_PARTITION_MODWRITES

