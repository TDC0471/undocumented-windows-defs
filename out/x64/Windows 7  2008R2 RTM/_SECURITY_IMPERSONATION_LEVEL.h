#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _SECURITY_IMPERSONATION_LEVEL
{
    SecurityAnonymous = 0,
    SecurityIdentification = 1,
    SecurityImpersonation = 2,
    SecurityDelegation = 3
};
/* Used in */
// _SECURITY_QUALITY_OF_SERVICE
// _SECURITY_SUBJECT_CONTEXT
// _TOKEN

