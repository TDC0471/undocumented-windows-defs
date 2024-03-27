#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _KTRANSACTION_HISTORY
{
    enum
    {
        KTMOH_CommitTransaction_Result = 1,
        KTMOH_RollbackTransaction_Result = 2    
} RecordType;                                                               //0x0
    ULONG Payload;                                                          //0x4
};
/* Used in */
// _KTRANSACTION

