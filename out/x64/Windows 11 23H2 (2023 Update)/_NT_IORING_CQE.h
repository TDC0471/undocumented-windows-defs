#pragma once
/* ------------------ */

#include <_IO_STATUS_BLOCK.h>

//0x18 bytes (sizeof)
struct _NT_IORING_CQE
{
    union
    {
        ULONGLONG UserData;                                                 //0x0
        ULONGLONG PaddingUserDataForWow;                                    //0x0
    };
    struct _IO_STATUS_BLOCK IoStatus;                                       //0x8
};
/* Used in */
// _NT_IORING_COMPLETION_QUEUE

