#pragma once
/* ------------------ */


//0x30 bytes (sizeof)
struct _LOADER_RESET_REASON
{
    UCHAR Supplied;                                                         //0x0
    union
    {
        struct
        {
            UCHAR Pch;                                                      //0x8
            UCHAR EmbeddedController;                                       //0x9
            UCHAR Reserved[6];                                              //0xa
        } Component;                                                        //0x8
        ULONGLONG AsULONG64;                                                //0x8
        UCHAR AsBytes[8];                                                   //0x8
    } Basic;                                                                //0x8
    ULONG AdditionalInfo[8];                                                //0x10
};
/* Used in */
// _LOADER_PARAMETER_EXTENSION

