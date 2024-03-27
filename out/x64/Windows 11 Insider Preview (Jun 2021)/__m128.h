#pragma once
/* ------------------ */


//0x10 bytes (sizeof)
union __m128
{
    float m128_f32[4];                                                      //0x0
    ULONGLONG m128_u64[2];                                                  //0x0
    CHAR m128_i8[16];                                                       //0x0
    SHORT m128_i16[8];                                                      //0x0
    LONG m128_i32[4];                                                       //0x0
    LONGLONG m128_i64[2];                                                   //0x0
    UCHAR m128_u8[16];                                                      //0x0
    USHORT m128_u16[8];                                                     //0x0
    ULONG m128_u32[4];                                                      //0x0
};
