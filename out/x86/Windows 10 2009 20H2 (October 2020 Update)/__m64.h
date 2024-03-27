#pragma once
/* ------------------ */


//0x8 bytes (sizeof)
union __m64
{
    ULONGLONG m64_u64;                                                      //0x0
    float m64_f32[2];                                                       //0x0
    CHAR m64_i8[8];                                                         //0x0
    SHORT m64_i16[4];                                                       //0x0
    LONG m64_i32[2];                                                        //0x0
    LONGLONG m64_i64;                                                       //0x0
    UCHAR m64_u8[8];                                                        //0x0
    USHORT m64_u16[4];                                                      //0x0
    ULONG m64_u32[2];                                                       //0x0
};
