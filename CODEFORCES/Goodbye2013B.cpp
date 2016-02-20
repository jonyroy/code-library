#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m[500],sum=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>m[i];
        sum+=m[i];
    }
    while(1)
    {
        if(sum==0)
        break;
        for(int i=1;i<=n;i++)
        {
            if(m[i])
            {
                cout<<"P";
                m[i]--;
                sum--;
            }
            if(i!=n)
            cout<<"R";
        }
        if(sum==0)
        break;
        if(sum)
            cout<<"L";
        for(int i=n-1;i>=1;i--)
        {

            if(m[i])
            {

                cout<<"P";
                m[i]--;
                sum--;
            }
            if(i>1)
            cout<<"L";
        }
    }
    return 0;
}
