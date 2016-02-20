#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x[100],n,i,h,m,t,r,j;
    cin>>n;
    for(i=1;i<=n;i++)
        x[i]=1;
    for(int j=1;j<=n;j++)
        cout<<x[j];
    cout<<endl;
    x[0]=-1,x[1]=2,h=1,m=n-1;
    for(i=1;i<=m;i++)
        cout<<x[i];
    cout<<endl;
    while(x[1]!=n)
    {
        if(m-h>1)
            h=h+1,x[h]=2,m=m-1;
        else
        {
            j=m-2;
            while(x[j]=x[m-1])
                x[j]=1,j=j-1;
            h=j+1,x[h]=x[m-1]+1;
            r=x[m]+x[m-1]*(m-h-1);
            x[m]=1;
            if(m-h>1)
            x[m-1]=1;
            m=h+r-1;
        }
        for(int k=1;k<=m;k++)
        cout<<x[k];
        cout<<endl;
    }
    return 0;
}
