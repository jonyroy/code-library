#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    n=min(n,m)+1;
    printf("%d\n",n);
    int k=0,l=n-1;
    for(int i=1;i<=n;i++)
    {
      printf("%d %d\n",k,l);
      k++,l--;
    }
    return 0;
}

