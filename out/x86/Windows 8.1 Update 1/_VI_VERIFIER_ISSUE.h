#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _VI_VERIFIER_ISSUE
{
    ULONG IssueType;                                                        //0x0
    VOID* Address;                                                          //0x4
    ULONG Parameters[2];                                                    //0x8
};
