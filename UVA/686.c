//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX 32768
int primes[MAX];
    int FindSol(int n)
     {
         int i,p=0;
         for(i=2;i<=n/2;i++)
         {
         if(primes[i]&&primes[n-i])
         {
         p++;
         }
         }
       return p;
     }
     int main()
     {
     int i,j,n,m;
       for(i=0;i<MAX;i++)
       primes[i]=1;
       for(i=2;i<=(int)sqrt(MAX);i++)
         if (primes[i])
           for(j=i;j*i<MAX;j++)
           primes[i*j]=0;
           while(1)
           {
           scanf("%d",&n);
           if(n==0)
           break;
           m=FindSol(n);
           printf("%d\n",m);
           }
         return 0;
     }
