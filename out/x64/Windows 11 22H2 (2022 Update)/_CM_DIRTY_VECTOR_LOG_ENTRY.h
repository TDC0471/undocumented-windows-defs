#pragma once
/* ------------------ */

#include <_ETHREAD.h>
#include <_CM_DIRTY_VECTOR_OPERATION.h>

//0x48 bytes (sizeof)
struct _CM_DIRTY_VECTOR_LOG_ENTRY
{
    struct _ETHREAD* Thread;                                                //0x0
    enum _CM_DIRTY_VECTOR_OPERATION Operation;                              //0x8
    union
    {
        struct
        {
            ULONG Start;                                                    //0xc
            ULONG Length;                                                   //0x10
        } DirtyVectorModifiedContext;                                       //0xc
        struct
        {
            ULONG RangeCount;                                               //0xc
            ULONG SetBitCount;                                              //0x10
        } DirtyDataCaptureContext;                                          //0xc
        struct
        {
            ULONG Context1;                                                 //0xc
            ULONG Context2;                                                 //0x10
        } Raw;                                                              //0xc
    } Data;                                                                 //0xc
    VOID* Stack[6];                                                         //0x18
};
/* Used in */
// _CM_DIRTY_VECTOR_LOG

