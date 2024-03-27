#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _INVPCID_TYPE
{
    InvpcidIndividualAddress = 0,
    InvpcidSingleContext = 1,
    InvpcidAllContextAndGlobals = 2,
    InvpcidAllContext = 3
};
