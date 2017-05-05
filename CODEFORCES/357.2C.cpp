#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    priority_queue<int , vector<int>,greater<int> >q;
    vector<pair<string,int> >a;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        string st;
        int m;
        cin>>st;
        if(st[0]=='i')
        {
            cin>>m;
            a.push_back(make_pair(st,m));
            q.push(m);
        }
        else if(st[0]=='g')
        {
            cin>>m;
            if(!q.empty()&&q.top()==m)
            {
                a.push_back(make_pair(st,m));
            }
            else if(q.empty())
            {
                a.push_back(make_pair("insert",m));
                a.push_back(make_pair(st,m));
                q.push(m);
            }
            else
            {
                while(!q.empty())
                {
                    int b=q.top();
                    if(b<m)
                    {
                        a.push_back(make_pair("removeMin",-1));
                        q.pop();
                    }
                    else
                        break;
                }

                if(q.top()==m)
                    a.push_back(make_pair(st,m));
                else
                {
                    q.push(m);
                    a.push_back(make_pair("insert",m));
                    a.push_back(make_pair(st,m));
                }
            }
        }
        else
        {
            int v;
            if(!q.empty())
            {
                q.pop();
                a.push_back(make_pair("removeMin",-1));
            }
            else
            {
                a.push_back(make_pair("insert",0));
                a.push_back(make_pair("removeMin",-1));
            }
        }
    }
    int len=a.size();
    cout<<len<<endl;
    for(int j=0; j<len; j++)
    {
        if(a[j].first=="removeMin")
            cout<<a[j].first<<endl;
        else
            cout<<a[j].first<<" "<<a[j].second<<endl;
    }
    return 0;
}
