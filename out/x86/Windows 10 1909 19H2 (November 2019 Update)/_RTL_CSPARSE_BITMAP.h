#pragma once
/* ------------------ */


//0x24 bytes (sizeof)
struct _RTL_CSPARSE_BITMAP
{
    ULONG* CommitBitmap;                                                    //0x0
    ULONG* UserBitmap;                                                      //0x4
    LONG BitCount;                                                          //0x8
    ULONG BitmapLock;                                                       //0xc
    ULONG DecommitPageIndex;                                                //0x10
    ULONG RtlpCSparseBitmapWakeLock;                                        //0x14
    UCHAR LockType;                                                         //0x18
    UCHAR AddressSpace;                                                     //0x19
    UCHAR MemType;                                                          //0x1a
    UCHAR AllocAlignment;                                                   //0x1b
    ULONG CommitDirectoryMaxSize;                                           //0x1c
    ULONG CommitDirectory[1];                                               //0x20
};
/* Used in */
// _RTLP_HP_ALLOC_TRACKER
// _RTL_SPARSE_ARRAY

