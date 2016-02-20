#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m[15]={4,7,44,47,77,444,447,474,747,774,777,477,744};
    cin>>n;
    for(int i=0;i<=12;i++)
    {
        if(n%m[i]==0)
        {
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}
