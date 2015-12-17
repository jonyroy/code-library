#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n;
    int k,m[3100];
    cin>>n>>k;
    for(int i=1;i<=k;i++)
        cin>>m[i];
    sort(m+1,m+k+1);
    if(k==0)
        cout<<"YES\n";
    else if(m[1]==1||m[k]==n)
        cout<<"NO\n";
    else
    {
        for(int i=1;i<=k-2;i++)
        {
         if(m[i]==(m[i+1]-1)&&m[i]==(m[i+2]-2))
            {
            cout<<"NO\n";
            return 0;
            }
        }
        cout<<"YES\n";
    }
    return 0;
}
