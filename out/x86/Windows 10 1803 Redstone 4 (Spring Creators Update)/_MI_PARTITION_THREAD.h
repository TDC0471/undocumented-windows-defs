#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _MI_PARTITION_THREAD
{
    MiZeroPageThreadSlot = 0,
    MiPartitionWorkingSetManagerSlot = 1,
    MiDereferenceSegmentThreadSlot = 2,
    MiModifiedPageWriterSlot = 3,
    MiMappedPageWriterSlot = 4,
    MiNumberOfPartitionThreads = 5
};
