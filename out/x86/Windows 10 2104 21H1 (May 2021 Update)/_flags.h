#pragma once
/* ------------------ */


//0x1 bytes (sizeof)
struct _flags
{
    UCHAR Removable:1;                                                      //0x0
    UCHAR GroupAssigned:1;                                                  //0x0
    UCHAR GroupCommitted:1;                                                 //0x0
    UCHAR GroupAssignmentFixed:1;                                           //0x0
    UCHAR ProcessorOnly:1;                                                  //0x0
    UCHAR SmtSetsPresent:1;                                                 //0x0
    UCHAR Fill:2;                                                           //0x0
};
/* Used in */
// _KNODE

