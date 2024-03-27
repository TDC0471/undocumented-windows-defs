#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum PCI_SIGNATURE
{
    PciPdoExtensionType = 1768116272,
    PciFdoExtensionType = 1768116273,
    PciArb_Io = 1768116274,
    PciArb_Memory = 1768116275,
    PciArb_Interrupt = 1768116276,
    PciArb_BusNumber = 1768116277,
    PciTrans_Interrupt = 1768116278,
    PciInterface_BusHandler = 1768116279,
    PciInterface_IntRouteHandler = 1768116280,
    PciInterface_PciCb = 1768116281,
    PciInterface_LegacyDeviceDetection = 1768116282,
    PciInterface_PmeHandler = 1768116283,
    PciInterface_DevicePresent = 1768116284,
    PciInterface_NativeIde = 1768116285,
    PciInterface_Location = 1768116286,
    PciInterface_AgpTarget = 1768116287
};
/* Used in */
// PCI_SECONDARY_EXTENSION
// _PCI_COMMON_EXTENSION
// _PCI_FDO_EXTENSION
// _PCI_INTERFACE
// _PCI_PDO_EXTENSION

