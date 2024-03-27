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
    KHeteroCpuQosDeadline = 4,
    KHeteroCpuQosEco = 5,
    KHeteroCpuQosDynamic = 6,
    KHeteroCpuQosMax = 6
};
/* Used in */
// _PROCESSOR_POWER_STATE

