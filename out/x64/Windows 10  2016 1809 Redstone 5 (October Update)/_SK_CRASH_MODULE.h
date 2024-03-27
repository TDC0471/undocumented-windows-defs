#pragma once
/* ------------------ */


//0x48 bytes (sizeof)
struct _SK_CRASH_MODULE
{
    WCHAR ImageName[32];                                                    //0x0
    ULONG SizeOfImage;                                                      //0x40
    ULONG TimeDateStamp;                                                    //0x44
};
/* Used in */
// _SK_CRASH_MINIDUMP

