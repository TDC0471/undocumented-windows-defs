#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _ARBITER_REQUEST_SOURCE
{
    ArbiterRequestUndefined = -1,
    ArbiterRequestLegacyReported = 0,
    ArbiterRequestHalReported = 1,
    ArbiterRequestLegacyAssigned = 2,
    ArbiterRequestPnpDetected = 3,
    ArbiterRequestPnpEnumerated = 4
};
/* Used in */
// _ARBITER_LIST_ENTRY

