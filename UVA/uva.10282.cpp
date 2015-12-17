#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,string>a;
    string in,sn;
    while(getline(cin,sn),sn.size())
    {
        string sm,s;
        stringstream jony;
        jony<<sn;
        jony>>s>>sm;
        a[sm]=s;
    }
    while(cin>>in)
    {
        string kk=a[in];
        if(kk.size())
            cout<<kk<<endl;
        else
            cout<<"eh\n";
    }
}
