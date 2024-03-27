#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _PCI_BUSMASTER_RID_TYPE
{
    BusmasterRidInvalid = 0,
    BusmasterRidFromDeviceRid = 1,
    BusmasterRidFromBridgeRid = 2,
    BusmasterRidFromMultipleBridges = 3
};
/* Used in */
// _PCI_BUSMASTER_DESCRIPTOR

