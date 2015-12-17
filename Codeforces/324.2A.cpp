#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    if(t==2)
    {
        cout<<2;
        for(int i=1;i<n;i++)
            cout<<0;
    }
    else if(t==3)
    {
        cout<<3;
        for(int i=1;i<n;i++)
            cout<<0;
    }
    else if(t==4)
    {

            cout<<4;
            for(int i=1;i<n;i++)
                cout<<0;
    }
    else if(t==5)
    {
        cout<<5;
        for(int i=1;i<n;i++)
        cout<<0;

    }
    else if(t==6)
    {
        cout<<6;
        for(int i=1;i<n;i++)
            cout<<0;
    }
    else if(t==7)
    {
        cout<<7;
        for(int i=1;i<n;i++)
            cout<<0;
    }
    else if(t==8)
    {
        cout<<8;
        for(int i=1;i<n;i++)
            cout<<0;
    }
    else if(t==9)
    {
        cout<<9;
        for(int i=1;i<n;i++)
            cout<<0;
    }
    else if(t==10)
    {
        if(n==1)
            cout<<-1;
        else
        {
            cout<<1;
            for(int i=1;i<n;i++)
                cout<<0;
        }
    }
    return 0;
}

