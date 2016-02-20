#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c,a[105],b=0;
    cin>>n>>c;
    for(int i=1;i<=n;i++)
        cin>>a[i];
   /* if(c==0)
    {
        cout<<"0";
        return 0;
    }*/
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i+1])
        b=max(b,(a[i]-a[i+1]));
    }
    b=b-c;
    if(b>=1)
    cout<<b<<endl;
    else
    cout<<"0";
    return 0;
}
