#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _PCI_SLOT_NUMBER
{
    union
    {
        struct
        {
            ULONG DeviceNumber:5;                                           //0x0
            ULONG FunctionNumber:3;                                         //0x0
            ULONG Reserved:24;                                              //0x0
        } bits;                                                             //0x0
        ULONG AsULONG;                                                      //0x0
    } u;                                                                    //0x0
};
/* Used in */
// _PCI_PDO_EXTENSION

