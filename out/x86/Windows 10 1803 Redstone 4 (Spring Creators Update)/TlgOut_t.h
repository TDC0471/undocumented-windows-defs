#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum TlgOut_t
{
    TlgOutNULL = 0,
    TlgOutNOPRINT = 1,
    TlgOutSTRING = 2,
    TlgOutBOOLEAN = 3,
    TlgOutHEX = 4,
    TlgOutPID = 5,
    TlgOutTID = 6,
    TlgOutPORT = 7,
    TlgOutIPV4 = 8,
    TlgOutIPV6 = 9,
    TlgOutSOCKETADDRESS = 10,
    TlgOutXML = 11,
    TlgOutJSON = 12,
    TlgOutWIN32ERROR = 13,
    TlgOutNTSTATUS = 14,
    TlgOutHRESULT = 15,
    TlgOutFILETIME = 16,
    TlgOutSIGNED = 17,
    TlgOutUNSIGNED = 18,
    TlgOutUTF8 = 35,
    TlgOutPKCS7_WITH_TYPE_INFO = 36,
    TlgOutCODE_POINTER = 37,
    _TlgOutMax = 38,
    _TlgOutChain = 128,
    _TlgOutTypeMask = 127
};
