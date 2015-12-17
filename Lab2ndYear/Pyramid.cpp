#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<map>
#include<string>
using namespace std;
class pyramid
{
    int n;
public:
    void getdata(int a)
    {
        n=a;
    }
    void solve()
    {
        int m=1;
        for(int i=0;i<((n+1)/2);i++)
        {
            for(int j=i;j<n/2;j++)
            {
                cout<<" ";
            }
            for(int k=0;k<m;k++)
            {
                cout<<"*";
            }
            m+=2;
            cout<<endl;
        }
    }
};
int main()
{
    pyramid p;
    int n;
    while(cin>>n)
    {
    if(n==0)
    break;
    p.getdata(n);
    p.solve();
    }
    return 0;
}
