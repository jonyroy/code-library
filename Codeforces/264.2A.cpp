#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,a,b,m=-4444,flag=0;
    cin>>n>>s;
    for(int i=1;i<=n;i++)
        {
        cin>>a>>b;
        if(s>=a&&b==0)
        {
            m=max(m,0);
            flag=1;
        }
        if(s>a&&b>0)
        {
            m=max(m,100-b);
            flag=1;
        }
        }
        if(flag==0)
            cout<<"-1\n";
        else
        cout<<m<<endl;
    return 0;
}
