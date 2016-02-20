#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int>a;
    cin>>n;
    if(n==1)
    {
        cout<<1<<endl<<1;
    }
    else if(n==2)
    {
        cout<<1<<endl<<2;
    }
    else if(n==3)
    {
        cout<<2<<endl<<1<<" "<<3;
    }
    else if(n==4)
    {
        cout<<4<<endl<<2<<" "<<4<<" "<<1<<" "<<3;
    }
    else{
    for(int i=1;i<=n;i+=2)
        a.push_back(i);
    for(int i=2;i<=n;i+=2)
    {
            a.push_back(i);
    }
    cout<<a.size()<<endl;
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<" ";
    }
    return 0;
}
