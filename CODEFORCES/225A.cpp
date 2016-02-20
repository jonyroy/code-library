#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m=(n+1)/2;
    int b=n/2;
    m=(m*m)+(b*b);
    cout<<m<<endl;
    for(int i=1;i<=n;i++)
    {
        if(i%2)
        {
        for(int j=1;j<=n;j++)
        {
            if(j%2)
                cout<<"C";
            else
                cout<<".";
        }
        }
        else
        {
             for(int j=1;j<=n;j++)
            {
            if(j%2)
                cout<<".";
            else
                cout<<"C";
            }
        }
        cout<<endl;
    }
    return 0;
}
