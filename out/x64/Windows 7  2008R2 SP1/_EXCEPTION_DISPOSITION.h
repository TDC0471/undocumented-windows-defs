#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _EXCEPTION_DISPOSITION
{
    ExceptionContinueExecution = 0,
    ExceptionContinueSearch = 1,
    ExceptionNestedException = 2,
    ExceptionCollidedUnwind = 3
};
/* Used in */
// _EXCEPTION_REGISTRATION_RECORD

