#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _SEP_AUDIT_POLICY_CATEGORIES
{
    ULONG System:4;                                                         //0x0
    ULONG Logon:4;                                                          //0x0
    ULONG ObjectAccess:4;                                                   //0x0
    ULONG PrivilegeUse:4;                                                   //0x0
    ULONG DetailedTracking:4;                                               //0x0
    ULONG PolicyChange:4;                                                   //0x0
    ULONG AccountManagement:4;                                              //0x0
    ULONG DirectoryServiceAccess:4;                                         //0x0
    ULONG AccountLogon:4;                                                   //0x4
};
/* Used in */
// _SEP_AUDIT_POLICY

