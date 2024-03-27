#pragma once
/* ------------------ */


//0x2 bytes (sizeof)
union _HAL_UNMASKED_INTERRUPT_FLAGS
{
    USHORT SecondaryInterrupt:1;                                            //0x0
    USHORT Reserved:15;                                                     //0x0
    USHORT AsUSHORT;                                                        //0x0
};
/* Used in */
// _HAL_UNMASKED_INTERRUPT_INFORMATION

