#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _RTL_CSPARSE_BITMAP
{
    ULONG CommitDirectory;                                                  //0x0
    ULONG* CommitBitmap;                                                    //0x4
    ULONG* UserBitmap;                                                      //0x8
    LONG BitCount;                                                          //0xc
    ULONG BitmapLock;                                                       //0x10
    ULONG DecommitPageIndex;                                                //0x14
    ULONG RtlpCSparseBitmapWakeLock;                                        //0x18
    UCHAR LockType;                                                         //0x1c
    UCHAR AddressSpace;                                                     //0x1d
    UCHAR MemType;                                                          //0x1e
    UCHAR AllocAlignment;                                                   //0x1f
};
/* Used in */
// _RTLP_HP_ALLOC_TRACKER
// _RTL_SPARSE_ARRAY

