/*
* Author: Jony Roy
* Date: 14-07-2016
* Contact: jonyroyice@gmail.com
*/
#include <bits/stdc++.h>
#define PI              3.1415926535897932384
#define EulerConstant   0.5772156649015328606
#define CountBit(a)     __builtin_popcount(a)
#define pb(x)          push_back(x)
#define mp(x,y)          make_pair(x,y)
#define ft              first
#define sd              second
#define deb(x) cerr << #x << " = " << x << endl;

using namespace std;
typedef double                   ddd;
typedef long long int            llint;
typedef unsigned long long int   ullint;
typedef long int                 lint;
typedef unsigned int             uint;
typedef unsigned long int        ulint;
typedef pair<int,int>            pint;
typedef pair<lint,lint>          plint;
typedef pair<llint,llint>        pllint;

template<class T> T power(T b,T a)
{
    T ans=1;
    if(a==0) return 1;
    for(T i=1; i<=a; i++)
    {
        ans*=b;
    }
    return ans;
}
string convert(llint n)
{
    string a;
    while(n)
    {
        if(n&1)
            a+='1';
        else
            a+='0';
        n=n/2;
    }
    return a;
}

llint abc(llint u,llint v)
{
    string x,y;
    x=convert(u);
    y=convert(v);
    int cn,cnt;
    cn=x.size();
    cnt=y.size();

    reverse(x.begin(),x.end());
    reverse(y.begin(),y.end());
    int i;
    llint ans=1;
    for(i=0; i<min(cn,cnt); i++)
    {
        if(x[i]!=y[i])
        {
            break;
        }
        else
        {
            if(i)
                ans=ans*2+(x[i]-48);
        }
    }
    return ans;
}
int main()
{

    int q;
    scanf("%d",&q);
    //string s=convert(q);
    //reverse(s.begin(),s.end());
    //cout<<s<<endl;
    map<llint,llint> m;
    while(q--)
    {
        llint t,u,v,w;
        cin>>t;
        if(t==1)
        {
            cin>>u>>v>>w;
            if(u>v)
            swap(u,v);
            llint ans=abc(u,v);
            //cout<<"kkkk="<<ans<<endl;
            while(ans<v)
            {
                m[v]+=w;
                v/=2;
            }
            while(ans<u)
            {
                m[u]+=w;
                u/=2;
            }
        }
        else
        {
            cin>>u>>v;
            llint sum=0;
            if(u>v)
            swap(u,v);
            llint ans=abc(u,v);
            //cout<<"kkkk="<<ans<<endl;
            while(ans<v)
            {
                sum+=m[v];
                v/=2;
            }
            while(ans<u)
            {
                sum+=m[u];
                u/=2;
            }
            cout<<sum<<endl;
        }
    }
}
