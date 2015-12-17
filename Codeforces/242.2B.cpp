#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x,y;
    int n,m,cnt;
    vector<pair<double,int> >a;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>x>>y>>cnt;
        double knt=sqrt(x*x+y*y);
        a.push_back(make_pair(knt,cnt));
    }
    sort(a.begin(),a.end());
    if(m>=1000000)
    {
        cout<<0<<endl;
        return 0;
    }
    for(int i=0;i<n;i++)
    {
        if(m+a[i].second<1000000)
        {
            m+=a[i].second;
        }
        else
        {
            printf("%0.6lf\n",a[i].first);
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}
