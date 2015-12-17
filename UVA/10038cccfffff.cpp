#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<stdlib.h>
using namespace std;
int main()
{
    long int a,n[4005],b,i,count,m[4005],j;
    bool bar[4005];

    while(scanf("%ld",&a)!=EOF)
    {
      for(i=1;i<=a;i++)
      {
          scanf("%ld",&n[i]);
      }
      for(i=1;i<=a-1;i++)
      {
          m[i]=abs(n[i]-n[i+1]);
      }
       for(j=1;j<=a;j++)
          {
              for(i=1;i<=a;i++)
              if(m[i]==n[j])
               {
                 bar[i]=true;
                 break;
                }
          else
          bar[i]=false;
          }
      if(bar[m[i]-m[i+1]]==true)
      printf("Jolly\n");
      else
      printf("Not jolly\n");
    }
    return 0;
}
