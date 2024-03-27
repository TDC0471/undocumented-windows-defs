#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _SK_CRASH_STACK_FRAME
{
    union
    {
        struct
        {
            ULONG ModuleId;                                                 //0x0
            ULONG Rva;                                                      //0x4
        };
        ULONGLONG Pc;                                                       //0x0
    };
};
/* Used in */
// _SK_CRASH_MINIDUMP

