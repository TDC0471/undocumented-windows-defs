#pragma once
/* ------------------ */

#include <_IMAGE_IMPORT_CONTROL_TRANSFER_DYNAMIC_RELOCATION.h>
#include <_IMAGE_INDIR_CONTROL_TRANSFER_DYNAMIC_RELOCATION.h>
#include <_IMAGE_SWITCHTABLE_BRANCH_DYNAMIC_RELOCATION.h>

//0xc bytes (sizeof)
struct _RTL_RETPOLINE_RELOCATION_INDEX
{
    USHORT ImportRelocationSize;                                            //0x0
    USHORT IndirectRelocationSize;                                          //0x2
    USHORT SwitchJumpRelocationSize;                                        //0x4
    USHORT StraddleType;                                                    //0x6
    union
    {
        struct _IMAGE_IMPORT_CONTROL_TRANSFER_DYNAMIC_RELOCATION Import;    //0x8
        struct _IMAGE_INDIR_CONTROL_TRANSFER_DYNAMIC_RELOCATION Indir;      //0x8
        struct _IMAGE_SWITCHTABLE_BRANCH_DYNAMIC_RELOCATION SwitchJump;     //0x8
    } StraddleReloc;                                                        //0x8
};
/* Used in */
// _MI_RETPOLINE_RELOCATION_INFORMATION

