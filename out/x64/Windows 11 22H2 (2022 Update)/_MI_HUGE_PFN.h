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
            ULONGLONG PageState:3;                                          //0x0
            ULONGLONG HasError:1;                                           //0x0
            ULONGLONG Partition:11;                                         //0x0
            ULONGLONG ZeroedDuringStateChanges:49;                          //0x0
        } e2;                                                               //0x0
        struct
        {
            ULONGLONG PageState:3;                                          //0x0
            ULONGLONG HasError:1;                                           //0x0
            ULONGLONG Partition:11;                                         //0x0
            ULONGLONG Flink:22;                                             //0x0
            ULONGLONG Blink:22;                                             //0x0
            ULONGLONG WriteInProgress:1;                                    //0x0
        } OnList;                                                           //0x0
        struct
        {
            ULONGLONG PageState:3;                                          //0x0
            ULONGLONG HasError:1;                                           //0x0
            ULONGLONG Partition:11;                                         //0x0
            ULONGLONG DeleteBit:1;                                          //0x0
            ULONGLONG ContentsWereNonZeroWhenInitiallyUnlinked:1;           //0x0
            ULONGLONG ShareCount:22;                                        //0x0
        } Active;                                                           //0x0
        struct
        {
            ULONGLONG PageState:3;                                          //0x0
            ULONGLONG HasError:1;                                           //0x0
            ULONGLONG Partition:11;                                         //0x0
            ULONGLONG DanglingIoNodes:9;                                    //0x0
        } Transition;                                                       //0x0
    } u1;                                                                   //0x0
};
/* Used in */
// _MI_PARTITION_STATE

