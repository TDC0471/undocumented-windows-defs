#pragma once
/* ------------------ */


//0x120 bytes (sizeof)
struct _SEP_TOKEN_DIAG_TRACK_ENTRY
{
    VOID* ProcessCid;                                                       //0x0
    VOID* ThreadCid;                                                        //0x8
    UCHAR ImageFileName[16];                                                //0x10
    ULONG CreateMethod;                                                     //0x20
    ULONGLONG CreateTrace[30];                                              //0x28
    LONG Count;                                                             //0x118
    LONG CaptureCount;                                                      //0x11c
};
/* Used in */
// _TOKEN

