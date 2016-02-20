#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[105],mi=101,ma=-1,b,j,k;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>b;
        if(mi>=b)
        {
            mi=b;
            j=i;
        }
        if(ma<b)
        {
            ma=b;
            k=i;
        }
    }
    int sum=n-j+k-1;
    if(k>j)
        sum--;
    cout<<sum<<endl;
    return 0;
}
