#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _EXT_IOMMU_CAPABILITIES
{
    ULONGLONG AsUINT64;                                                     //0x0
    ULONGLONG GeneratesMsiInterrupts:1;                                     //0x0
    ULONGLONG CoherentTableWalks:1;                                         //0x0
    ULONGLONG InterruptsNotSubjectToRemapping:1;                            //0x0
    ULONGLONG InterruptRemapping:1;                                         //0x0
    ULONGLONG Stage2DmaRemapping:1;                                         //0x0
    ULONGLONG Svm:1;                                                        //0x0
    ULONGLONG PcieFunctionBased:1;                                          //0x0
};
/* Used in */
// _EXT_IOMMU

