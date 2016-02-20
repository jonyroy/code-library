#include<stdio.h>
int main()
{
int N,K,P,T,m=1,val,ans;
scanf("%d",&T);
while(T)
{
scanf("%d %d %d",&N,&K,&P);
val=(P+K)%N;
if(val==0)
ans=N;
else
ans=val;
printf("Case %d: %d\n",m,ans);
T--;
m++;
}
return 0;
}
