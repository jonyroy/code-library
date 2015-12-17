#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,cou=0;
    string s;
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
       int c[15]={0};
      cin>>s;
      int t=1,tt=1;
      for(int j=0;j<s.size();j++)
        c[s[j]-48]++;
        for(int j=0;j<=k;j++)
        {
            if(c[j])
                ;
            else
            t=0;
        }
//        for(int j=k+1;j<=9;j++)
//            if(c[j])
//            tt=0;
            if(t)
                cou++;
    }
    cout<<cou<<endl;
    return 0;
}
