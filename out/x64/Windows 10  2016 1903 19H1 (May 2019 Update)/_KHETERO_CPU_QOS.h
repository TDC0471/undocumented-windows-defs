#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _KHETERO_CPU_QOS
{
    KHeteroCpuQosDefault = 0,
    KHeteroCpuQosHigh = 0,
    KHeteroCpuQosMedium = 1,
    KHeteroCpuQosLow = 2,
    KHeteroCpuQosMultimedia = 3,
    KHeteroCpuQosDynamic = 4,
    KHeteroCpuQosMax = 4
};
/* Used in */
// _PROCESSOR_POWER_STATE

