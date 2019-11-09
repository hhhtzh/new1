#include "ch2.h"
int main()
{
int i;
printf("----test program----\n");
sleep(2);
printf("parent pid = %d\n",getppid());
for(i=0;i<100;i++)
{
printf("%d is running %d lines.\n",getpid(),i);
}
return 0;
}

