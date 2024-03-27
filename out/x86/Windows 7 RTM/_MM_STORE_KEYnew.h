#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union _MM_STORE_KEY
{
    ULONG KeyLow:28;                                                        //0x0
    ULONG KeyHigh:4;                                                        //0x0
    ULONG EntireKey;                                                        //0x0
};
