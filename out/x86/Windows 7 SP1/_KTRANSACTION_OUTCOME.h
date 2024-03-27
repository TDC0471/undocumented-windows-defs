#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _KTRANSACTION_OUTCOME
{
    KTxOutcomeUninitialized = 0,
    KTxOutcomeUndetermined = 1,
    KTxOutcomeCommitted = 2,
    KTxOutcomeAborted = 3,
    KTxOutcomeUnavailable = 4
};
/* Used in */
// _KTRANSACTION

