#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[1005],cnt=0;
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    sort(a+1,a+n+1);
    for(int i=1;i<n;i++)
    {
        if(a[i]==a[i+1]&&i<n&&a[i]>0)
            {
            if(a[i+1]==a[i+2]&&i+1<n&&a[i+1]>0)
               {
                  cout<<"-1";
                  return 0;
               }
               cnt++;
            }
    }
    cout<<cnt<<endl;
}
