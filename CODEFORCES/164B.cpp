#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    long long cnt=n+(n-1);
    n=n-2;
    int j=2;
    for(int i=n;i>=1;i--){
        cnt+=(j*i);
        j++;
    }
    printf("%lld\n",cnt);
    return 0;
}
