#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _WORKER_FUNCTION
{
    NoopFunction = 0,
    ReadAhead = 1,
    WriteBehind = 2,
    LazyWriteScan = 3,
    EventSet = 4,
    AsyncRead = 5,
    CompleteAsyncRead = 6,
    AsyncWriteBehind = 7,
    CompleteAsyncWriteBehind = 8
};
/* Used in */
// _WORK_QUEUE_ENTRY

