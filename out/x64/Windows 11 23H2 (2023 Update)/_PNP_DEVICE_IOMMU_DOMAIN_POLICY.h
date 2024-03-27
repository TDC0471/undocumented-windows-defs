#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _PNP_DEVICE_IOMMU_DOMAIN_POLICY
{
    IommuDomainPolicyAllowAll = 0,
    IommuDomainPolicyBlockPassthrough = 1,
    IommuDomainPolicyMax = 2
};
/* Used in */
// _PNP_DEVICE_ACTION_REQUEST_ARGUMENT

