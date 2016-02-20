#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000009
typedef long long LL;
int main()
{
    int n,k,a[55];
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)
        scanf("%d",a+i);
        if(k>n)
        {
            printf("-1\n");
            return 0;
        }
    sort(a+1,a+n+1);
    printf("%d 0\n",a[(n-k)+1]);
    return 0;
}
