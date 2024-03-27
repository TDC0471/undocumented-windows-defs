#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _VI_VERIFIER_ISSUE
{
    ULONGLONG IssueType;                                                    //0x0
    VOID* Address;                                                          //0x8
    ULONGLONG Parameters[2];                                                //0x10
};
