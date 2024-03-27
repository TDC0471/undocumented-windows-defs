#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
union _INVPCID_DESCRIPTOR
{
    struct
    {
        union
        {
            struct
            {
                ULONGLONG Pcid:12;                                          //0x0
                ULONGLONG Reserved:52;                                      //0x0
            };
            ULONGLONG EntirePcid;                                           //0x0
        };
        ULONGLONG Virtual;                                                  //0x8
    } IndividualAddress;                                                    //0x0
    struct
    {
        union
        {
            struct
            {
                ULONGLONG Pcid:12;                                          //0x0
                ULONGLONG Reserved:52;                                      //0x0
            };
            ULONGLONG EntirePcid;                                           //0x0
        };
        ULONGLONG Reserved2;                                                //0x8
    } SingleContext;                                                        //0x0
    struct
    {
        ULONGLONG Reserved[2];                                              //0x0
    } AllContextAndGlobals;                                                 //0x0
    struct
    {
        ULONGLONG Reserved[2];                                              //0x0
    } AllContext;                                                           //0x0
};
