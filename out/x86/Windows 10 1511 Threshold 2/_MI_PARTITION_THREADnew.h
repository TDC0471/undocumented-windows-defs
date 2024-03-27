#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _MI_PARTITION_THREAD
{
    MiModifiedPageWriteSlot = 0,
    MiDereferenceSegmentThreadSlot = 1,
    MiZeroPageThreadSlot = 2,
    MiPartitionWorkingSetManagerSlot = 3,
    MiMappedPageWriterSlot = 4,
    MiNumberOfPartitionThreads = 5
};
