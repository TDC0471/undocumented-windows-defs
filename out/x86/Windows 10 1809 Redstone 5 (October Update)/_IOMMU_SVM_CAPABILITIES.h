#pragma once
/* ------------------ */


//0xc bytes (sizeof)
union _IOMMU_SVM_CAPABILITIES
{
    ULONG AtsCapability:1;                                                  //0x0
    ULONG PriCapability:1;                                                  //0x0
    struct
    {
        ULONG PasidCapability:1;                                            //0x0
        struct
    {
        ULONG PasidMaxWidth:5;                                              //0x4
        ULONG PasidExePerm:1;                                               //0x4
        ULONG PasidPrivMode:1;                                              //0x4
        ULONG AtsPageAlignedRequest:1;                                      //0x4
        ULONG AtsGlobalInvalidate:1;                                        //0x4
        ULONG AtsInvalidateQueueDepth:5;                                    //0x4
    } CapReg;                                                               //0x4
    };
    struct
    {
        ULONG Rsvd:15;                                                      //0x8
    };
    ULONG AsULONG;                                                          //0x0
};
/* Used in */
// _HAL_IOMMU_DISPATCH

