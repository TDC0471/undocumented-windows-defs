#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _POLICY_AUDIT_EVENT_TYPE
{
    AuditCategorySystem = 0,
    AuditCategoryLogon = 1,
    AuditCategoryObjectAccess = 2,
    AuditCategoryPrivilegeUse = 3,
    AuditCategoryDetailedTracking = 4,
    AuditCategoryPolicyChange = 5,
    AuditCategoryAccountManagement = 6,
    AuditCategoryDirectoryServiceAccess = 7,
    AuditCategoryAccountLogon = 8
};
