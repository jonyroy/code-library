#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
int main()
{
    LL N,k,c=0;
    LL n[100009];
    map<LL,int>m;
    set<LL>s;
    cin>>N>>k;
    for(int i=0;i<N;i++)
    {
        cin>>n[i];
        m[n[i]]=1;
    }
    sort(n,n+N);
    for(int i=0;i<N;i++)
    {
        if(m[n[i]]==1)
        {
            c++;
            if(m[k*n[i]]==1)
            m[k*n[i]]=0;
        }
    }
    cout<<c<<endl;
    return 0;
}
