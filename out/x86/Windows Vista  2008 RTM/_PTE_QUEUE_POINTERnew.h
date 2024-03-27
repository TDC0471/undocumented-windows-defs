#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _PTE_QUEUE_POINTER
{
    struct
    {
        LONG PointerPte;                                                    //0x0
        LONG TimeStamp;                                                     //0x4
    };
    LONGLONG Data;                                                          //0x0
};
