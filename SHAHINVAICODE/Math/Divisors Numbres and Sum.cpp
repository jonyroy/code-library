/*
The number of divisors:
If n =p1^a1,p2^a2....pk^ak. then the number of its positive divisors equals to

(a1 + 1) * (a2 + 1) * … * (ak + 1)
*/
#include<bits/stdc++.h>
using namespace std;
//Number of divisors................
 int divisors(int n)
 {
       int i,cnt;
       int divs=1;
       for(i=2;i<=(int)sqrt(n);i++)
       {
           cnt=0;
         while(n%i==0)
         {
          // printf("%d ",i);
           n/=i;
           cnt++;
         }
         divs=divs*(cnt+1);
       }
       if (n > 1)
       {
         //  printf("%d",n);
           divs=divs*2;
       }
      // printf("\n");
       return divs;
 }
 //Sum of divisors.............
 long int sum_of_divisors(int n)
 {
       int i,cnt;
       long int divsum=1;
       for(i=2;i<=(int)sqrt(n);i++)
       {
           cnt=i;
         while(n%i==0)
         {
          // printf("%d ",i);
           n/=i;
           cnt=cnt*i;
         }
         divsum=divsum*((cnt-1)/(i-1));
       }
       if (n > 1)
       {
         //  printf("%d",n);
           divsum=divsum*((n*n-1)/(n-1));
       }
      // printf("\n");
       return divsum;
 }
int main()
{
  int n;
  while(cin>>n)
  {
      cout<<"Number of Divisors: "<<divisors(n)<<endl;
      cout<<"Sum of Divisors: "<<sum_of_divisors(n)<<endl;
  }
  return 0;
}
