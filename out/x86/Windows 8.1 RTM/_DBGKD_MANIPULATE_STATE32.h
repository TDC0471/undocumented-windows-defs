#pragma once
/* ------------------ */

#include <_DBGKD_READ_MEMORY32.h>
#include <_DBGKD_WRITE_MEMORY32.h>
#include <_DBGKD_READ_MEMORY64.h>
#include <_DBGKD_WRITE_MEMORY64.h>
#include <_DBGKD_GET_CONTEXT.h>
#include <_DBGKD_SET_CONTEXT.h>
#include <_DBGKD_WRITE_BREAKPOINT32.h>
#include <_DBGKD_RESTORE_BREAKPOINT.h>
#include <_DBGKD_CONTINUE.h>
#include <_DBGKD_CONTINUE2.h>
#include <_DBGKD_READ_WRITE_IO32.h>
#include <_DBGKD_READ_WRITE_IO_EXTENDED32.h>
#include <_DBGKD_QUERY_SPECIAL_CALLS.h>
#include <_DBGKD_SET_SPECIAL_CALL32.h>
#include <_DBGKD_SET_INTERNAL_BREAKPOINT32.h>
#include <_DBGKD_GET_INTERNAL_BREAKPOINT32.h>
#include <_DBGKD_GET_VERSION32.h>
#include <_DBGKD_BREAKPOINTEX.h>
#include <_DBGKD_READ_WRITE_MSR.h>
#include <_DBGKD_SEARCH_MEMORY.h>
#include <_DBGKD_CONTEXT_EX.h>

//0x34 bytes (sizeof)
struct _DBGKD_MANIPULATE_STATE32
{
    ULONG ApiNumber;                                                        //0x0
    USHORT ProcessorLevel;                                                  //0x4
    USHORT Processor;                                                       //0x6
    LONG ReturnStatus;                                                      //0x8
    union
    {
        struct _DBGKD_READ_MEMORY32 ReadMemory;                             //0xc
        struct _DBGKD_WRITE_MEMORY32 WriteMemory;                           //0xc
        struct _DBGKD_READ_MEMORY64 ReadMemory64;                           //0xc
        struct _DBGKD_WRITE_MEMORY64 WriteMemory64;                         //0xc
        struct _DBGKD_GET_CONTEXT GetContext;                               //0xc
        struct _DBGKD_SET_CONTEXT SetContext;                               //0xc
        struct _DBGKD_WRITE_BREAKPOINT32 WriteBreakPoint;                   //0xc
        struct _DBGKD_RESTORE_BREAKPOINT RestoreBreakPoint;                 //0xc
        struct _DBGKD_CONTINUE Continue;                                    //0xc
        struct _DBGKD_CONTINUE2 Continue2;                                  //0xc
        struct _DBGKD_READ_WRITE_IO32 ReadWriteIo;                          //0xc
        struct _DBGKD_READ_WRITE_IO_EXTENDED32 ReadWriteIoExtended;         //0xc
        struct _DBGKD_QUERY_SPECIAL_CALLS QuerySpecialCalls;                //0xc
        struct _DBGKD_SET_SPECIAL_CALL32 SetSpecialCall;                    //0xc
        struct _DBGKD_SET_INTERNAL_BREAKPOINT32 SetInternalBreakpoint;      //0xc
        struct _DBGKD_GET_INTERNAL_BREAKPOINT32 GetInternalBreakpoint;      //0xc
        struct _DBGKD_GET_VERSION32 GetVersion32;                           //0xc
        struct _DBGKD_BREAKPOINTEX BreakPointEx;                            //0xc
        struct _DBGKD_READ_WRITE_MSR ReadWriteMsr;                          //0xc
        struct _DBGKD_SEARCH_MEMORY SearchMemory;                           //0xc
        struct _DBGKD_CONTEXT_EX GetContextEx;                              //0xc
        struct _DBGKD_CONTEXT_EX SetContextEx;                              //0xc
    } u;                                                                    //0xc
};
