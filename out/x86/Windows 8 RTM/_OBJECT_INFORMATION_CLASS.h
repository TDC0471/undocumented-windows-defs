#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _OBJECT_INFORMATION_CLASS
{
    ObjectBasicInformation = 0,
    ObjectNameInformation = 1,
    ObjectTypeInformation = 2,
    ObjectTypesInformation = 3,
    ObjectHandleFlagInformation = 4,
    ObjectSessionInformation = 5,
    MaxObjectInfoClass = 6
};
