#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n,d;
    while(cin>>n>>d){
    string st;
    int ans=0,cnt=0;
    for(int i=0;i<d;i++)
    {
        cin>>st;
        bool flag=false;
        for(int j=0;j<n;j++)
        {
            if(st[j]=='0')
                flag=true;
        }
        if(flag)
        {
            cnt++;
            ans=max(ans,cnt);
        }
        else
            cnt=0;
    }
    cout<<ans<<endl;
    }
    return 0;

}
