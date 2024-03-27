#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _ADD_DRIVER_STAGE
{
    ClassConfigFilters = 0,
    LowerDeviceFilters = 1,
    LowerClassFilters = 2,
    DeviceService = 3,
    UpperDeviceFilters = 4,
    UpperClassFilters = 5,
    MaximumAddStage = 6
};
