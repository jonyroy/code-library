//Accepted
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    long int x,y,T,i,d,n,s,r,p,q,c;
    scanf("%ld",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%ld%ld",&x,&y);
        if(y-x==0)
        {
            printf("0\n");
            continue;
        }
        d=(y-x);
        c=d/2;
        n=(long)(((long)sqrt((double)(1+8*c))-1)/2);
        s=(n*(n+1))/2;
        p=d-2*s;
       if(p==0)
       printf("%ld\n",2*n);
       else
       if(p==n||(p-1)==n||(p+1)==n)
       printf("%ld\n",2*n+1);
       else
       if(p<n)
       printf("%ld\n",2*n+1);
       else
       printf("%ld\n",2*n+2);
    }
    return 0;
}
