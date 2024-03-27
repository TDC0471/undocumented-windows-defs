#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _HV_CPUID_FUNCTION
{
    HvCpuIdFunctionVersionAndFeatures = 1,
    HvCpuIdFunctionHvVendorAndMaxFunction = 1073741824,
    HvCpuIdFunctionHvInterface = 1073741825,
    HvCpuIdFunctionMsHvVersion = 1073741826,
    HvCpuIdFunctionMsHvFeatures = 1073741827,
    HvCpuIdFunctionMsHvEnlightenmentInformation = 1073741828,
    HvCpuIdFunctionMsHvImplementationLimits = 1073741829,
    HvCpuIdFunctionMsHvHardwareFeatures = 1073741830,
    HvCpuIdFunctionMaxReserved = 1073741830
};
