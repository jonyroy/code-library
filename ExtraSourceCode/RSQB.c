#include<stdio.h>
int main()
{
long int i;
long int T,a[4],max;
scanf("%ld",&T);
while(T)
{
scanf("%ld %ld %ld %ld",&a[0],&a[1],&a[2],&a[3]);
max=a[0];
for(i=1;i<4;i++)
{
    if(max<a[i])
    max=a[i];
}

if(a[0]+a[1]+a[2]+a[3]>=2*max)
{
  if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3])
  printf("square\n");
  else if((a[0]==a[1]&&a[2]==a[3])||(a[0]==a[2]&&a[1]==a[3])||(a[0]==a[3]&&a[1]==a[2]))
  printf("rectangle\n");
  else
  printf("quadrangle\n");
}
else
printf("banana\n");
T--;
}
return 0;
}
