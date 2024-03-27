#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
struct _TXN_PARAMETER_BLOCK
{
    USHORT Length;                                                          //0x0
    USHORT TxFsContext;                                                     //0x2
    VOID* TransactionObject;                                                //0x8
};
/* Used in */
// _IO_DRIVER_CREATE_CONTEXT

