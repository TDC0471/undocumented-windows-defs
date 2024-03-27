#pragma once
/* ------------------ */

#include <_RTL_RB_TREE.h>
#include <_EX_PUSH_LOCK.h>

//0x10 bytes (sizeof)
struct _ETW_PRIV_HANDLE_DEMUX_TABLE
{
    struct _RTL_RB_TREE Tree;                                               //0x0
    struct _EX_PUSH_LOCK Lock;                                              //0x8
    USHORT SequenceNumber;                                                  //0xc
};
/* Used in */
// _ETW_SILODRIVERSTATE

