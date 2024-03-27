#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MMINPAGE_FLAGS
{
    ULONG GetExtents:1;                                                     //0x0
    ULONG PrefetchSystemVmType:2;                                           //0x0
    ULONG VaPrefetchReadBlock:1;                                            //0x0
    ULONG CollidedFlowThrough:1;                                            //0x0
    ULONG ForceCollisions:1;                                                //0x0
    ULONG InPageExpanded:1;                                                 //0x0
    ULONG IssuedAtLowPriority:1;                                            //0x0
    ULONG FaultFromStore:1;                                                 //0x0
    ULONG PagePriority:3;                                                   //0x0
    ULONG ClusteredPagePriority:3;                                          //0x0
    ULONG MakeClusterValid:1;                                               //0x0
    ULONG PerformRelocations:1;                                             //0x0
    ULONG ZeroLastPage:1;                                                   //0x0
    ULONG UserFault:1;                                                      //0x0
    ULONG StandbyProtectionNeeded:1;                                        //0x0
    ULONG PteChanged:1;                                                     //0x0
    ULONG PageFileFault:1;                                                  //0x0
    ULONG PageFilePageHashActive:1;                                         //0x0
    ULONG CoalescedIo:1;                                                    //0x0
    ULONG VmLockNotNeeded:1;                                                //0x0
    ULONG Spare0:1;                                                         //0x0
    ULONG Spare1:6;                                                         //0x0
};
/* Used in */
// _MMINPAGE_SUPPORT

