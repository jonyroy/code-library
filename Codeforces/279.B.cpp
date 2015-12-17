#include<bits/stdc++.h>
using namespace std;
int arr[200050];
map<int,int>a;
map<int,int>b;
map<int,int>::iterator it;
int n,f,s,l,k;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int cnt,cn;
        cin>>cnt>>cn;
        if(cnt==0)
         f=cn;
        a[cnt]=cn;
        b[cnt]=b[cnt]+2;
        b[cn]=b[cn]+3;
    }
    int jo;
    for(it=b.begin();it!=b.end();it++)
    {
        if(it->second==2&&it->first>0)
        {
            jo=it->first;
            break;
        }
    }
    arr[1]=jo;
    arr[2]=f;
    int i=3;
    while(i<=n)
    {
        arr[i]=a[jo];
        arr[i+1]=a[f];
        jo=a[jo];
        f=a[f];
        i+=2;
    }
    for(int j=1;j<=n;j++)
        cout<<arr[j]<<" ";
    return 0;
}
