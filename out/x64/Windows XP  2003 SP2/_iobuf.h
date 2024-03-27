#pragma once
/* ------------------ */


//0x30 bytes (sizeof)
struct _iobuf
{
    CHAR* _ptr;                                                             //0x0
    LONG _cnt;                                                              //0x8
    CHAR* _base;                                                            //0x10
    LONG _flag;                                                             //0x18
    LONG _file;                                                             //0x1c
    LONG _charbuf;                                                          //0x20
    LONG _bufsiz;                                                           //0x24
    CHAR* _tmpfname;                                                        //0x28
};
