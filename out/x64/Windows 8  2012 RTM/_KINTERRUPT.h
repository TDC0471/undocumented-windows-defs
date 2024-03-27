#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KINTERRUPT.h>
#include <_KINTERRUPT_MODE.h>
#include <_KINTERRUPT_POLARITY.h>
#include <_KEVENT.h>
#include <_KTRAP_FRAME.h>
#include <_KTHREAD.h>

//0xb0 bytes (sizeof)
struct _KINTERRUPT
{
    SHORT Type;                                                             //0x0
    SHORT Size;                                                             //0x2
    struct _LIST_ENTRY InterruptListEntry;                                  //0x8
    UCHAR (*ServiceRoutine)(struct _KINTERRUPT* arg1, VOID* arg2);          //0x18
    UCHAR (*MessageServiceRoutine)(struct _KINTERRUPT* arg1, VOID* arg2, ULONG arg3); //0x20
    ULONG MessageIndex;                                                     //0x28
    VOID* ServiceContext;                                                   //0x30
    ULONGLONG SpinLock;                                                     //0x38
    ULONG TickCount;                                                        //0x40
    ULONGLONG* ActualLock;                                                  //0x48
    VOID (*DispatchAddress)();                                              //0x50
    ULONG Vector;                                                           //0x58
    UCHAR Irql;                                                             //0x5c
    UCHAR SynchronizeIrql;                                                  //0x5d
    UCHAR FloatingSave;                                                     //0x5e
    UCHAR Connected;                                                        //0x5f
    ULONG Number;                                                           //0x60
    UCHAR ShareVector;                                                      //0x64
    USHORT ActiveCount;                                                     //0x66
    LONG InternalState;                                                     //0x68
    enum _KINTERRUPT_MODE Mode;                                             //0x6c
    enum _KINTERRUPT_POLARITY Polarity;                                     //0x70
    ULONG ServiceCount;                                                     //0x74
    ULONG DispatchCount;                                                    //0x78
    struct _KEVENT* PassiveEvent;                                           //0x80
    struct _KTRAP_FRAME* TrapFrame;                                         //0x88
    ULONG DispatchCode[4];                                                  //0x90
    VOID* DisconnectData;                                                   //0xa0
    struct _KTHREAD* volatile ServiceThread;                                //0xa8
};
/* Used in */
// _KINTERRUPT
// _KSECONDARY_IDT_ENTRY

