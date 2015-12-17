#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
    long long int a,n[3005],b,i,count,m[3005],j;
    while(scanf("%lld",&a)!=EOF)
    {
      for(i=1;i<=a;i++)
      {
          scanf("%ld",&n[i]);
      }
      for(i=1;i<a;i++)
      {
          m[i]=abs(n[i]-n[i+1]);
      }
      sort(m,m+(a));
      count=0;
      for(j=1;j<=i-1;j++)
      {
        if(m[j]!=j)
        {
          printf("Not jolly\n");
          break;
        }
          else
          {
          printf("Jolly\n");
          break;
          }
      }
    }
    return 0;
}
