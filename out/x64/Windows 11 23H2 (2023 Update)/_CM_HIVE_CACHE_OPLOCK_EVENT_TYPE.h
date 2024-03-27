#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _CM_HIVE_CACHE_OPLOCK_EVENT_TYPE
{
    OplockEventOnPrimary = 0,
    OplockEventOnLog1 = 1,
    OplockEventOnLog2 = 2,
    OplockBreakThreadKillEvent = 3,
    OplockBreakThreadEndEvent = 4,
    OplockBreakThreadSyncEvent = 5,
    OplockBreakThreadWaitEventsMax = 4,
    OplockRelatedEventsMax = 6
};
