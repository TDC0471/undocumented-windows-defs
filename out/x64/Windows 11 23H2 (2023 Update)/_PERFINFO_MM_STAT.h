#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _PERFINFO_MM_STAT
{
    PerfInfoMMStatNotUsed = 0,
    PerfInfoMMStatAggregatePageCombine = 1,
    PerfInfoMMStatIterationPageCombine = 2,
    PerfInfoMMStatMax = 3
};
