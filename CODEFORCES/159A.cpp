#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,m,a[55],cnt=0;
    scanf("%d%d%d",&n,&k,&m);
    for(int i=1;i<=n;i++)
        scanf("%d",a+i);
    sort(a+1,a+n+1);
    if(m>=k)
    {
        printf("0\n");
        return 0;
    }
    cnt=n;
    k=k-(m-1);
    while(k>0)
    {
        if(n==0)
        break;
        if(a[n]>=k)
        {
            k=0;
            n--;
        }
        else
        {
            k=k-(a[n]-1);
            n--;
        }

    }
    if(k)
    printf("-1\n");
    else
    printf("%d\n",cnt-n);
    return 0;
}
