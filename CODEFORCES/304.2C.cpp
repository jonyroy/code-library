#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k1,k2,cnt=0,cc=0,ccc=0;
    queue<int>q1,q2;
    map<pair<int,int> ,int>c;
    cin>>n;
    cin>>k1;
    for(int i=1;i<=k1;i++)
    {
        int m;
        cin>>m;
        q1.push(m);
    }
    cin>>k2;
    for(int i=1;i<=k2;i++)
    {
        int m;
        cin>>m;
        q2.push(m);
    }
    while(1)
    {
        if(q1.empty())
        {
            cout<<cnt<<" "<<2<<endl;
            return 0;
        }
        if(q2.empty())
        {
            cout<<cnt<<" "<<1<<endl;
            return 0;
        }
        int p1=q1.front();
        q1.pop();
        int p2=q2.front();
        q2.pop();
        cnt++;
        if(cnt>1000000)
        {
            cout<<-1<<endl;
            return 0;
        }
        if(p1>p2)
        {
            q1.push(p2);
            q1.push(p1);
        }
        else
        {
            q2.push(p1);
            q2.push(p2);
        }
    }
    return 0;
}
