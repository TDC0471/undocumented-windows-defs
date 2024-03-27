#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _HCELL
{
    LONG Size;                                                              //0x0
    union
    {
        struct
        {
            ULONG Last;                                                     //0x4
            union
            {
                ULONG UserData;                                             //0x8
                ULONG Next;                                                 //0x8
            } u;                                                            //0x8
        } OldCell;                                                          //0x4
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

