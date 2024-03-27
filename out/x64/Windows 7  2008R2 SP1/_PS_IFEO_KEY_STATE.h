#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _PS_IFEO_KEY_STATE
{
    PsReadIFEOAllValues = 0,
    PsSkipIFEODebugger = 1,
    PsSkipAllIFEO = 2,
    PsMaxIFEOKeyStates = 3
};
