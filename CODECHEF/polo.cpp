#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,w,c[200],p[200],t[200],test;
    cin>>test;
    while(test--)
    {
        long m=0,op=0;
        cin>>n>>w;
        for(int i=1;i<=n;i++)
            cin>>c[i]>>p[i]>>t[i];
        for(int i=1;i<=n;i++)
        {
            bool g=false;
            int sum=t[i];
            m=0;
            if(t[i]<=w)
                m=c[i]*p[i];
            for(int j=i+1;j<=n;j++)
            {
                g=false;
                if((sum+t[j])<=w)
                {
                    sum+=t[j];
                    m+=(c[j]*p[j]);
                }
                else
                    {
                    g=true;
                    op=max(op,m);
                    m=c[i]*p[i];
                    sum=t[i];
                    continue;
                    }
            }
            if(!g)
           op=max(op,m);
        }
        cout<<op<<endl;
    }
    return 0;
}
