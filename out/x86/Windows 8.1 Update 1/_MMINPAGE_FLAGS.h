#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MMINPAGE_FLAGS
{
    UCHAR InjectRetry:1;                                                    //0x0
    UCHAR CrossThreadPadding:7;                                             //0x0
    UCHAR PrefetchSystemVmType:2;                                           //0x1
    UCHAR VaPrefetchReadBlock:1;                                            //0x1
    UCHAR CollidedFlowThrough:1;                                            //0x1
    UCHAR ForceCollisions:1;                                                //0x1
    UCHAR InPageExpanded:1;                                                 //0x1
    UCHAR IssuedAtLowPriority:1;                                            //0x1
    UCHAR FaultFromStore:1;                                                 //0x1
    UCHAR PagePriority:3;                                                   //0x2
    UCHAR PerformRelocations:1;                                             //0x2
    UCHAR ClusteredPagePriority:3;                                          //0x2
    UCHAR MakeClusterValid:1;                                               //0x2
    UCHAR ZeroLastPage:1;                                                   //0x3
    UCHAR UserFault:1;                                                      //0x3
    UCHAR BoostedPriority:1;                                                //0x3
    UCHAR StandbyProtectionNeeded:1;                                        //0x3
    UCHAR PteChanged:1;                                                     //0x3
    UCHAR PageFileFault:1;                                                  //0x3
    UCHAR PageFilePageHashActive:1;                                         //0x3
    UCHAR CoalescedIo:1;                                                    //0x3
};
/* Used in */
// _MMINPAGE_SUPPORT

