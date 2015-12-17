#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int main()
{
    for(int i=1;i<=100000;i++)
    {
        a[i]=max((i/2+i/3+i/4),max(i,a[i-1]+1));
    }
    int n;
    while(scanf("%d",&n)!=EOF)
    {
      printf("%d\n",a[n]);
    }
    return 0;
}
