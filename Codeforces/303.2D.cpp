#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[100005];
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    long long int sum=0,cnt=0;
    for(int i=0;i<n;i++)
    {
       if(sum<=a[i])
        {
          cnt++;
          sum+=a[i];
        }
    }
    cout<<cnt<<endl;
    return 0;
}
