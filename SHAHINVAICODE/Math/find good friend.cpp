#include<bits/stdc++.h>
using namespace std;
int N1 = 10002;
bool status[10002];
long prime[8000];
void StorPrime()
{
    long i, j, sqrtN,k=0;
    for( i = 2; i <= N1; i++ )
    status[i] = 0;
    prime[0]=2;
    k=1;
    sqrtN = long( sqrt((double)N1) ); // have to check primes up to (sqrt(N))
    for( i = 3; i <= sqrtN; i += 2 )
    {
        if( status[i] == 0 )
        {
            prime[k]=i;
            k++;
            for( j = i * i; j <= N1; j += i + i )
            status[j] = 1; // status of the multiple is 1
        }
    }
    for(;i<10002;i+=2)
    if( status[i] == 0 )
    {
        prime[k]=i;
        k++;
    }

    // printf("%ld\n",k);
}
int N,E;
 void factor(int n)
 {
       int i,f;
       E=0;
       for(i=2;i<=(int)sqrt(n);i++)
       {
           f=0;
         while(n%i==0)
         {
          // printf("%d ",i);
          N++;
          if(f==0)
          E++;
          f=1;
           n/=i;
         }
       }
       if (n > 1)
       {
           N++;E++;
          // printf("%d",n);
       }
      // printf("\n");
 }
int main()
{
    StorPrime();
  int n,i,l1,l2,n1,n2,e1,e2;
  string fr1,fr2;
  cin>>fr1>>fr2;
  l1=fr1.size();
  l2=fr2.size();
  n=0;
  for(i=0;i<l1;i++)
  n=n+fr1[i];
  N=0;
      factor(n);
      n1=N;e1=E;
      n=0;
  for(i=0;i<l2;i++)
  n=n+fr2[i];
      N=0;
      factor(n);
      n2=N;e2=E;
      n=abs(e1-e2);

      cout<<100-((n+1)*prime[n])%99<<"%"<<endl;
  return 0;
}
