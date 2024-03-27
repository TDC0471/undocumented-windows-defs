#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _IRQ_DEVICE_POLICY
{
    IrqPolicyMachineDefault = 0,
    IrqPolicyAllCloseProcessors = 1,
    IrqPolicyOneCloseProcessor = 2,
    IrqPolicyAllProcessorsInMachine = 3,
    IrqPolicySpecifiedProcessors = 4,
    IrqPolicySpreadMessagesAcrossAllProcessors = 5
};
/* Used in */
// _IO_RESOURCE_DESCRIPTOR

