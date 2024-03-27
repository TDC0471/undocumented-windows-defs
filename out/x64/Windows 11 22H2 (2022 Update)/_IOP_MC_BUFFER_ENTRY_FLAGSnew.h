#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _IOP_MC_BUFFER_ENTRY_FLAGS
{
    IOP_MCBF_UNLOCK = 1,
    IOP_MCBF_SIGNAL_RUNDOWN = 2,
    IOP_MCBF_CLEANED_UP = 4
};
/* Used in */
// _IOP_MC_BUFFER_ENTRY

