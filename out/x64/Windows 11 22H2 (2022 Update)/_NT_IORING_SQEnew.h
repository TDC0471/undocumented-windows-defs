#pragma once
/* ------------------ */

#include <IORING_OP_CODE.h>
#include <_NT_IORING_SQE_FLAGS.h>
#include <_NT_IORING_OP_READ.h>
#include <_NT_IORING_OP_REGISTER_FILES.h>
#include <_NT_IORING_OP_REGISTER_BUFFERS.h>
#include <_NT_IORING_OP_CANCEL.h>
#include <_NT_IORING_OP_WRITE.h>
#include <_NT_IORING_OP_FLUSH.h>
#include <_NT_IORING_OP_RESERVED.h>

//0x40 bytes (sizeof)
struct _NT_IORING_SQE
{
    enum IORING_OP_CODE OpCode;                                             //0x0
    enum _NT_IORING_SQE_FLAGS Flags;                                        //0x4
    union
    {
        ULONGLONG UserData;                                                 //0x8
        ULONGLONG PaddingUserDataForWow;                                    //0x8
    };
    union
    {
        struct _NT_IORING_OP_READ Read;                                     //0x10
        struct _NT_IORING_OP_REGISTER_FILES RegisterFiles;                  //0x10
        struct _NT_IORING_OP_REGISTER_BUFFERS RegisterBuffers;              //0x10
        struct _NT_IORING_OP_CANCEL Cancel;                                 //0x10
        struct _NT_IORING_OP_WRITE Write;                                   //0x10
        struct _NT_IORING_OP_FLUSH Flush;                                   //0x10
        struct _NT_IORING_OP_RESERVED ReservedMaxSizePadding;               //0x10
    };
};
/* Used in */
// _NT_IORING_SUBMISSION_QUEUE

