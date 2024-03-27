#pragma once
/* ------------------ */

#include <_INTERRUPT_TARGET.h>
#include <_INTERRUPT_RESULT.h>
#include <_INTERRUPT_LINE.h>
#include <_INTERRUPT_LINE_STATE.h>
#include <_KINTERRUPT_MODE.h>

//0xd0 bytes (sizeof)
struct _INTERRUPT_FUNCTION_TABLE
{
    LONG (*InitializeLocalUnit)(VOID* arg1, ULONG arg2, ULONG arg3, ULONG arg4, ULONG arg5, ULONG* arg6); //0x0
    LONG (*InitializeIoUnit)(VOID* arg1);                                   //0x8
    VOID (*SetPriority)(VOID* arg1, ULONG arg2);                            //0x10
    ULONG (*GetLocalUnitError)(VOID* arg1);                                 //0x18
    VOID (*ClearLocalUnitError)(VOID* arg1);                                //0x20
    LONG (*GetLogicalId)(VOID* arg1, struct _INTERRUPT_TARGET* arg2);       //0x28
    LONG (*SetLogicalId)(VOID* arg1, struct _INTERRUPT_TARGET* arg2);       //0x30
    enum _INTERRUPT_RESULT (*AcceptAndGetSource)(VOID* arg1, LONG* arg2, ULONG* arg3); //0x38
    VOID (*EndOfInterrupt)(VOID* arg1);                                     //0x40
    VOID (*FastEndOfInterrupt)();                                           //0x48
    LONG (*SetLineState)(VOID* arg1, struct _INTERRUPT_LINE* arg2, struct _INTERRUPT_LINE_STATE* arg3); //0x50
    LONG (*RequestInterrupt)(VOID* arg1, struct _INTERRUPT_LINE* arg2, struct _INTERRUPT_TARGET* arg3, ULONG arg4, struct _INTERRUPT_LINE* arg5); //0x58
    LONG (*StartProcessor)(VOID* arg1, ULONG arg2, VOID* arg3, ULONG arg4); //0x60
    LONG (*GenerateMessage)(VOID* arg1, struct _INTERRUPT_LINE_STATE* arg2, ULONGLONG* arg3, ULONGLONG* arg4); //0x68
    LONG (*ConvertId)(VOID* arg1, ULONG* arg2, struct _INTERRUPT_TARGET* arg3, UCHAR arg4); //0x70
    LONG (*SaveLocalInterrupts)(VOID* arg1, VOID* arg2);                    //0x78
    LONG (*ReplayLocalInterrupts)(VOID* arg1, VOID* arg2);                  //0x80
    LONG (*DeinitializeLocalUnit)(VOID* arg1);                              //0x88
    LONG (*DeinitializeIoUnit)(VOID* arg1);                                 //0x90
    enum _INTERRUPT_RESULT (*QueryAndGetSource)(VOID* arg1, LONG* arg2, ULONG* arg3, UCHAR* arg4); //0x98
    VOID (*DeactivateInterrupt)(VOID* arg1, ULONG arg2);                    //0xa0
    VOID (*DirectedEndOfInterrupt)(VOID* arg1, ULONG arg2, ULONG arg3);     //0xa8
    LONG (*QueryLocalUnitInfo)(VOID* arg1, ULONG arg2, ULONG* arg3, ULONG* arg4, enum _KINTERRUPT_MODE* arg5, enum _KINTERRUPT_MODE* arg6); //0xb0
    LONG (*QueryPendingState)(VOID* arg1, struct _INTERRUPT_LINE* arg2, UCHAR* arg3, UCHAR* arg4); //0xb8
    VOID (*CaptureGlobalCrashdumpState)(VOID* arg1);                        //0xc0
    VOID (*CaptureProcessorCrashdumpState)(VOID* arg1, ULONG arg2);         //0xc8
};
/* Used in */
// _REGISTERED_INTERRUPT_CONTROLLER

