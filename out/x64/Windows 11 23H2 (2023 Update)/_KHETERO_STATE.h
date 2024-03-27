#pragma once
/* ------------------ */


//0x1 bytes (sizeof)
union _KHETERO_STATE
{
    UCHAR Qos:3;                                                            //0x0
    UCHAR WorkloadClass:3;                                                  //0x0
    UCHAR RunningType:1;                                                    //0x0
    UCHAR AllFields;                                                        //0x0
};
/* Used in */
// _KSHARED_READY_QUEUE

