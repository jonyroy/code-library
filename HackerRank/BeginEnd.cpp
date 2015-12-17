#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum=0,a[200]={0};
    string s;
    cin>>n>>s;
    for(long int i=0;i<n;i++)
    {
        a[s[i]]++;
    }
    for(int i=97;i<=122;i++)
    {
        if(a[i])
        {
            sum+=a[i];
            sum+=((a[i]*(a[i]-1))/2);
        }
    }
    cout<<sum<<endl;
    return 0;
}
