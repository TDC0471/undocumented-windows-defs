#pragma once
/* ------------------ */


//0x1 bytes (sizeof)
union _KPRIORITY_STATE
{
    UCHAR Priority:7;                                                       //0x0
    UCHAR IsolationWidth:1;                                                 //0x0
    UCHAR AllFields;                                                        //0x0
};
/* Used in */
// _KPRCB
// _KSHARED_READY_QUEUE

