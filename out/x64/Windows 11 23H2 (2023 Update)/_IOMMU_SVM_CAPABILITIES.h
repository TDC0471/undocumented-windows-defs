#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _IOMMU_SVM_CAPABILITIES
{
    ULONG AtsCapability:1;                                                  //0x0
    ULONG PriCapability:1;                                                  //0x0
    ULONG PasidCapability:1;                                                //0x0
    ULONG Rsvd0:29;                                                         //0x0
    struct
    {
        ULONG Padding:3;                                                    //0x0
        ULONG PasidMaxWidth:5;                                              //0x0
        ULONG PasidExePerm:1;                                               //0x0
        ULONG PasidPrivMode:1;                                              //0x0
        ULONG AtsPageAlignedRequest:1;                                      //0x0
        ULONG AtsGlobalInvalidate:1;                                        //0x0
        ULONG AtsInvalidateQueueDepth:5;                                    //0x0
        ULONG PriPrgResponsePasidRequired:1;                                //0x0
        ULONG Rsvd:14;                                                      //0x0
    } CapReg;                                                               //0x0
    struct
    {
        ULONG Padding:23;                                                   //0x0
        ULONG IsSecureDevice:1;                                             //0x0
        ULONG Rsvd:8;                                                       //0x0
    } DeviceInformation;                                                    //0x0
    ULONG AtsPriPasidBits:3;                                                //0x0
    ULONG CapRegBits:15;                                                    //0x0
    ULONG DeviceInformationBits:1;                                          //0x0
    ULONG Rsvd1:13;                                                         //0x0
    ULONG AsULONG;                                                          //0x0
};
/* Used in */
// _HAL_IOMMU_DISPATCH
// _IOMMU_BUS_INTERFACE
// _IOMMU_DMA_DEVICE
// _IOMMU_TRACKED_DEVICE

