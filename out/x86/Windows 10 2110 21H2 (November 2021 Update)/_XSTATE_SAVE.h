#pragma once
/* ------------------ */

#include <_XSTATE_SAVE.h>
#include <_XSAVE_AREA.h>
#include <_KTHREAD.h>
#include <_XSTATE_CONTEXT.h>

//0x20 bytes (sizeof)
struct _XSTATE_SAVE
{
    union
    {
        struct
        {
            LONGLONG Reserved1;                                             //0x0
            ULONG Reserved2;                                                //0x8
            struct _XSTATE_SAVE* Prev;                                      //0xc
            struct _XSAVE_AREA* Reserved3;                                  //0x10
            struct _KTHREAD* Thread;                                        //0x14
            VOID* Reserved4;                                                //0x18
            UCHAR Level;                                                    //0x1c
        };
        struct _XSTATE_CONTEXT XStateContext;                               //0x0
    };
};
/* Used in */
// _KTHREAD
// _XSTATE_SAVE

