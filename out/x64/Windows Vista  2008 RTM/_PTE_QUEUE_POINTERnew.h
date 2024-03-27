#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _PTE_QUEUE_POINTER
{
    LONGLONG PointerPte:48;                                                 //0x0
    ULONGLONG TimeStamp:16;                                                 //0x0
    LONGLONG Data;                                                          //0x0
};
