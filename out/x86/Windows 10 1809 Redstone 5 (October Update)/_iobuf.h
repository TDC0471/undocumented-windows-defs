#pragma once
/* ------------------ */


//0x20 bytes (sizeof)
struct _iobuf
{
    CHAR* _ptr;                                                             //0x0
    LONG _cnt;                                                              //0x4
    CHAR* _base;                                                            //0x8
    LONG _flag;                                                             //0xc
    LONG _file;                                                             //0x10
    LONG _charbuf;                                                          //0x14
    LONG _bufsiz;                                                           //0x18
    CHAR* _tmpfname;                                                        //0x1c
};
