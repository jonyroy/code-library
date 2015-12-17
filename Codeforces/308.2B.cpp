#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[]={0,9,99,999,9999,99999,999999,9999999,99999999,999999999};
    cin>>n;
    long long int sum=0;
    long long int len=log10(n)+1;
    for(long long int i=1;i<len;i++)
    {
        sum+=((a[i]-a[i-1])*i);
    }
    sum+=((n-a[len-1])*len);
    cout<<sum<<endl;
    return 0;
}
