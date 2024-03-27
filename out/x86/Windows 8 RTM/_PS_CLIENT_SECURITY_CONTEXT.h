#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _PS_CLIENT_SECURITY_CONTEXT
{
    ULONG ImpersonationData;                                                //0x0
    VOID* ImpersonationToken;                                               //0x0
    ULONG ImpersonationLevel:2;                                             //0x0
    ULONG EffectiveOnly:1;                                                  //0x0
};
/* Used in */
// _ETHREAD

