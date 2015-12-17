#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    vector<int>b,c;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        b.push_back(a);
    }
    int mm=88888;
    for(int i=1;i<n-1;i++)
    {
        c=b;
        c.erase(c.begin()+i);
        int m=0;
        for(int j=1;j<c.size();j++)
        {
            m=max(m,c[j]-c[j-1]);
        }
        mm=min(mm,m);
        c.clear();
    }
    cout<<mm<<endl;
    return 0;
}
