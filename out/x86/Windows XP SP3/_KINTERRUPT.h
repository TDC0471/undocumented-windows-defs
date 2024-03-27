#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KINTERRUPT.h>
#include <_KINTERRUPT_MODE.h>

//0x1e4 bytes (sizeof)
struct _KINTERRUPT
{
    SHORT Type;                                                             //0x0
    SHORT Size;                                                             //0x2
    struct _LIST_ENTRY InterruptListEntry;                                  //0x4
    UCHAR (*ServiceRoutine)(struct _KINTERRUPT* arg1, VOID* arg2);          //0xc
    VOID* ServiceContext;                                                   //0x10
    ULONG SpinLock;                                                         //0x14
    ULONG TickCount;                                                        //0x18
    ULONG* ActualLock;                                                      //0x1c
    VOID (*DispatchAddress)();                                              //0x20
    ULONG Vector;                                                           //0x24
    UCHAR Irql;                                                             //0x28
    UCHAR SynchronizeIrql;                                                  //0x29
    UCHAR FloatingSave;                                                     //0x2a
    UCHAR Connected;                                                        //0x2b
    CHAR Number;                                                            //0x2c
    UCHAR ShareVector;                                                      //0x2d
    enum _KINTERRUPT_MODE Mode;                                             //0x30
    ULONG ServiceCount;                                                     //0x34
    ULONG DispatchCount;                                                    //0x38
    ULONG DispatchCode[106];                                                //0x3c
};
/* Used in */
// _KINTERRUPT

