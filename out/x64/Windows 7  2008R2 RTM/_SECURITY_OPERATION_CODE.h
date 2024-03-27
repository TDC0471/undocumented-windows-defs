#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _SECURITY_OPERATION_CODE
{
    SetSecurityDescriptor = 0,
    QuerySecurityDescriptor = 1,
    DeleteSecurityDescriptor = 2,
    AssignSecurityDescriptor = 3
};
/* Used in */
// _OBJECT_TYPE_INITIALIZER

