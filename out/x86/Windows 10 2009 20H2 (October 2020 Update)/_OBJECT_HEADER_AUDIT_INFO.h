#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _OBJECT_HEADER_AUDIT_INFO
{
    VOID* SecurityDescriptor;                                               //0x0
    ULONG Reserved;                                                         //0x4
};
