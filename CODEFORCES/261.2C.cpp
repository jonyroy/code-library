#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,d;
    cin>>n>>k>>d;
    if(k==1||d==1)
    {
        cout<<"-1";
        return 0;
    }
    int cnt=1;
    for(int i=1;i<=d;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(cnt==k+1)
                cnt=1;
            cout<<cnt<<" ";
            cnt++;
        }
        cout<<endl;
    }
}
