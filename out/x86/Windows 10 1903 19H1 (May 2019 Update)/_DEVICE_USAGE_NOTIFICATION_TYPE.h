#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _DEVICE_USAGE_NOTIFICATION_TYPE
{
    DeviceUsageTypeUndefined = 0,
    DeviceUsageTypePaging = 1,
    DeviceUsageTypeHibernation = 2,
    DeviceUsageTypeDumpFile = 3,
    DeviceUsageTypeBoot = 4,
    DeviceUsageTypePostDisplay = 5,
    DeviceUsageTypeGuestAssigned = 6
};
/* Used in */
// _DUMP_STACK_CONTEXT
// _IO_STACK_LOCATION

