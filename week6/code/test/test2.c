#include <stdio.h>
#include <dylib.h>
#include <stdlib.h>
#include <dlfcn.h>
int main()
{
void *hd;
void (*f1)(),(*f4)();
int (*f2)(),(*f3)();
int a[6];
char *error;
hd=dlopen("../dynamiclib/libdylib.so",RTLD_LAZY);
if(!hd)
{
fprintf(stderr,"%s\n",dlerror());
exit(1);
}
f4=dlsym(hd,"initarray");
if((error=dlerror())!=NULL){
fprintf(stderr,"%s\n",dlerror());
exit(1);
}
f1=dlsym(hd,"show");
if((error=dlerror())!=NULL){
fprintf(stderr,"%s\n",dlerror());
exit(1);
}
f2=dlsym(hd,"max");
if((error=dlerror())!=NULL){
fprintf(stderr,"%s\n",dlerror());
exit(1);
}
f3=dlsym(hd,"sum");
if((error=dlerror())!=NULL){
fprintf(stderr,"%s\n",dlerror());
exit(1);
}
f4(a,6);
f1(a,6);
printf("max = %4d\n",f2(a,6));
printf("sum = %4d\n",f3(a,6));
if(dlclose(hd)<0){
fprintf(stderr,"%s\n",dlerror());
exit(1);
}
return 0;
}
