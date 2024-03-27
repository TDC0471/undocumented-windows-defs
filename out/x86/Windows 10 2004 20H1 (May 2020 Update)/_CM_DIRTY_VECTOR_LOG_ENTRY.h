#pragma once
/* ------------------ */

#include <_ETHREAD.h>
#include <_CM_DIRTY_VECTOR_OPERATION.h>

//0x28 bytes (sizeof)
struct _CM_DIRTY_VECTOR_LOG_ENTRY
{
    struct _ETHREAD* Thread;                                                //0x0
    enum _CM_DIRTY_VECTOR_OPERATION Operation;                              //0x4
    union
    {
        struct
        {
            ULONG Start;                                                    //0x8
            ULONG Length;                                                   //0xc
        } DirtyVectorModifiedContext;                                       //0x8
        struct
        {
            ULONG RangeCount;                                               //0x8
            ULONG SetBitCount;                                              //0xc
        } DirtyDataCaptureContext;                                          //0x8
        struct
        {
            ULONG Context1;                                                 //0x8
            ULONG Context2;                                                 //0xc
        } Raw;                                                              //0x8
    } Data;                                                                 //0x8
    VOID* Stack[6];                                                         //0x10
};
/* Used in */
// _CM_DIRTY_VECTOR_LOG

