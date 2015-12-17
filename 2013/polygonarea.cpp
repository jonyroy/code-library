#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<pair<double,double> >v;
    double x,y,a,b,sum=0;
    cin>>n;
    cin>>x>>y;
    a=x,b=y;
    v.push_back(make_pair(x,y));
    n--;
    while(n--)
    {
      cin>>x>>y;
      v.push_back(make_pair(x,y));
    }
    v.push_back(make_pair(a,b));
    for(int i=0;i<v.size()-1;i++)
    {
       sum+=((v[i].first*v[i+1].second)-(v[i+1].first*v[i].second));
    }
    cout<<fabs(sum);
    return 0;
}
