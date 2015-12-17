//Accpted
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
#include<stdlib.h>
#define MAX 1001
long gcd(long a,long b)
{
    long d;
    if(a==0&&b==0)
    return 1;
    else if(a==0)
    return b;
    else if(b==0)
    return a;
    while(a%b!=0)
    {
        d=a%b;
        a=b;
        b=d;
    }
    return b;
}
int main()
{
    long int m[MAX],n[MAX],i;
    long int temp,b,j,g,p,val;
    while(1)
    {
        i=1;
        scanf("%ld",&val);
        if(val==0)
        break;
        m[i++]=val;
        while(1)
        {
            scanf("%ld",&val);
            if(val==0)
            break;
            m[i]=val;
            i++;
        }
        b=i-1;
     for(i=1;i<b;i++)
     {
         for(j=1;j<b-i+1;j++)
         {
             if(m[j]>m[j+1])
             {
                 temp=m[j];
                 m[j]=m[j+1];
                 m[j+1]=temp;
             }
         }
     }
     j=1;
     for(i=2;i<=b;i++)
     {
         n[j++]=m[i]-m[1];
     }
     if(j==2)
     {
     printf("%ld\n",n[1]);
     continue;
     }
     p=n[1];
     for(i=1;i<=j-2;i++)
     {
         g=gcd(p,n[i+1]);
         p=g;
     }
     printf("%ld\n",g);
    }
    return 0;
}
