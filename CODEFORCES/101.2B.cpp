#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, x,y,a,b;
    cin>>n>>x>>y;
    a=x;
    if(a<0)
      a*=(-1);
    if(a>=n||y%n==0)
    {
        cout<<-1;
        return 0;
    }
    int m=y/n+1;
    if(m==1)
    {
         if(((double)n/2)<=(double)a)
            cout<<-1<<endl;
        else
            cout<<m<<endl;
    }
    else if(m%2==0)
    {
        int k=m/2;
        m+=(k-1);
        if(((double)n/2)<=(double)a)
            cout<<-1<<endl;
        else
            cout<<m<<endl;
    }
    else if(x==0&&m%2==1)
    {
        cout<<-1;
        return 0;
    }
    else
    {
        m--;
        int k=m/2;
        m+=(k-1);
        if(x<0)
            cout<<m+1;
        else
            cout<<m+2;
    }
    return 0;
}
