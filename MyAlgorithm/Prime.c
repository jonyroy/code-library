#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#define MAX 10000000
int status[MAX]={0};
int Prime()
{
    long int i,j,sqrtN;
    sqrtN=(int)(sqrt((double)MAX));
    for(i=3;i<=sqrtN;i+=2)
    {
    if(status[i]==0)
    {
    for(j=i*i;j<=MAX;j+=i+i)
    status[j]=1;
    }
    }
    status[0]=1;
    status[1]=1;
    status[2]=0;
    return 0;
}
int main()
{
    long int P;
    while(scanf("%ld",&P)!=EOF)
    {
     if(P%2==0&&P>2)
     printf("Not Prime\n");
     else
     if(status[P]==0)
     printf("Prime\n");
     else
     printf("Not Prime\n");
    }
return 0;
}
