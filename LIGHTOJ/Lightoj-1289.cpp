/*
* Author: Jony Roy
* Date: 22-06-2016
* Contact: jonyroyice@gmail.com
*/
#include <bits/stdc++.h>
#define PI              3.1415926535897932384
#define EulerConstant   0.5772156649015328606
#define CountBit(a)     __builtin_popcount(a)
#define p_b(x)          push_back(x)
#define m_p(x)          make_pair(x)
#define ft              first
#define sd              second
using namespace std;
typedef double                   ddd;
typedef long long int            llint;
typedef unsigned long long int   ullint;
typedef long int                 lint;
typedef unsigned int             uint;
typedef unsigned long int        ulint;
typedef pair<int,int>            pint;
typedef pair<lint,lint>          plint;
typedef pair<llint,llint>        pllint;
#define MAX 100000002

bitset<MAX>status;
uint prime[5761460];
int PrimeNumber[5761460];
llint bigMod(llint a,llint b,llint MOD)
{
    if(b==0)
        return 1;
    llint temp=bigMod(a,b>>1,MOD);
    temp=(temp*temp)%MOD;
    if(b&1)
        temp= (a*temp)%MOD;
    return temp;
}
int binarySearch(int n)
{
    int low=1,high=5761455;
    int mid,cnt;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(PrimeNumber[mid]==n)
            return mid;
        else if(PrimeNumber[mid]<n)
            low=mid+1,cnt=mid;
        else
            high=mid-1,cnt=mid-1;
    }
    return cnt;
}

int main(int argc, char *argv[])
{
   int sq=sqrt(MAX);
   PrimeNumber[1]=2;
   int k=1;
   for(int i=3;i<=sq;i+=2)
   {
       if(!status[i])
        {
          for(int j=i*i;j<=MAX;j+=i)
          status[j]=true;
        }
   }

   int l=2;
   prime[0]=0;
   prime[1]=2;

   for(int i=3;i<=MAX-3;i+=2)
   {
       if(!status[i])
        {
           PrimeNumber[l]=i;
           prime[l]=prime[l-1]*i;
           l++;
        }
   }
   int tc;
   scanf("%d",&tc);
   for(int i=1;i<=tc;i++)
   {
       uint n;
       scanf("%d",&n);
       sq=sqrt(n);
       uint ans=1;

       for(int j=1;j<l&&PrimeNumber[j]<=sq;j++)
       {
            int m=n;
            uint cnt=1;
            int counter=0;
            while(m/PrimeNumber[j])
            {
                counter++;
                m/=PrimeNumber[j];
            }
            counter--;
            for(int c=1;c<=counter;c++)
            {
                cnt*=PrimeNumber[j];
            }
            ans*=cnt;
       }
       uint p=prime[binarySearch(n)];
       printf("Case %d: %u\n",i,ans*p);
   }
   return 0;
}

