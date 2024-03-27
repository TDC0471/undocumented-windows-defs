#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MM_SESSION_SPACE_FLAGS
{
    ULONG Initialized:1;                                                    //0x0
    ULONG Filler0:3;                                                        //0x0
    ULONG HasWsLock:1;                                                      //0x0
    ULONG DeletePending:1;                                                  //0x0
    ULONG Filler:26;                                                        //0x0
};
/* Used in */
// _MM_SESSION_SPACE

