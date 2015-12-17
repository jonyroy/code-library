#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int ar[200005]={0};
    int n,m,minimum=1000000,maximum=-1;
    cin>>s;
    cin>>n;
    int len=s.length();
    for(int i=1;i<=n;i++)
    {
        cin>>m;
        int b=len-m+1;
        ar[m]++,ar[b]++;
        minimum=min(minimum,m);
        maximum=max(maximum,b);
    }
    for(int i=minimum+1;i<=maximum;i++)
    ar[i]+=ar[i-1];
    for(int i=minimum;;i++)
    {
        int k=len-i+1;
        if(k<=i)
        break;
        if(ar[i]&1)
        swap(s[i-1],s[k-1]);
    }
    cout<<s;
    return 0;
}
