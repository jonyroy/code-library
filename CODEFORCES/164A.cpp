#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[105],b[105],cnt=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d%d",a+i,b+i);
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(a[j]==b[i])
            cnt++;
            if(a[i]==b[j])
            cnt++;
        }
    }
    printf("%d\n",cnt);
    return 0;
}
