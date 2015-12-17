//Accepted
#include<stdio.h>
#include<string.h>
#include<math.h>
#define MAX 1000000
int primes[MAX];
     long int FindSol(long int n)
     {
         long int i,p=0;
         if(n%2==1)
         {
             if(primes[n-2])
             printf("%ld:\n2+%ld\n",n,(n-2));
             else
             printf("%ld:\nNO WAY!\n",n);
         }
         else
         {
         for(i=2;i<=(long)sqrt((double)n)+2;i++)
         {
         if(primes[i]&&primes[n-i])
         {
         printf("%ld:\n%ld+%ld\n",n,i,(n-i));
         break;
         }
         }
         }
       return 0;
     }
     int main()
     {
     long int i,j,n,m;
       for(i=0;i<MAX;i++)
       primes[i]=1;
       for(i=2;i<=(long int)sqrt(MAX);i++)
         if (primes[i])
           for(j=i;j*i<MAX;j++)
           primes[i*j]=0;
           while(1)
           {
           scanf("%ld",&n);
           if(n==0)
           break;
           FindSol(n);
           }
         return 0;
     }
