#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union _MM_STORE_KEY
{
    ULONGLONG KeyLow:60;                                                    //0x0
    ULONGLONG KeyHigh:4;                                                    //0x0
    ULONGLONG EntireKey;                                                    //0x0
};
