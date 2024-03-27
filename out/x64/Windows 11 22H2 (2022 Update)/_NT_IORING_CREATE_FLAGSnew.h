#pragma once
/* ------------------ */

#include <_NT_IORING_CREATE_REQUIRED_FLAGS.h>
#include <_NT_IORING_CREATE_ADVISORY_FLAGS.h>

//0x8 bytes (sizeof)
struct _NT_IORING_CREATE_FLAGS
{
    enum _NT_IORING_CREATE_REQUIRED_FLAGS Required;                         //0x0
    enum _NT_IORING_CREATE_ADVISORY_FLAGS Advisory;                         //0x4
};
/* Used in */
// _NT_IORING_INFO

