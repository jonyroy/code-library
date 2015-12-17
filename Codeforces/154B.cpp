#include<bits/stdc++.h>
using namespace std;
int main()

{
    int n,m,a[100005];
    map<int,int>b;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[a[i]]++;
    }
    sort(a+1,a+n+1);
    int i;
    for( i=1;i<=n;i++)
    {
        int c=a[n]-a[i];
        if(a[i]*2>=a[n])
        {
        if(b[c]<=2&&a[i+1]<=c)
        break;
        }
    }
    int cnt=0;
    for(int j=n;j>=1;j--)
    {
        int c=a[j]-a[1];
        if(a[1]*2>=a[j])
        {
        if(b[c]<=2&&a[j+1]>=c)
        break;
        }
        cnt++;
    }
    cout<<min(i-1,cnt);
    return 0;
}
