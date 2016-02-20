#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,b=1;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        if(i&1)
            for(int j=1;j<=m;j++)
        {
            cout<<"#";
        }
        else
        {
            if(b&1)
            {
                for(int j=1;j<m;j++)
                    cout<<".";
                cout<<"#";
            }
            else
            {
              cout<<"#";
              for(int j=1;j<m;j++)
                    cout<<".";
            }
            b++;
        }
       cout<<endl;
    }
}
