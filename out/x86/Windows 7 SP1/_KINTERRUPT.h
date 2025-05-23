#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KINTERRUPT.h>
#include <_KINTERRUPT_MODE.h>
#include <_KINTERRUPT_POLARITY.h>

//0x278 bytes (sizeof)
struct _KINTERRUPT
{
    SHORT Type;                                                             //0x0
    SHORT Size;                                                             //0x2
    struct _LIST_ENTRY InterruptListEntry;                                  //0x4
    UCHAR (*ServiceRoutine)(struct _KINTERRUPT* arg1, VOID* arg2);          //0xc
    UCHAR (*MessageServiceRoutine)(struct _KINTERRUPT* arg1, VOID* arg2, ULONG arg3); //0x10
    ULONG MessageIndex;                                                     //0x14
    VOID* ServiceContext;                                                   //0x18
    ULONG SpinLock;                                                         //0x1c
    ULONG TickCount;                                                        //0x20
    ULONG* ActualLock;                                                      //0x24
    VOID (*DispatchAddress)();                                              //0x28
    ULONG Vector;                                                           //0x2c
    UCHAR Irql;                                                             //0x30
    UCHAR SynchronizeIrql;                                                  //0x31
    UCHAR FloatingSave;                                                     //0x32
    UCHAR Connected;                                                        //0x33
    ULONG Number;                                                           //0x34
    UCHAR ShareVector;                                                      //0x38
    CHAR Pad[3];                                                            //0x39
    enum _KINTERRUPT_MODE Mode;                                             //0x3c
    enum _KINTERRUPT_POLARITY Polarity;                                     //0x40
    ULONG ServiceCount;                                                     //0x44
    ULONG DispatchCount;                                                    //0x48
    ULONGLONG Rsvd1;                                                        //0x50
    ULONG DispatchCode[135];                                                //0x58
};
/* Used in */
// _KINTERRUPT

