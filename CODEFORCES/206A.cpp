#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    if(m==0&&n>1)
        cout<<"No solution"<<endl;
    else if(m==0&&n==1)
        cout<<0;
    else
    {
        cout<<m;
        for(int i=1;i<n;i++)
            cout<<0;
    }
    return 0;
}
