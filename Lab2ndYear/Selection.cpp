#include<iostream>
#include<bits/stdc++.h>
#include<cstdio>
using namespace std;
class selection
{
    int a[100];
    int n;
public:
    void getdata(int b[ ],int m)
    {
        for(int i=0;i<m;i++)
        a[i]=b[i];
        n=m;
    }
    int MIN(int k)
    {
        int mn=a[k];
        int loc=k;
        for(int i=k+1;i<n;i++)
        {
            if(mn>a[i])
            {
                mn=a[i];
                loc=i;
            }
        }
        return loc;
    }
    void selected_value()
    {
        for(int i=0;i<n;i++)
    {
        int loc=MIN(i);
        int temp=a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }
    }
    void display()
    {
        cout<<a[0];
        for(int i=1;i<n;i++)
        cout<<" "<<a[i];
        cout<<endl<<endl;
    }
};
int main()
{
    int n;
    while(cin>>n)
    {
    int b[100];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    selection bb;
    bb.getdata(b,n);
    bb.selected_value();
    bb.display();
    }
    return 0;
}
