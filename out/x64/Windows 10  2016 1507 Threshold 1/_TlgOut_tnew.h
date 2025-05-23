#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _TlgOut_t
{
    _TlgOutNULL = 0,
    _TlgOutNOPRINT = 1,
    _TlgOutSTRING = 2,
    _TlgOutBOOLEAN = 3,
    _TlgOutHEX = 4,
    _TlgOutPID = 5,
    _TlgOutTID = 6,
    _TlgOutPORT = 7,
    _TlgOutIPV4 = 8,
    _TlgOutIPV6 = 9,
    _TlgOutSOCKETADDRESS = 10,
    _TlgOutXML = 11,
    _TlgOutJSON = 12,
    _TlgOutWIN32ERROR = 13,
    _TlgOutNTSTATUS = 14,
    _TlgOutHRESULT = 15,
    _TlgOutFILETIME = 16,
    _TlgOutSIGNED = 17,
    _TlgOutUNSIGNED = 18,
    _TlgOutMax = 19,
    _TlgOutChain = 128,
    _TlgOutTypeMask = 127
};
