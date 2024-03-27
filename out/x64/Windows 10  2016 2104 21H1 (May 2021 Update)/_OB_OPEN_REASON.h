#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
enum _OB_OPEN_REASON
{
    ObCreateHandle = 0,
    ObOpenHandle = 1,
    ObDuplicateHandle = 2,
    ObInheritHandle = 3,
    ObMaxOpenReason = 4
};
/* Used in */
// _OBJECT_TYPE_INITIALIZER

