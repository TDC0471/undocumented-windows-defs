#pragma once
/* ------------------ */


//0x2c bytes (sizeof)
struct _MI_POOL_FAILURE_REASONS
{
    ULONG NonPagedNoPtes;                                                   //0x0
    ULONG PriorityTooLow;                                                   //0x4
    ULONG NonPagedNoPagesAvailable;                                         //0x8
    ULONG PagedNoPtes;                                                      //0xc
    ULONG SessionPagedNoPtes;                                               //0x10
    ULONG PagedNoPagesAvailable;                                            //0x14
    ULONG SessionPagedNoPagesAvailable;                                     //0x18
    ULONG PagedNoCommit;                                                    //0x1c
    ULONG SessionPagedNoCommit;                                             //0x20
    ULONG NonPagedNoResidentAvailable;                                      //0x24
    ULONG NonPagedNoCommit;                                                 //0x28
};
/* Used in */
// _MI_POOL_STATE

