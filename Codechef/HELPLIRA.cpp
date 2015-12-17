#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,h;
    double lower=100000000,higher=-1000.0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        double a,b,c,d,e,f;
        cin>>a>>b>>c>>d>>e>>f;
        double area=a*(d-f)+c*(f-b)+e*(b-d);
        if(area<0.0)
            area*=(-1);
        if(area>=higher)
        {
            higher=area;
            h=i;
        }
        if(area<=lower)
        {
            lower=area;
            l=i;
        }
    }
    cout<<l<<" "<<h<<endl;
    return 0;
}
