#include "my.h"
int main()
{
printf("caller3 pid = %d,ppid = %d\n",getpid(),getppid());
execl("/new1/week9/test1","./test1","123","hellow","World",NULL);
printf("execl after calling!\n");
return 0;}
