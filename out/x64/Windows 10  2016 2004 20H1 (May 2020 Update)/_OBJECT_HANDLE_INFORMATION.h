#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _OBJECT_HANDLE_INFORMATION
{
    ULONG HandleAttributes;                                                 //0x0
    ULONG GrantedAccess;                                                    //0x4
};
