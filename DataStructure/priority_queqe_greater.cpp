#include<bits/stdc++.h>
using namespace std;
#define PII pair<int,int>
int main()
{
    priority_queue<PII,vector<PII>,greater<PII> >q;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        PII m;
        int a,b;
        cin>>a>>b;
        q.push(make_pair(a,b));
    }
    while(!q.empty())
    {
        PII k=q.top();
        cout<<k.first<<" "<<k.second<<endl;
        q.pop();
    }
    return 0;
}
