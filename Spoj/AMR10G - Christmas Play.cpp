#include<bits/stdc++.h>
using namespace std;
int main()
{
    int TestCase,N,K;
    cin>>TestCase;
    for(int i=1;i<=TestCase;i++)
    {
        cin>>N>>K;
        int a[20005];
        for(int i=1;i<=N;i++)
            cin>>a[i];
        sort(a+1,a+N+1);
        int minimum=1000000001;
        for(int j=1;j<=N-K+1;j++)
         minimum=min(minimum,a[j+K-1]-a[j]);
         cout<<minimum<<endl;
    }
    return 0;
}
