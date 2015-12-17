#include<bits/stdc++.h>
using namespace std;
int start,dp[1000],path[1000];
int lis_dynamic(int n,int a[])
{
   int m=0;
   start=n;
    for(int i=n;i>=1;i--)
    {
        int ma=0;
         for(int j=i+1;j<=n;j++)
         {
             if(a[i]<a[j]&&ma<dp[j])
             {
                 ma=dp[j];
                 path[i]=j;
             }
         }
         dp[i]=ma+1;
        if(m<dp[i])
        {
           m=dp[i];
           start=i;
        }
    }
    return m;
}
int path_print(int s,int len,int a[])
{
    for(int i=1;i<=len;i++)
    {
         printf("%d\n",a[s]);
         s=path[s];
    }
}
int main()
{
     int t,a[1000];
     scanf("%d",&t);
     getchar();
     getchar();
     while(t--)
     {
          int i=0;
          char str[100];
          for(;;){
              gets(str);
              if(strlen(str)==0)
              break;
              a[++i]=atoi(str);
             }
             int b=lis_dynamic(i,a);
             printf("Max hits: %d\n",b);
             path_print(start,b,a);
             if(t)
             printf("\n");
     }
}
