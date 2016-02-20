#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    long long int a=0,b=0,i;
    cin>>str;
    for(i=0;i<str.size();i++)
        if(str[i]=='^')
        break;
    for(int j=i+1;j<str.size();j++)
     if(str[j]>='1'&&str[j]<='9')
     a+=((str[j]-48)*(j-i));
    int k=1;
    for(int j=i-1;j>=0;j--)
        {
    if(str[j]>='1'&&str[j]<='9')
    b+=((str[j]-48)*k);
    k++;
        }
        if(a==b)
            cout<<"balance";
        else if(a>b)
            cout<<"right";
        else
            cout<<"left";
    return 0;
}
