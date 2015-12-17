#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b,c,d;
    set<double> s;
    cin>>n>>a>>b;
    for(int i=0;i<n;i++)
    {
        cin>>c>>d;
        if(a-c==0)
        s.insert(100000.0);
        else if(b-d==0)
        s.insert(100001.0);
        else
        s.insert(double(b-d)/double(a-c));
    }
    cout<<s.size();
    return 0;
}
