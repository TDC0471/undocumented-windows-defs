#pragma once
/* ------------------ */


//0x4 bytes (sizeof)
struct _IMAGE_SECURITY_CONTEXT
{
    union
    {
        VOID* PageHashes;                                                   //0x0
        ULONG Value;                                                        //0x0
        struct
        {
            ULONG SecurityBeingCreated:2;                                   //0x0
            ULONG SecurityMandatory:1;                                      //0x0
            ULONG PageHashPointer:29;                                       //0x0
        };
    };
};
/* Used in */
// _MI_IMAGE_SECURITY_REFERENCE

