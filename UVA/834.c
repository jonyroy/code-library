//Accepted
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    long int n,m,i,store[1000],k,b;
    while(scanf("%ld%ld",&n,&m)!=EOF)
    {
        k=1;
        while(1)
        {
            store[k++]=n/m;
            if(n%m==0)
            break;
            b=n%m;
            n=m;
            m=b;
        }
        printf("[");
        for(i=1;i<k;i++)
        {
            if(i==1)
            printf("%ld;",store[i]);
            else
            if(i==k-1)
            printf("%ld",store[i]);
            else
            printf("%ld,",store[i]);
        }
        printf("]\n");
    }

    return 0;
}
