#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        long long int a,b,c;
        scanf("%lld%lld%lld",&a,&b,&c);
        printf("Case %d: ",i);
        if(a*a==(b*b+c*c))
            printf("yes\n");
        else if(b*b==c*c+a*a)
            printf("yes\n");
        else if(c*c==a*a+b*b)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
