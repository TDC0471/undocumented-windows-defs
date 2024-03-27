#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _KHETERO_CPU_QOS
{
    KHeteroCpuQosDefault = 0,
    KHeteroCpuQosHigh = 0,
    KHeteroCpuQosMedium = 1,
    KHeteroCpuQosLow = 2,
    KHeteroCpuQosDynamic = 3,
    KHeteroCpuQosMax = 3
};
/* Used in */
// _PROCESSOR_POWER_STATE

