#include<bits/stdc++.h>
using namespace std;
int cnt(string s)
{
    int n[15]={0};
    for(int i=0;i<8;i++)
    {
        if(s[i]>='0'&&s[i]<='9')
        n[s[i]-48]++;
    }
    for(int i=0;i<10;i++)
    {
        if(n[i]==6)
        return 1;
    }
    s.erase(2,1);
    s.erase(4,1);
    for(int i=0;i<5;i++)
        if(s[i]<=s[i+1])
        return 3;
    return 2;

}
struct node
{
    int a,b,c;
};
int main()
{
    vector<node>m;
    vector<pair<int,string> >k;
    vector<string>jony,jo,jj;
    int n;
    cin>>n;
    int m1=-1,m2=-1,m3=-1;
    for(int i=0;i<n;i++)
    {
        int h;
        string ss;
        cin>>h>>ss;
        k.push_back(make_pair(h,ss));
        node knt;
        knt.a=0,knt.b=0,knt.c=0;
        for(int j=0;j<h;j++)
        {
            string sss;
            cin>>sss;
            int g=cnt(sss);
            if(g==1)
                knt.a++;
            else if(g==2)
                knt.b++;
            else
                knt.c++;
        }
        m1=max(m1,knt.a);
        m2=max(m2,knt.b);
        m3=max(m3,knt.c);
        m.push_back(knt);
    }
    for(int i=0;i<m.size();i++)
        {
            if(m[i].a==m1)
                jony.push_back(k[i].second);
            if(m[i].b==m2)
                jo.push_back(k[i].second);
            if(m[i].c==m3)
                jj.push_back(k[i].second);
        }
    cout<<"If you want to call a taxi, you should call:";
    if(jony.size()>=1)
    {
        cout<<" "<<jony[0];
        for(int i=1;i<jony.size();i++)
        cout<<", "<<jony[i];
        cout<<"."<<endl;
    }
    cout<<"If you want to order a pizza, you should call:";
    if(jo.size()>=1)
    {
        cout<<" "<<jo[0];
        for(int i=1;i<jo.size();i++)
        cout<<", "<<jo[i];
        cout<<"."<<endl;
    }
    cout<<"If you want to go to a cafe with a wonderful girl, you should call:";
    if(jj.size()>=1)
    {
        cout<<" "<<jj[0];
        for(int i=1;i<jj.size();i++)
        cout<<", "<<jj[i];
        cout<<"."<<endl;
    }
    return 0;
}
