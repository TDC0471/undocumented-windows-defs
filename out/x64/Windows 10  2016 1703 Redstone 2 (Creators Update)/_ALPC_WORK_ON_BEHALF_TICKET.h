#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _ALPC_WORK_ON_BEHALF_TICKET
{
    ULONG ThreadId;                                                         //0x0
    ULONG ThreadCreationTimeLow;                                            //0x4
};
/* Used in */
// _KALPC_WORK_ON_BEHALF_DATA

