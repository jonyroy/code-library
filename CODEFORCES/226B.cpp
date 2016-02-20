#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin>>str;
    vector<int>a;
    int len=str.size(),sum=0;
    for(int i=0;i<=len-4;i++)
    {
        string s;
        s=str.substr(i,4);
        if(s=="bear")
            a.push_back(i);
//        cout<<s<<endl;
    }
    int m=a.size();

    for(int i=0;i<m;i++)
    {
        if(i==0)
            {
              int b=a[i]+1;
              int h=a[i]+3;
              int f=len-h;
              sum=sum+(f*b);
            }
            else
            {
               int b=a[i]-a[i-1];
               int h=a[i]+3;
               int f=len-h;
               sum=sum+(f*b);
            }
    }
    cout<<sum<<endl;
    return 0;
}
