#pragma once
/* ------------------ */

#include <_SID_AND_ATTRIBUTES.h>
#include <_SID_AND_ATTRIBUTES_HASH.h>
#include <_AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION.h>

//0x260 bytes (sizeof)
struct _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION
{
    ULONG DeviceGroupsCount;                                                //0x0
    struct _SID_AND_ATTRIBUTES* pDeviceGroups;                              //0x8
    ULONG RestrictedDeviceGroupsCount;                                      //0x10
    struct _SID_AND_ATTRIBUTES* pRestrictedDeviceGroups;                    //0x18
    struct _SID_AND_ATTRIBUTES_HASH DeviceGroupsHash;                       //0x20
    struct _SID_AND_ATTRIBUTES_HASH RestrictedDeviceGroupsHash;             //0x130
    struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION* pUserSecurityAttributes; //0x240
    struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION* pDeviceSecurityAttributes; //0x248
    struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION* pRestrictedUserSecurityAttributes; //0x250
    struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION* pRestrictedDeviceSecurityAttributes; //0x258
};
/* Used in */
// _TOKEN

