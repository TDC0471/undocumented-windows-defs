#pragma once
/* ------------------ */

#include <_MI_WRITE_MODES.h>

//0x20 bytes (sizeof)
struct _MI_WRITE_CALIBRATION
{
    ULONG MaximumNumberProcessors;                                          //0x0
    UCHAR OptimalWriteType;                                                 //0x4
    UCHAR CalibrationCompleted;                                             //0x5
    UCHAR CalibrationFinal[2];                                              //0x6
    ULONGLONG PerProcessorNumberOfBytes;                                    //0x8
    ULONG OptimalWriteProcessors[2];                                        //0x10
    struct _MI_WRITE_MODES* PureZeroing;                                    //0x18
};
/* Used in */
// _MI_SYSTEM_NODE_INFORMATION

