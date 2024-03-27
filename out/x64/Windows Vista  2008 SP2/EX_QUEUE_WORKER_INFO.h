#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union EX_QUEUE_WORKER_INFO
{
    ULONG QueueDisabled:1;                                                  //0x0
    ULONG MakeThreadsAsNecessary:1;                                         //0x0
    ULONG WaitMode:1;                                                       //0x0
    ULONG WorkerCount:29;                                                   //0x0
    LONG QueueWorkerInfo;                                                   //0x0
};
/* Used in */
// _EX_WORK_QUEUE

