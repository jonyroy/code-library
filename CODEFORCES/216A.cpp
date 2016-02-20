#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,m,c=0,cc=0,mm=0;
    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
    {
        int v;
        cin>>v;
        if(v==1)
            c++;
        else
            cc++;
    }
    c=m-c;
    if(c>0)
        k=k+c;
    else
        mm=c*-1;
    k=k-cc;
    if(k<0)
    {
        k=k*-1;
        mm+=k;
    }
    cout<<mm<<endl;
    return 0;
}
