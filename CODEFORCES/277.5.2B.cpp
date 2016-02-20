#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a[200],b[200];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    cin>>m;
    for(int i=0;i<m;i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+m);
    int cnt=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(b[j]>0)
            if(a[i]==(b[j]+1)||(a[i]+1)==b[j]||a[i]==b[j])
            {
                cnt++;
                b[j]=0;
                break;
            }
        }
    }
    cout<<cnt<<endl;
    return 0;
}
