//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#define N 10000000
int status[N]={0};
int main()
{
long int i,j,sqrtN,K,T,t,l,d,store[10],h;
sqrtN=(long int)(sqrt((double)N));
for(i=3;i<=sqrtN;i+=2)
{
if(status[i]==0)
{
for(j=i*i;j<=N;j+=i+i)
status[j]=1;
}
}
status[1]=0;
status[2]=0;
scanf("%ld",&T);
t=1;
while(t<=T)
{
    scanf("%ld",&K);
    if(K%2==1||K==2)
    {
        if(status[K]==0)
        {
        printf("Case #%ld: %ld\n",t,K);
        t++;
        continue;
        }
    }
    l=1;
    d=2;
    h=1;
    printf("Case #%ld: %ld =",t,K);
    while(l<=(long)sqrt(K))
    {
        if(K%d==0)
        {
            if(h==3)
            printf(" =");
            store[h++]=d;
            printf(" %ld *",store[h-1]);
            store[h++]=K/d;
            printf(" %ld",store[h-1]);
        }
        if(h==5)
        break;
        d++;
        l++;
    }
    printf("\n");
    t++;
}
return 0;
}
