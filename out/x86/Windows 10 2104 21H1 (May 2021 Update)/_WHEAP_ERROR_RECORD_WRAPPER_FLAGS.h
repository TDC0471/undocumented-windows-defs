#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _WHEAP_ERROR_RECORD_WRAPPER_FLAGS
{
    ULONG Preallocated:1;                                                   //0x0
    ULONG FromPersistentStore:1;                                            //0x0
    ULONG PlatformPfaControl:1;                                             //0x0
    ULONG PlatformDirectedOffline:1;                                        //0x0
    ULONG Reserved:28;                                                      //0x0
    ULONG AsULONG;                                                          //0x0
};
/* Used in */
// _WHEAP_ERROR_RECORD_WRAPPER

