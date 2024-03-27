#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
struct _IMAGE_SECURITY_CONTEXT
{
    union
    {
        VOID* PageHashes;                                                   //0x0
        ULONGLONG Value;                                                    //0x0
        struct
        {
            ULONGLONG SecurityBeingCreated:2;                               //0x0
            ULONGLONG SecurityMandatory:1;                                  //0x0
            ULONGLONG PageHashPointer:61;                                   //0x0
        };
    };
};
/* Used in */
// _MI_IMAGE_SECURITY_REFERENCE

