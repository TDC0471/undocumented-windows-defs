#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _IO_PAGING_PRIORITY
{
    IoPagingPriorityInvalid = 0,
    IoPagingPriorityNormal = 1,
    IoPagingPriorityHigh = 2,
    IoPagingPriorityReserved1 = 3,
    IoPagingPriorityReserved2 = 4
};
