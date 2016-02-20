#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int  ull;
ull a[3000];
//int b[3000];
int main()
{
    a[1]=2;
    a[2]=5;
    a[3]=6;
    int n=2,m=3;
    int i=3,j;
    while(i<=1713)
    {
        bool t=false;
        for(j=n;j<m;j++)
        {
           a[++i]=2*a[j]+1;
           if(t==false)
            {
               n=i;
               t=true;
            }
        }
        a[++i]=2*a[j]+1;
        a[++i]=a[i-1]+1;
        m=i;
    }
//    b[1]=1;
//    for(i=1;i<=1713;i++)
//        cout<<i<<" "<<a[i]<<endl;
//    b[i]=b[i-1]+1;
    ull x,y,u,v;
    cin>>x>>y;
    u=min(x,y);
    v=max(x,y);
    int p,q;
    for(i=1;i<=1713;i++)
    {
        if(u<=a[i])
            {
            p=i;
            break;
            }
    }
    for(i=1713;i>=1;i--)
    {
        if(v>=a[i])
            {
            q=i;
            break;
            }
    }
    cout<<q-p+1<<endl;
    return 0;
}
