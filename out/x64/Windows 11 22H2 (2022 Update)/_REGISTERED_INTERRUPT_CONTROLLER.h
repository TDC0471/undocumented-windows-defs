#pragma once
/* ------------------ */

#include <_LIST_ENTRY.h>
#include <_INTERRUPT_FUNCTION_TABLE.h>
#include <_KNOWN_CONTROLLER_TYPE.h>
#include <_INTERRUPT_PROBLEM.h>
#include <_UNICODE_STRING.h>
#include <POHANDLE__.h>

//0x178 bytes (sizeof)
struct _REGISTERED_INTERRUPT_CONTROLLER
{
    struct _LIST_ENTRY ListEntry;                                           //0x0
    VOID* InternalData;                                                     //0x10
    ULONG InternalDataSize;                                                 //0x18
    struct _INTERRUPT_FUNCTION_TABLE FunctionTable;                         //0x20
    enum _KNOWN_CONTROLLER_TYPE KnownType;                                  //0xf0
    ULONG Capabilities;                                                     //0xf4
    ULONG Flags;                                                            //0xf8
    ULONG MaxPriority;                                                      //0xfc
    ULONG UnitId;                                                           //0x100
    struct _LIST_ENTRY LinesHead;                                           //0x108
    struct _LIST_ENTRY OutputLinesHead;                                     //0x118
    LONG MinLine;                                                           //0x128
    LONG MaxLine;                                                           //0x12c
    ULONG MaxClusterSize;                                                   //0x130
    ULONG MaxClusters;                                                      //0x134
    ULONG InterruptReplayDataSize;                                          //0x138
    enum _INTERRUPT_PROBLEM Problem;                                        //0x13c
    LONG ProblemStatus;                                                     //0x140
    CHAR* ProblemSourceFile;                                                //0x148
    ULONG ProblemSourceLine;                                                //0x150
    ULONG CustomProblem;                                                    //0x154
    LONG CustomProblemStatus;                                               //0x158
    struct _UNICODE_STRING ResourceId;                                      //0x160
    struct POHANDLE__* PowerHandle;                                         //0x170
};
