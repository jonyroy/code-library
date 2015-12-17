#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[105];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    int cnt=0,sum=0,s=0;
    for(int i=0;i<n;i++)
    {
        if(sum+a[i]<=350)
        {
            cnt++;
            sum+=a[i];
        }
        else if(sum+a[i]>350&&sum+a[i]<=710)
        {
            cnt++;
            sum+=a[i];
            s+=(sum-350);
        }
        else
            break;
    }
    cout<<cnt<<" "<<s<<endl;
    return 0;
}
