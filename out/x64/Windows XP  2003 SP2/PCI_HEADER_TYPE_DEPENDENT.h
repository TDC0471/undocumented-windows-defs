#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
union PCI_HEADER_TYPE_DEPENDENT
{
    struct
    {
        UCHAR Spare[4];                                                     //0x0
    } type0;                                                                //0x0
    struct
    {
        UCHAR PrimaryBus;                                                   //0x0
        UCHAR SecondaryBus;                                                 //0x1
        UCHAR SubordinateBus;                                               //0x2
        UCHAR SubtractiveDecode:1;                                          //0x3
        UCHAR IsaBitSet:1;                                                  //0x3
        UCHAR VgaBitSet:1;                                                  //0x3
        UCHAR WeChangedBusNumbers:1;                                        //0x3
        UCHAR IsaBitRequired:1;                                             //0x3
    } type1;                                                                //0x0
    struct
    {
        UCHAR PrimaryBus;                                                   //0x0
        UCHAR SecondaryBus;                                                 //0x1
        UCHAR SubordinateBus;                                               //0x2
        UCHAR SubtractiveDecode:1;                                          //0x3
        UCHAR IsaBitSet:1;                                                  //0x3
        UCHAR VgaBitSet:1;                                                  //0x3
        UCHAR WeChangedBusNumbers:1;                                        //0x3
        UCHAR IsaBitRequired:1;                                             //0x3
    } type2;                                                                //0x0
};
/* Used in */
// _PCI_PDO_EXTENSION

