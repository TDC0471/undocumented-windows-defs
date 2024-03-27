#pragma once
/* ------------------ */


//0x9c bytes (sizeof)
struct _SEP_TOKEN_DIAG_TRACK_ENTRY
{
    VOID* ProcessCid;                                                       //0x0
    VOID* ThreadCid;                                                        //0x4
    UCHAR ImageFileName[16];                                                //0x8
    ULONG CreateMethod;                                                     //0x18
    ULONG CreateTrace[30];                                                  //0x1c
    LONG Count;                                                             //0x94
    LONG CaptureCount;                                                      //0x98
};
/* Used in */
// _TOKEN

