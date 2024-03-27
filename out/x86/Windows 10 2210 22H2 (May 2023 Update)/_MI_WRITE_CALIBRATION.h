#pragma once
/* ------------------ */

#include <_MI_WRITE_TYPES.h>
#include <_MI_WRITE_MODES.h>

//0x18 bytes (sizeof)
struct _MI_WRITE_CALIBRATION
{
    ULONG MaximumNumberProcessors;                                          //0x0
    enum _MI_WRITE_TYPES OptimalWriteType;                                  //0x4
    ULONG PerProcessorNumberOfBytes;                                        //0x8
    ULONG OptimalWriteProcessors[2];                                        //0xc
    struct _MI_WRITE_MODES* RawTimeStamps;                                  //0x14
};
/* Used in */
// _MI_NODE_INFORMATION
// _MI_PARTITION_ZEROING

