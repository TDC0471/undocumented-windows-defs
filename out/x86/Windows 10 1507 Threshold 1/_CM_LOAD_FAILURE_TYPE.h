#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _CM_LOAD_FAILURE_TYPE
{
    _None = 0,
    _CmInitializeHive = 1,
    _HvInitializeHive = 2,
    _HvpBuildMap = 3,
    _HvpBuildMapForLoaderHive = 4,
    _HvpInitMap = 5,
    _HvLoadHive = 6,
    _HvpMapHiveImage = 7,
    _HvpRecoverData = 8,
    _CmpValidateHiveSecurityDescriptors = 9,
    _HvpEnlistBinInMap = 10,
    _CmCheckRegistry = 11,
    _CmRegistryIO = 12,
    _CmCheckRegistry2 = 13,
    _CmpCheckKey = 14,
    _CmpCheckValueList = 15,
    _HvCheckHive = 16,
    _HvCheckBin = 17,
    _HvpGetLogEntryDirtyVector = 18,
    _HvpReadLogEntryHeader = 19,
    _HvpReadLogEntry = 20,
    _CmpMountPreloadedHives = 21,
    _CmpLoadHiveThread = 22
};
/* Used in */
// _HIVE_LOAD_FAILURE

