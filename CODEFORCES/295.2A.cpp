#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a[200]={0};
    string s;
    cin>>n>>s;
    for(int i=0;i<n;i++)
    {
        a[s[i]]++;
    }
    for(int i=65;i<=90;i++)
    {
        if(a[i]>0||a[i+32]>0)
            ;
        else{
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}
