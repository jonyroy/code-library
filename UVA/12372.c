#include<stdio.h>

int main()
{
int T,l,w,h,m=1;

scanf("%d",&T);
while(T)
{

scanf("%d %d %d",&l,&w,&h);

if(l>20||w>20||h>20)
printf("Case %d: bad\n",m);
else
printf("Case %d: good\n",m);

T--;
m++;
}
return 0;
}
