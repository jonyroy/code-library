#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int m=(n*n)/2+(n*n)%2;
    //cout<<m<<endl;
    if(k>m)
    {
        cout<<"NO\n";
        return 0;
    }
    cout<<"YES\n";
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
                if(i&1)
                {
                    if((j&1)&&k)
                    {
                        cout<<"L";
                        k--;
                    }
                    else
                        cout<<"S";
                }
                else
                {
                    if(j%2==0&&k)
                    {
                        cout<<"L";
                        k--;
                    }
                    else
                        cout<<"S";
                }
        }
        cout<<endl;
    }
    return 0;
}
