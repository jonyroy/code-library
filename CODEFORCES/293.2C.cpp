#include<bits/stdc++.h>
using namespace std;
long long int n,m,k,cnt,result=0,j,h;
long long int a[100005],b[100005];
int main()
{

    cin>>n>>m>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[a[i]]=i;
    }
    for(int i=1;i<=m;i++)
    {
        cin>>cnt;
         h=b[cnt];
         j=(long long int)ceil((double)h/(double)k);
        result+=j;
        if(h>1)
        {
            swap(b[cnt],b[a[h-1]]);
            swap(a[h],a[h-1]);
        }
    }
    cout<<result<<endl;
    return 0;
}
