#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MI_PFN_ULONG5
{
    union
    {
        ULONG EntireField;                                                  //0x0
        struct
        {
            ULONG NodeBlinkHigh:21;                                         //0x0
            ULONG NodeFlinkMiddle:11;                                       //0x0
        } StandbyList;                                                      //0x0
        struct
        {
            UCHAR ModifiedListBucketIndex:4;                                //0x0
        } MappedPageList;                                                   //0x0
        struct
        {
            UCHAR AnchorLargePageSize:2;                                    //0x0
            UCHAR Spare0:6;                                                 //0x0
            UCHAR Spare1:8;                                                 //0x1
            USHORT Spare2;                                                  //0x2
        } Active;                                                           //0x0
    };
};
/* Used in */
// _MMPFN

