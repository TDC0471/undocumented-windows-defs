#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _HCELL
{
    LONG Size;                                                              //0x0
    union
    {
        struct
        {
            union
            {
                ULONG UserData;                                             //0x4
                ULONG Next;                                                 //0x4
            } u;                                                            //0x4
        } NewCell;                                                          //0x4
    } u;                                                                    //0x4
};
/* Used in */
// _HIVE_LOAD_FAILURE

