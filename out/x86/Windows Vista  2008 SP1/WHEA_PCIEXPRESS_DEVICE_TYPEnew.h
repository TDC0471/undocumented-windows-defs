#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum WHEA_PCIEXPRESS_DEVICE_TYPE
{
    WheaPciExpressEndpoint = 0,
    WheaPciExpressLegacyEndpoint = 1,
    WheaPciExpressRootPort = 4,
    WheaPciExpressUpstreamSwitchPort = 5,
    WheaPciExpressDownstreamSwitchPort = 6,
    WheaPciExpressToPciXBridge = 7,
    WheaPciXToExpressBridge = 8,
    WheaPciExpressRootComplexIntegratedEndpoint = 9,
    WheaPciExpressRootComplexEventCollector = 10
};
/* Used in */
// _WHEA_PCIEXPRESS_ERROR

