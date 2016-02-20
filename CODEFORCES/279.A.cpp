#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a,b,c;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int m;
        cin>>m;
        if(m==1)
            a.push_back(i);
        else if(m==2)
            b.push_back(i);
        else
            c.push_back(i);
    }
    int a1,b1,c1;
    a1=a.size();
    b1=b.size();
    c1=c.size();
    int m=min(c1,min(a1,b1));
    cout<<m<<endl;
    for(int i=0;i<m;i++)
    {
        cout<<a[i]<<" "<<b[i]<<" "<<c[i]<<endl;
    }
    return 0;
}
