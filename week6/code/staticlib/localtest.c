#include "staticlib.h"
#include <stdio.h>
int main()
{
int a[6];
initarray(a,6);
showarray(a,6);
printf("max= %4d\n" ,max(a,6));
printf("sum= %4d\n" ,sum(a,6));
return 0;
}
