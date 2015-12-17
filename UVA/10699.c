//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    long int i,list[100],j,k;
    long N,M,p=0;
    while(scanf("%lld",&N))
    {
        if(N==0)
        break;
        M=N;
        j=0;
        p=0;
        k=1;
        for(i=2;i<=(long)sqrt(N);)
        {
            while(N%i==0)
            {
                list[j++]=i;
                N/=i;
            }
            if(k>1)
            i+=2;
            else
            i++;
            k++;
        }
          if(N>1)
            list[j++]=N;
            for(i=0;i<=j-2;i++)
            {
                if(list[i]<list[i+1])
                p++;
            }
            printf("%ld : %ld\n",M,p+1);
    }
    return 0;
}

