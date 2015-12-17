#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,k,a[100005],b[100005],sum=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    int i=n-1,j=n-1;
    while(i>=0&&j>=0)
    {
        int cnt=a[i]-b[j];
        if(cnt<0)
            cnt=cnt*(-1);
        if(cnt<=k)
        {
            sum++;
            i--;
            j--;
        }
        else if(a[i]>b[j])
            i--;
        else
            j--;
    }
    cout<<sum<<endl;
    return 0;
}
