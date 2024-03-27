#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _WHEA_PCIEXPRESS_COMMAND_STATUS
{
    struct
    {
        USHORT Command;                                                     //0x0
        USHORT Status;                                                      //0x2
    };
    ULONG AsULONG;                                                          //0x0
};
/* Used in */
// _WHEA_PCIEXPRESS_ERROR

