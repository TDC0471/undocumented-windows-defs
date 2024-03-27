#pragma once
/* ------------------ */

#include <_PNP_REBALANCE_FLAGS.h>
#include <_PLUGPLAY_CONTROL_STATUS_DATA.h>
#include <_PNP_DEVICE_IOMMU_DOMAIN_POLICY.h>

//0x8 bytes (sizeof)
union _PNP_DEVICE_ACTION_REQUEST_ARGUMENT
{
    struct
    {
        ULONG ProblemCodeToClear;                                           //0x0
    } ClearProblem;                                                         //0x0
    union _PNP_REBALANCE_FLAGS Rebalance;                                   //0x0
    struct
    {
        UCHAR ClearWaitingForFdo;                                           //0x0
    } ReenumerateDeviceOnly;                                                //0x0
    struct
    {
        UCHAR StopRequired;                                                 //0x0
    } ResourceRequirementsChanged;                                          //0x0
    struct
    {
        ULONG Flags;                                                        //0x0
    } RequestDeviceReset;                                                   //0x0
    struct
    {
        struct _PLUGPLAY_CONTROL_STATUS_DATA* ControlStatusData;            //0x0
    } SetDeviceProblem;                                                     //0x0
    struct
    {
        enum _PNP_DEVICE_IOMMU_DOMAIN_POLICY DomainPolicy;                  //0x0
    } UpdateConsoleLockState;                                               //0x0
    ULONGLONG AsUlong64;                                                    //0x0
};
/* Used in */
// _PNP_DEVICE_ACTION_ENTRY

