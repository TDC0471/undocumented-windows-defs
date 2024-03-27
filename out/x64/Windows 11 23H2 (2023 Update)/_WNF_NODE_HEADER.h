#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _WNF_NODE_HEADER
{
    USHORT NodeTypeCode;                                                    //0x0
    USHORT NodeByteSize;                                                    //0x2
};
/* Used in */
// _WNF_DISPATCHER
// _WNF_NAME_INSTANCE
// _WNF_PERMANENT_DATA_STORE
// _WNF_PROCESS_CONTEXT
// _WNF_SCOPE_INSTANCE
// _WNF_SCOPE_MAP
// _WNF_STATE_DATA
// _WNF_SUBSCRIPTION

