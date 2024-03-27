#pragma once
/* ------------------ */

#include <_NT_IORING_OP_FLAGS.h>
#include <_NT_IORING_HANDLEREF.h>

//0x10 bytes (sizeof)
struct _NT_IORING_OP_FLUSH
{
    enum _NT_IORING_OP_FLAGS CommonOpFlags;                                 //0x0
    ULONG Flags;                                                            //0x4
    union _NT_IORING_HANDLEREF File;                                        //0x8
};
/* Used in */
// _NT_IORING_SQE

