#pragma once
/* ------------------ */

#include <_NT_IORING_REG_FILES_REQ_FLAGS.h>
#include <_NT_IORING_REG_FILES_ADV_FLAGS.h>

//0x8 bytes (sizeof)
struct _NT_IORING_REG_FILES_FLAGS
{
    enum _NT_IORING_REG_FILES_REQ_FLAGS Required;                           //0x0
    enum _NT_IORING_REG_FILES_ADV_FLAGS Advisory;                           //0x4
};
/* Used in */
// _NT_IORING_OP_REGISTER_FILES

