#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _KENLISTMENT_STATE
{
    KEnlistmentUninitialized = 0,
    KEnlistmentActive = 256,
    KEnlistmentPreparing = 257,
    KEnlistmentPrepared = 258,
    KEnlistmentInDoubt = 259,
    KEnlistmentCommitted = 260,
    KEnlistmentCommittedNotify = 261,
    KEnlistmentCommitRequested = 262,
    KEnlistmentAborted = 263,
    KEnlistmentDelegated = 264,
    KEnlistmentDelegatedDisconnected = 265,
    KEnlistmentPrePreparing = 266,
    KEnlistmentForgotten = 267,
    KEnlistmentRecovering = 268,
    KEnlistmentSavepointing = 269,
    KEnlistmentAborting = 270,
    KEnlistmentReadOnly = 271,
    KEnlistmentOutcomeUnavailable = 272,
    KEnlistmentOffline = 273,
    KEnlistmentPrePrepared = 274,
    KEnlistmentInitialized = 275
};
/* Used in */
// _KENLISTMENT
// _KENLISTMENT_HISTORY

