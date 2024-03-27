#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_KINTERRUPT.h>
#include <_KINTERRUPT_MODE.h>
#include <_KINTERRUPT_POLARITY.h>
#include <_KEVENT.h>
#include <_KTRAP_FRAME.h>
#include <_KTHREAD.h>
#include <_INTERRUPT_CONNECTION_DATA.h>
#include <_ISRDPCSTATS.h>

//0xb0 bytes (sizeof)
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
    UCHAR EmulateActiveBoth;                                                //0x39
    USHORT ActiveCount;                                                     //0x3a
    LONG InternalState;                                                     //0x3c
    enum _KINTERRUPT_MODE Mode;                                             //0x40
    enum _KINTERRUPT_POLARITY Polarity;                                     //0x44
    ULONG ServiceCount;                                                     //0x48
    ULONG DispatchCount;                                                    //0x4c
    struct _KEVENT* PassiveEvent;                                           //0x50
    struct _KTRAP_FRAME* TrapFrame;                                         //0x54
    VOID* DisconnectData;                                                   //0x58
    struct _KTHREAD* volatile ServiceThread;                                //0x5c
    struct _INTERRUPT_CONNECTION_DATA* ConnectionData;                      //0x60
    VOID* IntTrackEntry;                                                    //0x64
    struct _ISRDPCSTATS IsrDpcStats;                                        //0x68
    VOID* RedirectObject;                                                   //0xa8
};
/* Used in */
// _KINTERRUPT
// _KPRCB
// _KSECONDARY_IDT_ENTRY

