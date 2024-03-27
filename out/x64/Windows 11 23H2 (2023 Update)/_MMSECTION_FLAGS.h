#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MMSECTION_FLAGS
{
    ULONG BeingDeleted:1;                                                   //0x0
    ULONG BeingCreated:1;                                                   //0x0
    ULONG BeingPurged:1;                                                    //0x0
    ULONG NoModifiedWriting:1;                                              //0x0
    ULONG FailAllIo:1;                                                      //0x0
    ULONG Image:1;                                                          //0x0
    ULONG Based:1;                                                          //0x0
    ULONG File:1;                                                           //0x0
    ULONG AttemptingDelete:1;                                               //0x0
    ULONG PrefetchCreated:1;                                                //0x0
    ULONG PhysicalMemory:1;                                                 //0x0
    ULONG ImageControlAreaOnRemovableMedia:1;                               //0x0
    ULONG Reserve:1;                                                        //0x0
    ULONG Commit:1;                                                         //0x0
    ULONG NoChange:1;                                                       //0x0
    ULONG WasPurged:1;                                                      //0x0
    ULONG UserReference:1;                                                  //0x0
    ULONG GlobalMemory:1;                                                   //0x0
    ULONG DeleteOnClose:1;                                                  //0x0
    ULONG FilePointerNull:1;                                                //0x0
    ULONG PreferredNode:7;                                                  //0x0
    ULONG GlobalOnlyPerSession:1;                                           //0x0
    ULONG UserWritable:1;                                                   //0x0
    ULONG SystemVaAllocated:1;                                              //0x0
    ULONG PreferredFsCompressionBoundary:1;                                 //0x0
    ULONG PageSize64K:1;                                                    //0x0
};
/* Used in */
// _CONTROL_AREA
// _SECTION

