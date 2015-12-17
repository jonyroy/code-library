#include<iostream>
#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
class Insertion
{
    int a[100];
public:
    void getdata(int i,int n)
    {
        a[i]=n;
    }
    void process(int n)
    {
        a[0]=-INFINITY;
        for(int i=2;i<=n;i++)
        {
            int temp;
            temp=a[i];
            int ptr=i-1;
            while(temp<a[ptr])
            {
                a[ptr+1]=a[ptr];
                ptr-=1;
            }
            a[ptr+1]=temp;
        }
    }
    void display(int n)
    {
        cout<<a[1];
        for(int i=2;i<=n;i++)
        {
            cout<<" "<<a[i];
        }
        cout<<endl;
    }
};
int main()
{
    int n,m;
    Insertion IN;
    while(cin>>n)
    {
        if(n==0)
        break;
        for(int i=1;i<=n;i++)
        {
            cin>>m;
            IN.getdata(i,m);
        }
        IN.process(n);
        IN.display(n);
    }
    return 0;
}
