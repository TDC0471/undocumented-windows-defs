#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_INTERRUPT_FUNCTION_TABLE.h>
#include <_KNOWN_CONTROLLER_TYPE.h>
#include <_INTERRUPT_PROBLEM.h>
#include <_UNICODE_STRING.h>
#include <POHANDLE__.h>

//0x168 bytes (sizeof)
struct _REGISTERED_INTERRUPT_CONTROLLER
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    VOID* InternalData;                                                     //0x10
    ULONG InternalDataSize;                                                 //0x18
    struct _INTERRUPT_FUNCTION_TABLE FunctionTable;                         //0x20
    enum _KNOWN_CONTROLLER_TYPE KnownType;                                  //0xe0
    ULONG Capabilities;                                                     //0xe4
    ULONG Flags;                                                            //0xe8
    ULONG MaxPriority;                                                      //0xec
    ULONG UnitId;                                                           //0xf0
    struct _LIST_ENTRY LinesHead;                                           //0xf8
    struct _LIST_ENTRY OutputLinesHead;                                     //0x108
    LONG MinLine;                                                           //0x118
    LONG MaxLine;                                                           //0x11c
    ULONG MaxClusterSize;                                                   //0x120
    ULONG MaxClusters;                                                      //0x124
    ULONG InterruptReplayDataSize;                                          //0x128
    enum _INTERRUPT_PROBLEM Problem;                                        //0x12c
    LONG ProblemStatus;                                                     //0x130
    CHAR* ProblemSourceFile;                                                //0x138
    ULONG ProblemSourceLine;                                                //0x140
    ULONG CustomProblem;                                                    //0x144
    LONG CustomProblemStatus;                                               //0x148
    struct _UNICODE_STRING ResourceId;                                      //0x150
    struct POHANDLE__* PowerHandle;                                         //0x160
};
