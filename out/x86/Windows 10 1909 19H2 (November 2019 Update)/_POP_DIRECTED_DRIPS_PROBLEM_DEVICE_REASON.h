#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _POP_DIRECTED_DRIPS_PROBLEM_DEVICE_REASON
{
    DirectedDripsProblemDeviceReasonSpecialDevice = 0,
    DirectedDripsProblemDeviceReasonNoDfx = 1,
    DirectedDripsProblemDeviceReasonNoPs4 = 2,
    DirectedDripsProblemDeviceReasonNoPs4Root = 3,
    DirectedDripsProblemDeviceReasonComponentContraint = 4,
    DirectedDripsProblemDeviceReasonDfxFailure = 5,
    DirectedDripsProblemDeviceReasonMax = 6
};
