#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _POP_FX_COMPONENT_FLAGS
{
    struct
    {
        LONG Value;                                                         //0x0
        LONG Value2;                                                        //0x4
    };
    ULONG RefCount:30;                                                      //0x0
    ULONG Idling:1;                                                         //0x0
    struct
    {
        ULONG Active:1;                                                     //0x0
    ULONG CriticalIdleOverride:1;                                           //0x4
    ULONG ResidentOverride:1;                                               //0x4
    };
    ULONG Reserved:30;                                                      //0x4
};
/* Used in */
// _POP_FX_COMPONENT

