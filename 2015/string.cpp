#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,str;
    cin>>s>>str;
    s.swap(str);
    str.swap(s);
    cout<<s<<" "<<str<<endl;
    return 0;
}
