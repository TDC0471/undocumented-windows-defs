#pragma once
/* ------------------ */


//0x40 bytes (sizeof)
struct _RTL_CSPARSE_BITMAP
{
    ULONGLONG* CommitBitmap;                                                //0x0
    ULONGLONG* UserBitmap;                                                  //0x8
    LONGLONG BitCount;                                                      //0x10
    ULONGLONG BitmapLock;                                                   //0x18
    ULONGLONG DecommitPageIndex;                                            //0x20
    ULONGLONG RtlpCSparseBitmapWakeLock;                                    //0x28
    UCHAR LockType;                                                         //0x30
    UCHAR AddressSpace;                                                     //0x31
    UCHAR MemType;                                                          //0x32
    UCHAR AllocAlignment;                                                   //0x33
    ULONG CommitDirectoryMaxSize;                                           //0x34
    ULONGLONG CommitDirectory[1];                                           //0x38
};
/* Used in */
// _RTLP_HP_ALLOC_TRACKER
// _RTL_SPARSE_ARRAY

