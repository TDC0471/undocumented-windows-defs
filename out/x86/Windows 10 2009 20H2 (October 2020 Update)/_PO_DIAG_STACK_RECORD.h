#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _PO_DIAG_STACK_RECORD
{
    ULONG StackDepth;                                                       //0x0
    VOID* Stack[1];                                                         //0x4
};
/* Used in */
// _EPROCESS

