#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1005],cnt=0,c=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
       cin>>a[i];
       if(a[i]==1)
            cnt++;
    }
       int  flag=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]==1)
            flag=1;
        else
        {
            if(flag==1)
                c++,flag=0;
        }
    }
    if(flag==1)
        c++;
        if(c+cnt==0)
            cout<<"0";
        else if(c==1)
            cout<<cnt;
        else
        cout<<c+cnt-1;
}
