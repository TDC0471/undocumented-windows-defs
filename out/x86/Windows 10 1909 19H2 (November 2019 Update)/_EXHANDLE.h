#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _EXHANDLE
{
    union
    {
        struct
        {
            ULONG TagBits:2;                                                //0x0
            ULONG Index:30;                                                 //0x0
        };
        VOID* GenericHandleOverlay;                                         //0x0
        ULONG Value;                                                        //0x0
    };
};
/* Used in */
// _HANDLE_TABLE_ENTRY

