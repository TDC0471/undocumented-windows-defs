#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _MI_HUGE_PFN
{
    union
    {
        struct
        {
            ULONGLONG EntireField;                                          //0x0
        } e1;                                                               //0x0
        struct
        {
            ULONGLONG Flink:18;                                             //0x0
            ULONGLONG PageState:2;                                          //0x0
            ULONGLONG Blink:18;                                             //0x0
            ULONGLONG WriteInProgress:1;                                    //0x0
            ULONGLONG HasError:1;                                           //0x0
            ULONGLONG Partition:11;                                         //0x0
            ULONGLONG NodeNumber:6;                                         //0x0
            ULONGLONG Reserved:7;                                           //0x0
        } e2;                                                               //0x0
    } u1;                                                                   //0x0
};
/* Used in */
// _MI_PARTITION_STATE

