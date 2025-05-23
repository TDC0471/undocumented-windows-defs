#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _TlgIn_t
{
    _TlgInNULL = 0,
    _TlgInUNICODESTRING = 1,
    _TlgInANSISTRING = 2,
    _TlgInINT8 = 3,
    _TlgInUINT8 = 4,
    _TlgInINT16 = 5,
    _TlgInUINT16 = 6,
    _TlgInINT32 = 7,
    _TlgInUINT32 = 8,
    _TlgInINT64 = 9,
    _TlgInUINT64 = 10,
    _TlgInFLOAT = 11,
    _TlgInDOUBLE = 12,
    _TlgInBOOL32 = 13,
    _TlgInBINARY = 14,
    _TlgInGUID = 15,
    _TlgInPOINTER_unsupported = 16,
    _TlgInFILETIME = 17,
    _TlgInSYSTEMTIME = 18,
    _TlgInSID = 19,
    _TlgInHEXINT32 = 20,
    _TlgInHEXINT64 = 21,
    _TlgInCOUNTEDSTRING = 22,
    _TlgInCOUNTEDANSISTRING = 23,
    _TlgInSTRUCT = 24,
    _TlgInMax = 25,
    _TlgInINTPTR = 7,
    _TlgInUINTPTR = 8,
    _TlgInPOINTER = 20,
    _TlgInCcount = 32,
    _TlgInVcount = 64,
    _TlgInChain = 128,
    _TlgInCustom = 96,
    _TlgInTypeMask = 31,
    _TlgInCountMask = 96,
    _TlgInFlagMask = 224
};
