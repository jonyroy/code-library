#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    vector<pair<int,int> >a;
    cin>>s;
    int len=s.size()-1;
    int b=s[len]-48;
    int n=-1;
    for(int i=0;i<len;i++)
    {
       if((s[i]-48)%2==0)
        a.push_back(make_pair(s[i]-48,i));
    }
    int m=a.size();
    if(m==0)
    {
        cout<<"-1";
        return 0;
    }
    for(int i=0;i<m-1;i++)
    {
        if(a[i].first<b)
        {
            swap(s[a[i].second],s[len]);
            cout<<s<<endl;
            return 0;
        }
    }
    swap(s[a[m-1].second],s[len]);
            cout<<s<<endl;
            return 0;
}
