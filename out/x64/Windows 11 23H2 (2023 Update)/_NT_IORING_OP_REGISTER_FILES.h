#pragma once
/* ------------------ */

#include <_NT_IORING_OP_FLAGS.h>
#include <_NT_IORING_REG_FILES_FLAGS.h>

//0x18 bytes (sizeof)
struct _NT_IORING_OP_REGISTER_FILES
{
    enum _NT_IORING_OP_FLAGS CommonOpFlags;                                 //0x0
    struct _NT_IORING_REG_FILES_FLAGS Flags;                                //0x4
    ULONG Count;                                                            //0xc
    VOID** Handles;                                                         //0x10
};
/* Used in */
// _NT_IORING_SQE
