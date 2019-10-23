#include <stdio.h>
#include <dylib.h>
int main()
{
int a[6];
 initarray(a,6);
show(a,6);
printf("max = %4d\n",max(a,6));
printf("sum =%4d\n",sum(a,6));
return 0;
}
