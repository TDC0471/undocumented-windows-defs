#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KINTERRUPT.h>
#include <_KINTERRUPT_MODE.h>
#include <_KTRAP_FRAME.h>

//0x80 bytes (sizeof)
struct _KINTERRUPT
{
    SHORT Type;                                                             //0x0
    SHORT Size;                                                             //0x2
    struct _LIST_ENTRY InterruptListEntry;                                  //0x8
    UCHAR (*ServiceRoutine)(struct _KINTERRUPT* arg1, VOID* arg2);          //0x18
    VOID* ServiceContext;                                                   //0x20
    ULONGLONG SpinLock;                                                     //0x28
    ULONG TickCount;                                                        //0x30
    ULONGLONG* ActualLock;                                                  //0x38
    VOID (*DispatchAddress)();                                              //0x40
    ULONG Vector;                                                           //0x48
    UCHAR Irql;                                                             //0x4c
    UCHAR SynchronizeIrql;                                                  //0x4d
    UCHAR FloatingSave;                                                     //0x4e
    UCHAR Connected;                                                        //0x4f
    CHAR Number;                                                            //0x50
    UCHAR ShareVector;                                                      //0x51
    enum _KINTERRUPT_MODE Mode;                                             //0x54
    ULONG ServiceCount;                                                     //0x58
    ULONG DispatchCount;                                                    //0x5c
    struct _KTRAP_FRAME* TrapFrame;                                         //0x60
    VOID* Reserved;                                                         //0x68
    ULONG DispatchCode[4];                                                  //0x70
};
/* Used in */
// _KINTERRUPT

