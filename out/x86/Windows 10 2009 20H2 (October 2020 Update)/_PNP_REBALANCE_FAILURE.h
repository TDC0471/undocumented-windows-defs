#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _PNP_REBALANCE_FAILURE
{
    RebalanceFailureNone = 0,
    RebalanceFailureDisabled = 1,
    RebalanceFailureNoMemory = 2,
    RebalanceFailureQueryStopUnexpectedVeto = 3,
    RebalanceFailureNoRequirements = 4,
    RebalanceFailureNoCandidates = 5,
    RebalanceFailureNoConfiguration = 6
};
/* Used in */
// _PNP_REBALANCE_TRACE_CONTEXT

