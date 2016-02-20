#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[105];
    cin>>n;
    bool test=true;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    while(1)
    {
        test=true;
        sort(a+1,a+n+1);
        for(int i=1;i<=n;i++)
        {
            for(int j=i+1;j<=n;j++)
            if(a[j]>a[i])
            {
                a[j]=a[j]-a[i];
                test=false;
                j++;
            }
        }
        if(test)
            break;
    }
    cout<<n*a[1];
    return 0;
}
