#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _ARBITER_ACTION
{
    ArbiterActionTestAllocation = 0,
    ArbiterActionRetestAllocation = 1,
    ArbiterActionCommitAllocation = 2,
    ArbiterActionRollbackAllocation = 3,
    ArbiterActionQueryAllocatedResources = 4,
    ArbiterActionWriteReservedResources = 5,
    ArbiterActionQueryConflict = 6,
    ArbiterActionQueryArbitrate = 7,
    ArbiterActionAddReserved = 8,
    ArbiterActionBootAllocation = 9
};
/* Used in */
// _ARBITER_INTERFACE

