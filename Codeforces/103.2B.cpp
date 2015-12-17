#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x1,x2,x3,x4,y1,y2,y3,y4;
    double x[1005],y[1005],r[1005];
    set<pair<double,double> >b;
    cin>>x1>>y1>>x3>>y3;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>x[i]>>y[i]>>r[i];
    }
    x2=x1;
    y2=y3;
    x4=x3;
    y4=y1;
    double mi,ma;
    mi=min(y1,y2);
    ma=max(y1,y2);
    for(int i=mi;i<=ma;i++)
    {
        b.insert(make_pair(x2,(double)i));
    }
    mi=min(x2,x3);
    ma=max(x2,x3);
    for(int i=mi;i<=ma;i++)
    {
        b.insert(make_pair((double)i,y2));
    }
    mi=min(y3,y4);
    ma=max(y3,y4);
    for(int i=mi;i<=ma;i++)
        b.insert(make_pair(x3,(double)i));
    mi=min(x1,x4);
    ma=max(x1,x4);
    for(int i=mi;i<=ma;i++)
    {
        b.insert(make_pair((double)i,y1));
    }
    int cnt=0;
    set<pair<double,double> >::iterator it;
    for(it=b.begin();it!=b.end();it++)
    {
        double jony,pony;
        bool t=false;
        jony=it->first;
        pony=it->second;
        for(int j=1;j<=n;j++)
        {
            double poky=sqrt(((jony-x[j])*(jony-x[j])+(pony-y[j])*(pony-y[j])));
            if(poky<=r[j])
            {
                t=true;
                break;
            }
        }
        if(!t)
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
