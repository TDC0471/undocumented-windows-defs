#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum TlgIn_t
{
    TlgInNULL = 0,
    TlgInUNICODESTRING = 1,
    TlgInANSISTRING = 2,
    TlgInINT8 = 3,
    TlgInUINT8 = 4,
    TlgInINT16 = 5,
    TlgInUINT16 = 6,
    TlgInINT32 = 7,
    TlgInUINT32 = 8,
    TlgInINT64 = 9,
    TlgInUINT64 = 10,
    TlgInFLOAT = 11,
    TlgInDOUBLE = 12,
    TlgInBOOL32 = 13,
    TlgInBINARY = 14,
    TlgInGUID = 15,
    _TlgInPOINTER_unsupported = 16,
    TlgInFILETIME = 17,
    TlgInSYSTEMTIME = 18,
    TlgInSID = 19,
    TlgInHEXINT32 = 20,
    TlgInHEXINT64 = 21,
    TlgInCOUNTEDSTRING = 22,
    TlgInCOUNTEDANSISTRING = 23,
    _TlgInSTRUCT = 24,
    TlgInCOUNTEDBINARY = 25,
    _TlgInMax = 26,
    TlgInINTPTR = 9,
    TlgInUINTPTR = 10,
    TlgInPOINTER = 21,
    _TlgInCcount = 32,
    TlgInVcount = 64,
    _TlgInChain = 128,
    _TlgInCustom = 96,
    _TlgInTypeMask = 31,
    _TlgInCountMask = 96,
    _TlgInFlagMask = 224
};
