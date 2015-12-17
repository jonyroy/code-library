#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>v,h;
    map<int,int>vv,h_h;
    int w,hh,n;
    string s;
    cin>>w>>hh>>n;
    v.insert(0); v.insert(w);
    vv[w]++;
    h.insert(0); h.insert(hh);
    h_h[hh]++;
    for(int i=1;i<=n;i++)
    {
        int k;
        cin>>s>>k;
        if(s=="H")
        {
            h.insert(k);
            set<int>::iterator it;
            map<int,int>::iterator it1;
            it=h.find(k); it++;
            int m=*it;
            it--; it--;
            int l=*it;
            it1=h_h.find(m-l);
            if(h_h[it1->first]>1)
                h_h[it1->first]--;
            else
            h_h.erase(it1);
            h_h[m-k]++;
            h_h[k-l]++;
            it1=h_h.end();
            it1--;
           long long int x=it1->first;
            it1=vv.end();
            it1--;
            long long int y=it1->first;
            cout<<x*y<<endl;
        }
        else
        {
            map<int,int>::iterator it1;
            v.insert(k);
            set<int>::iterator it;
            it=v.find(k); it++;
            int m=*it;
            it--;it--;
            int l=*it;
            it1=vv.find(m-l);
            if(vv[it1->first]>1)
                vv[it1->first]--;
            else
            vv.erase(it1);
            vv[m-k]++;
            vv[k-l]++;
            it1=vv.end();
            it1--;
            long long int x=it1->first;
            it1=h_h.end();
            it1--;
            long long int y=it1->first;
            cout<<x*y<<endl;
        }
    }
    return 0;
}
