#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <stdio.h>
#include<math.h>
using namespace std;

#define DEBUG
#define REP(i,a) for(i=0;i<a;i++)
#define FOR(i,a,b) for(i=a;i<b;i++)
#define VE vector<int>
#define SZ size()
#define PB push_back
int N = 1000002;
bool status[1000002];
long prime[80000];
void StorPrime()
{
    long i, j, sqrtN,k=0;
    for( i = 2; i <= N; i++ )
    status[i] = 0;
    prime[0]=2;
    k=1;
    sqrtN = long( sqrt((double)N) ); // have to check primes up to (sqrt(N))
    for( i = 3; i <= sqrtN; i += 2 )
    {
        if( status[i] == 0 )
        {
            prime[k]=i;
            k++;
            for( j = i * i; j <= N; j += i + i )
            status[j] = 1; // status of the multiple is 1
        }
    }
    for(;i<1000002;i+=2)
    if( status[i] == 0 )
    {
        prime[k]=i;
        k++;
    }

    // printf("%ld\n",k);
}
void primcator(long n)
{
    int j=0;
    while(n>1)
    {
        /*if(status[n]==0&&n%2!=0)
        {
            printf("%ld",n);
            break;
        }*/
        while(n%prime[j]==0)
        {
            n=n/prime[j];
            printf("%ld ",prime[j]);
        }
        j++;
    }
    printf("\n");
}
int main()
{
    StorPrime();
   long n,p,q,m;

   while(scanf("%ld",&n))
   {
       for(n=900;n<=999;n++)
       if(n==2||(n%2!=0&&status[n]==0))
       {
           cout<<n<<endl;
       }
      if(n==0)
      break;
       if(n==2||(n%2!=0&&status[n]==0))
       printf("This number is prime\n");
       else
       {
           printf("This number is not prime\n");
           primcator(n);
       }

   }


    return 0;
}
