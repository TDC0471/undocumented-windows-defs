#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _KTHREAD_CORE_ISOLATION_REASON
{
    KThreadCoreIsolationReasonSimulation = 0,
    KThreadCoreIsolationReasonMitigationPolicy = 1,
    KThreadCoreIsolationReasonMax = 2
};
