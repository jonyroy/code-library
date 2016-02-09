/*
 Date:19-12-2015
 Created By Jony Roy
 Be Happy & Enjoy The Moment.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,x0,y0,cnt=0;
    string s;
    cin>>x>>y>>x0>>y0>>s;
    int a[505][505]= {0};
    int len=s.length();
    int n=x0,m=y0;
    for(int i=0; i<len; i++)
    {
        if(n>=1&&n<=x&&m>=1&&m<=y)
        {
            if(a[n][m]==0)
            {
                a[n][m]=1;
                cnt++;
                cout<<1<<" ";
            }
            else
                cout<<0<<" ";
        }
        int r=n,t=m;
        if(s[i]=='L')
            m--;
        else if(s[i]=='R')
            m++;
        else if(s[i]=='U')
            n--;
        else
            n++;
        if(n>=1&&n<=x&&m>=1&&m<=y)
            ;
        else
        {
            n=r;
            m=t;
        }
    }
    cout<<x*y-cnt<<endl;
    return 0;
}
