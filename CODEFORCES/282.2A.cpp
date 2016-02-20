#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[20]={2,7,2,3,3,4,2,5,1,2};
    string s;
    cin>>s;
    cout<<a[s[0]-48]*a[s[1]-48];
    return 0;
}
