#include<stdio.h>
#include<math.h>
int main()
{
    int a,n[3005],i,count,m[3005],countdown;
    while(scanf("%d",&a)!=EOF)
    {
      for(i=0;i<a;i++)
      {
          scanf("%d",&n[i]);
      }
      count=0;
      countdown=0;
      for(i=0;i<a-1;i++)
      {
          m[i]=abs(n[i]-n[i+1]);
      }
      for(i=0;i<a-2;i++)
      {
          if(m[i]>0&&m[i]<a&&m[i+1]>0&&m[i+1]<a)
          {
              if(m[i]>m[i+1])
              count++;
              else
              if(m[i]<m[i+1])
              countdown++;
          }
      }
      if(count==a-2)
      printf("Jolly\n");
      else
      if(countdown==a-2)
      printf("Jolly\n");
      else
      printf("Not jolly\n");
    }
    return 0;
}
