#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[100005],int b[100005];
    vector<int>c;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    if(n==1)
    {
        cout<<1<<endl;
        return 0;
    }
    if(a[1]<a[2])
        b[1]=0;
    else{
        b[1]=1;
        c.push_back(1);
    }
    for(int i=2;i<=n;i++)
    {
        if(a[i-1]<a[i])
            b[i]=0;
        else{
            b[i]=1;
            c.push_back(i);
        }
    }

    return 0;
}
