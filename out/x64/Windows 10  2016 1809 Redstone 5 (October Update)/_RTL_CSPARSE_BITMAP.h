#pragma once
/* ------------------ */


//0x40 bytes (sizeof)
struct _RTL_CSPARSE_BITMAP
{
    ULONGLONG CommitDirectory;                                              //0x0
    ULONGLONG* CommitBitmap;                                                //0x8
    ULONGLONG* UserBitmap;                                                  //0x10
    LONGLONG BitCount;                                                      //0x18
    ULONGLONG BitmapLock;                                                   //0x20
    ULONGLONG DecommitPageIndex;                                            //0x28
    ULONGLONG RtlpCSparseBitmapWakeLock;                                    //0x30
    UCHAR LockType;                                                         //0x38
    UCHAR AddressSpace;                                                     //0x39
    UCHAR MemType;                                                          //0x3a
    UCHAR AllocAlignment;                                                   //0x3b
};
/* Used in */
// _RTLP_HP_ALLOC_TRACKER
// _RTL_SPARSE_ARRAY

