#pragma once
/* ------------------ */


//0x48 bytes (sizeof)
struct _LOADER_PERFORMANCE_DATA
{
    ULONGLONG StartTime;                                                    //0x0
    ULONGLONG EndTime;                                                      //0x8
    ULONGLONG PreloadEndTime;                                               //0x10
    ULONGLONG TcbLoaderStartTime;                                           //0x18
    ULONGLONG LoadHypervisorTime;                                           //0x20
    ULONGLONG LaunchHypervisorTime;                                         //0x28
    ULONGLONG LoadVsmTime;                                                  //0x30
    ULONGLONG LaunchVsmTime;                                                //0x38
    ULONGLONG LoadDriversTime;                                              //0x40
};
/* Used in */
// _LOADER_PARAMETER_EXTENSION

