#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _MM_SESSION_SPACE_FLAGS
{
    ULONG Initialized:1;                                                    //0x0
    ULONG DeletePending:1;                                                  //0x0
    ULONG PoolInitialized:1;                                                //0x0
    ULONG DynamicVaInitialized:1;                                           //0x0
    ULONG WsInitialized:1;                                                  //0x0
    ULONG PoolDestroyed:1;                                                  //0x0
    ULONG ObjectInitialized:1;                                              //0x0
    ULONG LeakedPoolDeliberately:1;                                         //0x0
    ULONG Filler:24;                                                        //0x0
};
/* Used in */
// _MM_SESSION_SPACE

