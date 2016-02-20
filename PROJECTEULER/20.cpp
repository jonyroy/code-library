#include<bits/stdc++.h>
using namespace std;
int main()
{
    char str[500];
    int sum=0;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>str;
    for(int i=0;i<strlen(str);i++)
        sum=sum+(str[i]-48);
    cout<<sum;
}

