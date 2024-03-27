#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _WORK_QUEUE_TYPE
{
    CriticalWorkQueue = 0,
    DelayedWorkQueue = 1,
    HyperCriticalWorkQueue = 2,
    NormalWorkQueue = 3,
    BackgroundWorkQueue = 4,
    RealTimeWorkQueue = 5,
    SuperCriticalWorkQueue = 6,
    MaximumWorkQueue = 7,
    CustomPriorityWorkQueue = 32
};
