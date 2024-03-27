#pragma once
/* ------------------ */

#include <_SID_AND_ATTRIBUTES.h>
#include <_SID_AND_ATTRIBUTES_HASH.h>
#include <_AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION.h>

//0x130 bytes (sizeof)
struct _AUTHZBASEP_CLAIM_ATTRIBUTES_COLLECTION
{
    ULONG DeviceGroupsCount;                                                //0x0
    struct _SID_AND_ATTRIBUTES* pDeviceGroups;                              //0x4
    ULONG RestrictedDeviceGroupsCount;                                      //0x8
    struct _SID_AND_ATTRIBUTES* pRestrictedDeviceGroups;                    //0xc
    struct _SID_AND_ATTRIBUTES_HASH DeviceGroupsHash;                       //0x10
    struct _SID_AND_ATTRIBUTES_HASH RestrictedDeviceGroupsHash;             //0x98
    struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION* pUserSecurityAttributes; //0x120
    struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION* pDeviceSecurityAttributes; //0x124
    struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION* pRestrictedUserSecurityAttributes; //0x128
    struct _AUTHZBASEP_SECURITY_ATTRIBUTES_INFORMATION* pRestrictedDeviceSecurityAttributes; //0x12c
};
/* Used in */
// _SEP_LOGON_SESSION_REFERENCES
// _TOKEN

