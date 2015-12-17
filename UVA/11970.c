//Accepted
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    long int x,N,n,i,j,k,b,s,store[1000],l;
    scanf("%ld",&n);
    for(j=1;j<=n;j++)
    {
        i=2;
        k=2;
        scanf("%ld",&N);
        do
        {
            b=i*i;
            if(b>=N)
            {
                i++;
                continue;
            }
            x=N-b;
            s=(long)sqrt(N-x);
            if(x%s==0)
            store[k++]=x;
            i++;
        }while(b-1<N);
        store[1]=N-1;
        printf("Case %ld:",j);
        for(l=k-1;l>=1;l--)
        {
            printf(" %ld",store[l]);
        }
        printf("\n");
    }
    return 0;
}
