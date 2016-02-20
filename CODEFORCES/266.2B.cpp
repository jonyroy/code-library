#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a,b,aa;
    cin>>n>>a>>b;
    if(a*b>=6*n)
    {
        cout<<a*b<<endl<<a<<" "<<b<<endl;
    }
    else
    {
        long long int m=6*n,vn=INFINITY,km=INFINITY,bm=INFINITY,kn;
        kn=ceil(sqrt(m));
        int t=0;
        if(a>b)
        {
            swap(a,b);
            t=1;
        }
        for(long long int i=a;i<=kn;i++)
        {
            long long bn=ceil((double)m/(double)i);
            if(i*bn>=m&&min(i,bn)>=a&&max(bn,i)>=b)
            {
                if(i*bn<=bm)
                {
                    vn=i;
                    km=bn;
                    bm=i*bn;
                }
            }
        }
        if(t)
        cout<<vn*km<<endl<<km<<" "<<vn<<endl;
        else
        cout<<vn*km<<endl<<vn<<" "<<km<<endl;
    }
    return 0;
}
