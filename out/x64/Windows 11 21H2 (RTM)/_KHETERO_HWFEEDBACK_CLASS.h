#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _KHETERO_HWFEEDBACK_CLASS
{
    UCHAR PerformanceClass;                                                 //0x0
    UCHAR EfficiencyClass;                                                  //0x1
    UCHAR PerformanceClassRawValue;                                         //0x2
    UCHAR EfficiencyClassRawValue;                                          //0x3
};
/* Used in */
// _KHETRO_HWFEEDBACK_TYPE

