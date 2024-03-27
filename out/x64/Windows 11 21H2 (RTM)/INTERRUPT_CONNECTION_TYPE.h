#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum INTERRUPT_CONNECTION_TYPE
{
    InterruptTypeControllerInput = 0,
    InterruptTypeXapicMessage = 1,
    InterruptTypeHypertransport = 2,
    InterruptTypeMessageRequest = 3
};
/* Used in */
// _INTERRUPT_VECTOR_DATA

