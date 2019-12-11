#include "my.h"
int i=0;
void func()
{
int fuffer[256];
printf("i=%d\n",1);
i++;
func();
}
int main()
{
func();
sleep(10);
}
