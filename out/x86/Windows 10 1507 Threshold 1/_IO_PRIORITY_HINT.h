#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _IO_PRIORITY_HINT
{
    IoPriorityVeryLow = 0,
    IoPriorityLow = 1,
    IoPriorityNormal = 2,
    IoPriorityHigh = 3,
    IoPriorityCritical = 4,
    MaxIoPriorityTypes = 5
};
/* Used in */
// _IO_PRIORITY_INFO

