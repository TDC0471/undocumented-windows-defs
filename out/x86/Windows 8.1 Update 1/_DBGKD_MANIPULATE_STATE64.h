#pragma once
/* ------------------ */

#include <_DBGKD_READ_MEMORY64.h>
#include <_DBGKD_WRITE_MEMORY64.h>
#include <_DBGKD_GET_CONTEXT.h>
#include <_DBGKD_SET_CONTEXT.h>
#include <_DBGKD_WRITE_BREAKPOINT64.h>
#include <_DBGKD_RESTORE_BREAKPOINT.h>
#include <_DBGKD_CONTINUE.h>
#include <_DBGKD_CONTINUE2.h>
#include <_DBGKD_READ_WRITE_IO64.h>
#include <_DBGKD_READ_WRITE_IO_EXTENDED64.h>
#include <_DBGKD_QUERY_SPECIAL_CALLS.h>
#include <_DBGKD_SET_SPECIAL_CALL64.h>
#include <_DBGKD_SET_INTERNAL_BREAKPOINT64.h>
#include <_DBGKD_GET_INTERNAL_BREAKPOINT64.h>
#include <_DBGKD_GET_VERSION64.h>
#include <_DBGKD_BREAKPOINTEX.h>
#include <_DBGKD_READ_WRITE_MSR.h>
#include <_DBGKD_SEARCH_MEMORY.h>
#include <_DBGKD_GET_SET_BUS_DATA.h>
#include <_DBGKD_FILL_MEMORY.h>
#include <_DBGKD_QUERY_MEMORY.h>
#include <_DBGKD_SWITCH_PARTITION.h>
#include <_DBGKD_CONTEXT_EX.h>

//0x38 bytes (sizeof)
struct _DBGKD_MANIPULATE_STATE64
{
    ULONG ApiNumber;                                                        //0x0
    USHORT ProcessorLevel;                                                  //0x4
    USHORT Processor;                                                       //0x6
    LONG ReturnStatus;                                                      //0x8
    union
    {
        struct _DBGKD_READ_MEMORY64 ReadMemory;                             //0x10
        struct _DBGKD_WRITE_MEMORY64 WriteMemory;                           //0x10
        struct _DBGKD_GET_CONTEXT GetContext;                               //0x10
        struct _DBGKD_SET_CONTEXT SetContext;                               //0x10
        struct _DBGKD_WRITE_BREAKPOINT64 WriteBreakPoint;                   //0x10
        struct _DBGKD_RESTORE_BREAKPOINT RestoreBreakPoint;                 //0x10
        struct _DBGKD_CONTINUE Continue;                                    //0x10
        struct _DBGKD_CONTINUE2 Continue2;                                  //0x10
        struct _DBGKD_READ_WRITE_IO64 ReadWriteIo;                          //0x10
        struct _DBGKD_READ_WRITE_IO_EXTENDED64 ReadWriteIoExtended;         //0x10
        struct _DBGKD_QUERY_SPECIAL_CALLS QuerySpecialCalls;                //0x10
        struct _DBGKD_SET_SPECIAL_CALL64 SetSpecialCall;                    //0x10
        struct _DBGKD_SET_INTERNAL_BREAKPOINT64 SetInternalBreakpoint;      //0x10
        struct _DBGKD_GET_INTERNAL_BREAKPOINT64 GetInternalBreakpoint;      //0x10
        struct _DBGKD_GET_VERSION64 GetVersion64;                           //0x10
        struct _DBGKD_BREAKPOINTEX BreakPointEx;                            //0x10
        struct _DBGKD_READ_WRITE_MSR ReadWriteMsr;                          //0x10
        struct _DBGKD_SEARCH_MEMORY SearchMemory;                           //0x10
        struct _DBGKD_GET_SET_BUS_DATA GetSetBusData;                       //0x10
        struct _DBGKD_FILL_MEMORY FillMemory;                               //0x10
        struct _DBGKD_QUERY_MEMORY QueryMemory;                             //0x10
        struct _DBGKD_SWITCH_PARTITION SwitchPartition;                     //0x10
        struct _DBGKD_CONTEXT_EX GetContextEx;                              //0x10
        struct _DBGKD_CONTEXT_EX SetContextEx;                              //0x10
    } u;                                                                    //0x10
};
