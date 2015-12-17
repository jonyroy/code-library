#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,int>jony,ritu;
    int a[100009],b[100009],n,lit,m=2000000000;
    cin>>n;
    lit=(n+1)/2;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];
        if(a[i]!=b[i])
        {
            jony[a[i]]++,ritu[b[i]]++;
        }
        else
         jony[a[i]]++;
    }
    int ma=0;
    for(int i=1;i<=n;i++)
    {
        int x,y;
        x=jony[a[i]],y=ritu[a[i]];
        int z=ritu[b[i]];
        ma=max(ma,z);
        if(x>=lit)
            {
              cout<<"0";
              return 0;
            }
        else
        {
            int k=lit-x;
            if(y>=k)
                m=min(m,k);
        }
    }
//    cout<<ma<<endl;
    if(m>n)
        {
        if(ma>=lit)
            cout<<lit;
        else
        cout<<"-1";
        }
    else
        cout<<m;
    return 0;
}
