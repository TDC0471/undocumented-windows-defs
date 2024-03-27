#pragma once
/* ------------------ */

#include <_NT_IORING_OP_FLAGS.h>
#include <_NT_IORING_HANDLEREF.h>

//0x18 bytes (sizeof)
struct _NT_IORING_OP_CANCEL
{
    enum _NT_IORING_OP_FLAGS CommonOpFlags;                                 //0x0
    union _NT_IORING_HANDLEREF File;                                        //0x8
    ULONGLONG CancelId;                                                     //0x10
};
/* Used in */
// _NT_IORING_SQE

