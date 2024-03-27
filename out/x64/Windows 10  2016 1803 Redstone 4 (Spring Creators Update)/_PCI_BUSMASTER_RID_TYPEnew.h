#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _PCI_BUSMASTER_RID_TYPE
{
    BusmasterRidFromDeviceRid = 0,
    BusmasterRidFromBridgeRid = 1,
    BusmasterRidFromMultipleBridges = 2
};
/* Used in */
// _PCI_BUSMASTER_DESCRIPTOR

