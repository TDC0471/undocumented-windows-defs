#pragma once
/* ------------------ */


//0x2 bytes (sizeof)
union _AER_ROOTPORT_DESCRIPTOR_FLAGS
{
    USHORT UncorrectableErrorMaskRW:1;                                      //0x0
    USHORT UncorrectableErrorSeverityRW:1;                                  //0x0
    USHORT CorrectableErrorMaskRW:1;                                        //0x0
    USHORT AdvancedCapsAndControlRW:1;                                      //0x0
    USHORT RootErrorCommandRW:1;                                            //0x0
    USHORT Reserved:11;                                                     //0x0
    USHORT AsUSHORT;                                                        //0x0
};
/* Used in */
// _WHEA_AER_ROOTPORT_DESCRIPTOR

