#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _WHEA_PCIEXPRESS_BRIDGE_CONTROL_STATUS
{
    struct
    {
        USHORT BridgeSecondaryStatus;                                       //0x0
        USHORT BridgeControl;                                               //0x2
    };
    ULONG AsULONG;                                                          //0x0
};
/* Used in */
// _WHEA_PCIEXPRESS_ERROR

