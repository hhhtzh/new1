int max(int * a,int n)
{
int i,m;
m=a[0];
for(i=0;i<n;i++)
if(m<a[i])
m=a[i];
return m;

}

int sum(int *a,int n)
{
int i,m;;
m=0;
for(i=0;i<n;i++)
m+=a[i];
return m;

}
