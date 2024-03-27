#pragma once
/* ------------------ */


//0x1 bytes (sizeof)
struct _MI_WSLE
{
    union
    {
        struct
        {
            UCHAR Age:4;                                                    //0x0
            UCHAR Protection:3;                                             //0x0
            UCHAR Reserved:1;                                               //0x0
        } e1;                                                               //0x0
        struct
        {
            UCHAR EntireWsle;                                               //0x0
        } e2;                                                               //0x0
    } u1;                                                                   //0x0
};
/* Used in */
// _MI_SYSTEM_VA_STATE

