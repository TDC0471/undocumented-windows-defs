#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _KTHREAD_TAG
{
    KThreadTagNone = 0,
    KThreadTagMediaBuffering = 1,
    KThreadTagDeadline = 2,
    KThreadTagMediaOther = 3,
    KThreadTagMax = 4
};
