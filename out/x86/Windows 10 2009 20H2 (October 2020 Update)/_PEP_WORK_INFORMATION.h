#pragma once
/* ------------------ */

#include <_PEP_WORK_TYPE.h>
#include <_PEP_WORK_ACTIVE_COMPLETE.h>
#include <_PEP_WORK_IDLE_STATE.h>
#include <_PEP_WORK_DEVICE_POWER.h>
#include <_PEP_WORK_POWER_CONTROL.h>
#include <_PEP_WORK_DEVICE_IDLE.h>
#include <_PEP_WORK_COMPLETE_IDLE_STATE.h>
#include <_PEP_WORK_COMPLETE_PERF_STATE.h>
#include <_PEP_WORK_ACPI_NOTIFY.h>
#include <_PEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE.h>

//0x20 bytes (sizeof)
struct _PEP_WORK_INFORMATION
{
    enum _PEP_WORK_TYPE WorkType;                                           //0x0
    union
    {
        struct _PEP_WORK_ACTIVE_COMPLETE ActiveComplete;                    //0x4
        struct _PEP_WORK_IDLE_STATE IdleState;                              //0x4
        struct _PEP_WORK_DEVICE_POWER DevicePower;                          //0x4
        struct _PEP_WORK_POWER_CONTROL PowerControl;                        //0x4
        struct _PEP_WORK_DEVICE_IDLE DeviceIdle;                            //0x4
        struct _PEP_WORK_COMPLETE_IDLE_STATE CompleteIdleState;             //0x4
        struct _PEP_WORK_COMPLETE_PERF_STATE CompletePerfState;             //0x4
        struct _PEP_WORK_ACPI_NOTIFY AcpiNotify;                            //0x4
        struct _PEP_WORK_ACPI_EVALUATE_CONTROL_METHOD_COMPLETE ControlMethodComplete; //0x4
    };
};
/* Used in */
// _POP_FX_WORK_ORDER_WATCHDOG_INFO

