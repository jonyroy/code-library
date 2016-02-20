#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a,m;
    cin>>a>>m;
    while(a<=2*m)
    {
        if(a%m==0)
        {
            cout<<"Yes";
            return 0;
        }
        a+=a;
    }
    cout<<"No";
    return 0;
}
