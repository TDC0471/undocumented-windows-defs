#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum KTM_STATE
{
    KKtmUninitialized = 0,
    KKtmInitialized = 1,
    KKtmRecovering = 2,
    KKtmOnline = 3,
    KKtmRecoveryFailed = 4,
    KKtmOffline = 5
};
/* Used in */
// _KTM

