#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum PCI_EXPRESS_DEVICE_TYPE
{
    PciExpressEndpoint = 0,
    PciExpressLegacyEndpoint = 1,
    PciExpressRootPort = 4,
    PciExpressUpstreamSwitchPort = 5,
    PciExpressDownstreamSwitchPort = 6,
    PciExpressToPciXBridge = 7,
    PciXToExpressBridge = 8,
    PciExpressRootComplexIntegratedEndpoint = 9,
    PciExpressRootComplexEventCollector = 10
};
/* Used in */
// _WHEA_PCIEXPRESS_ERROR

