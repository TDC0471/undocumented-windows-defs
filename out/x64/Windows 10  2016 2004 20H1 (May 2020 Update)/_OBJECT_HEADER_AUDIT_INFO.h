#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _OBJECT_HEADER_AUDIT_INFO
{
    VOID* SecurityDescriptor;                                               //0x0
    ULONGLONG Reserved;                                                     //0x8
};
