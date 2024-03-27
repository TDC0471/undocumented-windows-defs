#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _ETW_PROVIDER_STATE
{
    EtwProviderStateFree = 0,
    EtwProviderStateTransition = 1,
    EtwProviderStateActive = 2,
    EtwProviderStateMax = 3
};
/* Used in */
// _ETW_PROVIDER_TABLE_ENTRY

