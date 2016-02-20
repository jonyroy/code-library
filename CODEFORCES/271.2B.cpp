#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,sum[100005]={0},a,b;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        sum[i]=sum[i-1]+a;
    }
    cin>>m;
    for(int i=1;i<=m;i++)
    {
        cin>>b;
        int test=0;
        int low=1,high=n,mid;
        while(low<high)
        {
            mid=(low+high)/2;
            if(sum[mid]==b)
            {
                test=1;
                break;
            }
            else if(sum[mid]>b)
                high=mid;
            else
                low=mid+1;
        }
        if(test)
            cout<<mid<<endl;
            else
            cout<<high<<endl;
    }
    return 0;
}
