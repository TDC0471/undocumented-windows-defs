#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union RTLP_HP_LFH_PERF_FLAGS
{
    ULONG HotspotDetection:1;                                               //0x0
    ULONG HotspotFullCommit:1;                                              //0x0
    ULONG ActiveSubsegment:1;                                               //0x0
    ULONG SmallerSubsegment:1;                                              //0x0
    ULONG SingleAffinitySlot:1;                                             //0x0
    ULONG ApplyLfhDecommitPolicy:1;                                         //0x0
    ULONG EnableGarbageCollection:1;                                        //0x0
    ULONG LargePagePreCommit:1;                                             //0x0
    ULONG OpportunisticLargePreCommit:1;                                    //0x0
    ULONG LfhForcedAffinity:1;                                              //0x0
    ULONG LfhCachelinePadding:1;                                            //0x0
    ULONG AllFlags;                                                         //0x0
};
