#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _KPROFILE_SOURCE
{
    ProfileTime = 0,
    ProfileAlignmentFixup = 1,
    ProfileTotalIssues = 2,
    ProfilePipelineDry = 3,
    ProfileLoadInstructions = 4,
    ProfilePipelineFrozen = 5,
    ProfileBranchInstructions = 6,
    ProfileTotalNonissues = 7,
    ProfileDcacheMisses = 8,
    ProfileIcacheMisses = 9,
    ProfileCacheMisses = 10,
    ProfileBranchMispredictions = 11,
    ProfileStoreInstructions = 12,
    ProfileFpInstructions = 13,
    ProfileIntegerInstructions = 14,
    Profile2Issue = 15,
    Profile3Issue = 16,
    Profile4Issue = 17,
    ProfileSpecialInstructions = 18,
    ProfileTotalCycles = 19,
    ProfileIcacheIssues = 20,
    ProfileDcacheAccesses = 21,
    ProfileMemoryBarrierCycles = 22,
    ProfileLoadLinkedIssues = 23,
    ProfileMaximum = 24
};
/* Used in */
// _ETW_PMC_SUPPORT

