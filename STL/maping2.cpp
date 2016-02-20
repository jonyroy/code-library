#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    string a;
    map<string,int>m;
    map<string,int>::iterator b;
     while (cin>>a)
    {
        m[a]++;
    }
    for(b=m.begin();b!=m.end();b++)
    {
    cout<<(*b).first<<" "<<(*b).second<<endl;
    }
    return 0;
}
