#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_INTERRUPT_FUNCTION_TABLE.h>
#include <_KNOWN_CONTROLLER_TYPE.h>
#include <_INTERRUPT_PROBLEM.h>
#include <_UNICODE_STRING.h>
#include <POHANDLE__.h>

//0x160 bytes (sizeof)
struct _REGISTERED_INTERRUPT_CONTROLLER
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    VOID* InternalData;                                                     //0x10
    ULONG InternalDataSize;                                                 //0x18
    struct _INTERRUPT_FUNCTION_TABLE FunctionTable;                         //0x20
    enum _KNOWN_CONTROLLER_TYPE KnownType;                                  //0xd8
    ULONG Capabilities;                                                     //0xdc
    ULONG Flags;                                                            //0xe0
    ULONG MaxPriority;                                                      //0xe4
    ULONG UnitId;                                                           //0xe8
    struct _LIST_ENTRY LinesHead;                                           //0xf0
    struct _LIST_ENTRY OutputLinesHead;                                     //0x100
    LONG MinLine;                                                           //0x110
    LONG MaxLine;                                                           //0x114
    ULONG MaxClusterSize;                                                   //0x118
    ULONG MaxClusters;                                                      //0x11c
    ULONG InterruptReplayDataSize;                                          //0x120
    enum _INTERRUPT_PROBLEM Problem;                                        //0x124
    LONG ProblemStatus;                                                     //0x128
    CHAR* ProblemSourceFile;                                                //0x130
    ULONG ProblemSourceLine;                                                //0x138
    ULONG CustomProblem;                                                    //0x13c
    LONG CustomProblemStatus;                                               //0x140
    struct _UNICODE_STRING ResourceId;                                      //0x148
    struct POHANDLE__* PowerHandle;                                         //0x158
};
