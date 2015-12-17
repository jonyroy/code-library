//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
long int fib[100]={1,1};
int fibonacci()
{
    int i;
    for(i=2;i<=50;i++)
    {
        fib[i]=fib[i-2]+fib[i-1];
    }
    return 0;
}
int binary(long int x)
{
    int i=1,j=50,k;
    while(i<j)
    {
        k=(i+j)/2;
        if(x==fib[k])
        return k;
        else if(x>fib[k])
        i=k+1;
        else
        j=k;
    }
    return i-1;
}
int main()
{
    int N,i,re,j,t;
    char d[100];
    long int f,temp;
    fibonacci();
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        scanf("%ld",&f);
        if(f==0)
        {
            printf("0 = 0 (fib)\n");
            i++;
            continue;
        }
        re=binary(f);
        t=0;
        temp=f;
        for(j=re;j>=1;j--)
        {
            if(f>=fib[j])
            {
            f=f-fib[j];
            d[t]='1';
            t++;
            }
            else
            {
               d[t]='0';
                t++;
            }
        }
        d[t]='\0';
        printf("%ld = %s (fib)\n",temp,d);
    }
    return 0;
}
