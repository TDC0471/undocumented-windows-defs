#pragma once
/* ------------------ */


//0xc bytes (sizeof)
struct _Wx86ThreadState
{
    ULONG* CallBx86Eip;                                                     //0x0
    VOID* DeallocationCpu;                                                  //0x4
    UCHAR UseKnownWx86Dll;                                                  //0x8
    CHAR OleStubInvoked;                                                    //0x9
};
/* Used in */
// _TEB

