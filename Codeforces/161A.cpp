#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000009
typedef long long LL;
int main()
{
    int n,a,b;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++){
            scanf("%d",&n);
            if(n)
            a=i,b=j;
        }
    }
    int c=abs(a-3)+abs(b-3);
    printf("%d\n",c);
    return 0;
}
