#include<bits/stdc++.h>
using namespace std;
int a[1000];
int BinarySearch(int left,int right,int key)
{
    int mid=(left+right)/2;
    if(left>right)
        return 0;
    else if(a[mid]==key)
        return mid;
    else if(a[mid]>key)
        BinarySearch(left,mid-1,key);
    else
        BinarySearch(mid+1,right,key);
}
int main(int argc, char *argv[])
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
    }
    cout<<"Enter The Key=";
    int m;
    cin>>m;
    int cnt=BinarySearch(1,n,m);
    if(cnt==0)
        cout<<"Not Found\n";
    else
        cout<<"Position="<<cnt<<endl;
    return 0;
}

