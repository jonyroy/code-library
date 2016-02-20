#include<iostream>
#include<map>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    string a;
    map<string,int>m;
    map<string,int>::iterator it;
    while(cin>>a)
    {
        m[a]++;
    }
    for(it=m.begin();it!=m.end();it++)
    cout<<(*it).first<<"  "<<(*it).second<<endl;
    return 0;
}
