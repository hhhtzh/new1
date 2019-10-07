#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int creat(const char *pathname,mode_tmode);
off_t lseak(int filedes,off_toffset,int whence);
sszie_t write(int filedes,const void * buff,size_tnbtyes);
