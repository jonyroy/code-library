#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long int n;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        int cnt=0;
        scanf("%ld",&n);
        while(n>0)
        {
            if(n%2)
                cnt++;
            n/=2;
        }
        printf("Case %d: ",i);
        if(cnt%2)
            printf("odd\n");
        else
            printf("even\n");
    }
    return 0;
}
