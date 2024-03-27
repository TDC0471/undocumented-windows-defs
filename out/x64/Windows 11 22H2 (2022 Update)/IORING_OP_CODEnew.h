#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum IORING_OP_CODE
{
    IORING_OP_NOP = 0,
    IORING_OP_READ = 1,
    IORING_OP_REGISTER_FILES = 2,
    IORING_OP_REGISTER_BUFFERS = 3,
    IORING_OP_CANCEL = 4,
    IORING_OP_WRITE = 5,
    IORING_OP_FLUSH = 6
};
/* Used in */
// _NT_IORING_SQE

