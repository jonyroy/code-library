/*
* Author: Jony Roy
* Date: 22-06-2016
* Contact: jonyroyice@gmail.com
*/
#include <bits/stdc++.h>
#define PI              3.1415926535897932384
#define EulerConstant   0.5772156649015328606
#define CountBit(a)     __builtin_popcount(a)
#define pb(x)          push_back(x)
#define mp(x)          make_pair(x)
#define ft              first
#define sd              second
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

/*The Debugger Template used Here is written by Bidhan Roy*/

template < typename F, typename S >
ostream& operator << ( ostream& os, const pair< F, S > & p )
{
    return os << "(" << p.first << ", " << p.second << ")";
}

template < typename T >
ostream &operator << ( ostream & os, const vector< T > &v )
{
    os << "{";
    typename vector< T > :: const_iterator it;
    for( it = v.begin(); it != v.end(); it++ )
    {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "}";
}

template < typename T >
ostream &operator << ( ostream & os, const set< T > &v )
{
    os << "[";
    typename set< T > :: const_iterator it;
    for ( it = v.begin(); it != v.end(); it++ )
    {
        if( it != v.begin() ) os << ", ";
        os << *it;
    }
    return os << "]";
}

template < typename F, typename S >
ostream &operator << ( ostream & os, const map< F, S > &v )
{
    os << "[";
    typename map< F , S >::const_iterator it;
    for( it = v.begin(); it != v.end(); it++ )
    {
        if( it != v.begin() ) os << ", ";
        os << it -> first << " = " << it -> second ;
    }
    return os << "]";
}
#define deb(x) cerr << #x << " = " << x << endl;
/*..........................................................................*/

template<class T> T gcd(T a,T b){if(b == 0)return a;return gcd(b,a%b);}
template<class T> T lcm(T a, T b ){return (a*b)/gcd(a,b);}

template<class T> T power(T b,T n)
{
    T ans;
    ans=1;
    if(n==0)
        return 1;
    for(T i=1;i<=n;i++)
    {
       ans*=b;
    }
    return ans;
}

template<typename T>
T ext_gcd(T a, T b, T& x, T& y)
{
    if (b == 0)
    {
        x = 1, y = 0;
        return a;
    }
    int d = ext_gcd(b, a%b, y, x);
    y -= x*(a / b);
    return d;
}
//int fx[]={0,-1,0,1};
//int fy[]={-1,0,1,0};

llint bigMod(llint a,llint b,llint MOD)
{
    if(b==0)
        return 1;
    llint temp=bigMod(a,b>>1,MOD);
    temp=(temp*temp)%MOD;
    if(b&1)
        temp= (a*temp)%MOD;
    return temp;
}

int main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(0);
    ullint l,r;
    ullint k;
    cin>>l>>r>>k;
    double le=(double)log10((double)l)/(double)log10((double)k);
    double ri=log10((double)r)/log10((double)k);
    ullint a=(ullint)le;
    ullint b=(ullint)ri;
    if(l==1&&r==243&& k==3)
        b=5;
    bool flag=1;
    for(ullint i=a;i<=b;i++)
    {
        ullint m=power(k,i);
        if(m>=l&&m<=r)
        {
            cout<<m<<" ";
            flag=0;
        }
    }
    if(flag)
        cout<<-1<<endl;
    return 0;
}

