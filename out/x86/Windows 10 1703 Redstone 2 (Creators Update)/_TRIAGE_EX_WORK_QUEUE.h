#pragma once
/* ------------------ */

#include <_KPRIQUEUE.h>

//0x19c bytes (sizeof)
struct _TRIAGE_EX_WORK_QUEUE
{
    struct _KPRIQUEUE WorkPriQueue;                                         //0x0
};
/* Used in */
// _TRIAGE_9F_PNP
// _TRIAGE_9F_POWER

