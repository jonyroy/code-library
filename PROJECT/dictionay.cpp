#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,string>dic;
    for(int i=1;i<=5;i++)
    {
        string a,b;
        cin>>a;
        getchar();
        getline(cin,b);
        dic[a]=b;
    }
    for(int i=1;i<=3;i++)
    {
        string a;
        cin>>a;
        cout<<dic[a]<<endl;
    }
}
