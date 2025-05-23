#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _KTRANSACTION_STATE
{
    KTransactionUninitialized = 0,
    KTransactionActive = 1,
    KTransactionPreparing = 2,
    KTransactionPrepared = 3,
    KTransactionInDoubt = 4,
    KTransactionCommitted = 5,
    KTransactionAborted = 6,
    KTransactionDelegated = 7,
    KTransactionPrePreparing = 8,
    KTransactionForgotten = 9,
    KTransactionRecovering = 10,
    KTransactionSavepointing = 11,
    KTransactionPrePrepared = 12
};
/* Used in */
// _KTRANSACTION

