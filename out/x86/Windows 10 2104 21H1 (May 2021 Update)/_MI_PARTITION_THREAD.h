#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _MI_PARTITION_THREAD
{
    MiZeroPageThreadSlot = 0,
    MiRebuildLargePagesThreadSlot = 1,
    MiPartitionWorkingSetManagerSlot = 2,
    MiDereferenceSegmentThreadSlot = 3,
    MiModifiedPageWriterSlot = 4,
    MiMappedPageWriterSlot = 5,
    MiNumberOfPartitionThreads = 6
};
