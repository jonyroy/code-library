#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p,q;
    cin>>n;
        int cnt[105]={0};
        cin>>p;
        while(p--)
        {
            int m;
            cin>>m;
            cnt[m]++;
        }
        cin>>q;
        while(q--)
        {
            cin>>p;
            cnt[p]++;
        }
        for(int i=1;i<=n;i++)
        {
            if(cnt[i]==0)
            {
                cout<<"Oh, my keyboard!"<<endl;
                return 0;
            }
        }
        cout<<"I become the guy."<<endl;
        return 0;
}
