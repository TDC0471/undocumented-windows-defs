#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _KREQUEST_PACKET
{
    VOID* CurrentPacket[3];                                                 //0x0
    VOID (*WorkerRoutine)(VOID* arg1, VOID* arg2, VOID* arg3, VOID* arg4);  //0xc
};
/* Used in */
// _REQUEST_MAILBOX

