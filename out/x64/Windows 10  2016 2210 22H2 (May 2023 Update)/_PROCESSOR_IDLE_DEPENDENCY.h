#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _PROCESSOR_IDLE_DEPENDENCY
{
    ULONG ProcessorIndex;                                                   //0x0
    UCHAR ExpectedState;                                                    //0x4
    UCHAR AllowDeeperStates;                                                //0x5
    UCHAR LooseDependency;                                                  //0x6
};
/* Used in */
// _PROCESSOR_IDLE_PREPARE_INFO

