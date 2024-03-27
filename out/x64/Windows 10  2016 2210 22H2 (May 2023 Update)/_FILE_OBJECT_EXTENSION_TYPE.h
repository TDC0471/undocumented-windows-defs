#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _FILE_OBJECT_EXTENSION_TYPE
{
    FoExtTypeTransactionParams = 0,
    FoExtTypeInternal = 1,
    FoExtTypeIosbRange = 2,
    FoExtTypeGeneric = 3,
    FoExtTypeSfio = 4,
    FoExtTypeSymlink = 5,
    FoExtTypeOplockKey = 6,
    FoExtTypeSilo = 7,
    FoExtTypeMemoryPartitionInfo = 8,
    MaxFoExtTypes = 9
};
