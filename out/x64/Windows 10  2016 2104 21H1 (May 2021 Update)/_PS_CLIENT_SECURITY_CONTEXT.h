#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _PS_CLIENT_SECURITY_CONTEXT
{
    ULONGLONG ImpersonationData;                                            //0x0
    VOID* ImpersonationToken;                                               //0x0
    ULONGLONG ImpersonationLevel:2;                                         //0x0
    ULONGLONG EffectiveOnly:1;                                              //0x0
};
/* Used in */
// _ETHREAD

