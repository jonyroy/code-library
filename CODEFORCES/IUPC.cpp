#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,n,a[150];
    scanf("%d",&test);
    for(int i=1;i<=test;i++)
    {
      scanf("%d",&n);
      for(int j=1;j<=n;j++)
        scanf("%d",&a[j]);
      printf("Case %d:\n",i);
      int q;
      scanf("%d",&q);
      for(int j=1;j<=q;j++)
      {
          int cnt,cn,knt,pnt;
          scanf("%d",&cnt);
          if(cnt==0)
          {
              scanf("%d%d%d",&cn,&knt,&pnt);
              if(cn==0)
              {
                  int mm=*max_element(a+knt+1,a+pnt+2);
                  printf("%d\n",mm);
              }
              else if(cn==1)
              {
                  int mm=*min_element(a+knt+1,a+pnt+2);
                  printf("%d\n",mm);
              }
              else if(cn==2)
              {
                  int sum=0;
                  for(int kk=knt+1;kk<=pnt+1;kk++)
                    sum+=(a[kk]);
                    printf("%d\n",sum);
              }
              else if(cn==3)
              {
                  int h=0;
                  for(int kk=knt+1;kk<=pnt+1;kk++)
                  {
                      if(a[kk]%2==0)
                        h++;
                  }
                  printf("%d\n",h);
              }
              else if(cn==4)
              {
                  int h=0;
                  for(int kk=knt+1;kk<=pnt+1;kk++)
                  {
                      if(2015%a[kk]==0&&a[kk]!=0)
                        h++;
                  }
                  printf("%d\n",h);
              }
          }
          else
          {
             scanf("%d%d",&knt,&cn);
             a[++knt]=cn;
          }
      }
    }
    return 0;
}
