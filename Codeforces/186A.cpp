#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int n=str.size()-1;
    if(str[0]=='-'&&n>1)
      {
          if(str[n]<str[n-1])
            n--;
        str.erase(n,1);
        if(str.size()==2&&str[1]=='0')
            str.erase(0,1);
        cout<<str;
      }
    else
    cout<<str;
    return 0;
}
