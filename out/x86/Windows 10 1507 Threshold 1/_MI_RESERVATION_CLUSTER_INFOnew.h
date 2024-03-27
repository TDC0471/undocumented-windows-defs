#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _MI_RESERVATION_CLUSTER_INFO
{
    ULONG ClusterSize:10;                                                   //0x0
    ULONG SequenceNumber:22;                                                //0x0
    LONG EntireInfo;                                                        //0x0
};
/* Used in */
// _MI_MODWRITE_DATA

