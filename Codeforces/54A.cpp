#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="hello",st;
    cin>>st;
    int i,j=0;
    for( i=0;i<=4;++i)
    {
         while(s[i]!=st[j]&&j<st.size())
         j++;
         if(j==st.size())
         break;
         j++;
    }
    if(i==5)
    cout<<"YES"<<endl;
    else
    cout<<"NO\n";
}
