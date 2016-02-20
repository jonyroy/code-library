#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x[5],y[5],n;
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>x[i]>>y[i];
    int ma=0,m=0;
    for(int i=1; i<=n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
          ma=max(ma,abs(x[i]-x[j]));
          m=max(m,abs(y[i]-y[j]));
        }
    }
    if(ma*m==0)
        cout<<-1<<endl;
    else
        cout<<ma*m<<endl;
    return 0;
}
